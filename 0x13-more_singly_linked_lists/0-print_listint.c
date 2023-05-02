#include "lists.h"
#include <stdio.h>

/**
 * print listint - print the int value in each element of a list.
 * @h: pointer to the head of a list.
 * Return: Number of elements in a list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
