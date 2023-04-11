#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - Extract all the words from an string.
 * @str: String.
 *
 * Return: Array of words.
 */
char **strtow(char *str)
{

	int i = 0, j = 0, pos, t;
	char **tmp;

	if (str == NULL || _strcmp(str, "") || (words(str) == 0))
	{
		return (NULL);
	}
	tmp = malloc(sizeof(int *) * (words(str) + 1));
	if (tmp == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		if (str[i] != ' ')
		{
			pos = _strlen(str, i);
			tmp[j] = malloc(sizeof(char) * (pos + 1));
			if (tmp[j] == NULL)
			{
				for (t = j; t >= 0; t--)
				{
					free(tmp[t]);
				}
				free(tmp);
				return (NULL);
			}
			_strcpy(str, i, tmp[j]);
			j++;
			i += pos;
		}
		else
		{
			i++;
		}
	}
	tmp[j] = NULL;
	return (tmp);
}

