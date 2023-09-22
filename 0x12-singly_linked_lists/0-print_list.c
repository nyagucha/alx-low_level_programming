#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function that prints all the elements of a linked list
 * @h: a pointer to the list_t list to print
 * Return: The number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
