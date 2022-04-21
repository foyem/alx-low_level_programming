#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements of linkedlist
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nbr_nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
				if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}
