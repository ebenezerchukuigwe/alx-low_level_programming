#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_t - returns the number of elements in a linked list
 *@h: pointer makes list
 * Return: elements in h
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
