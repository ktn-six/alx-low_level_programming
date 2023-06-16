/*
 * File: 4-free_dlistint.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
