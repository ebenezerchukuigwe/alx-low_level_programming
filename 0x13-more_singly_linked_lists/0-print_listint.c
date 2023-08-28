#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: linked list of type listint_t to print
 *
 * Return: number(count) of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->data);
		h = h->next;
		count++;
	}

	return (count);
}
