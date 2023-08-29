#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{

	while (head != NULL)
	{
		listint_t *temp = head;
		temp = head->next;
		free(temp);
	}
}
