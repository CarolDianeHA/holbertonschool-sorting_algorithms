#include "sort.h"

/**
 * insertion_sort_list - Function that sorts
 * a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm.
 * @list: list pointer
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux, *swap;

	if (!list)
		return;
	aux = *list;
	while (aux->next != NULL)
	{
		aux = aux->next;
		swap = aux;

		while (swap->prev != NULL && swap->n < swap->prev->n)
		{
			swap->prev->next = swap->next;
			if (swap->next != NULL)
				swap->next->prev = swap->prev;
			swap->next = swap->prev;
			swap->prev = aux->prev->prev;
			if (swap->prev != NULL)
				swap->prev->next = swap;
			swap->next->prev = swap;

			if (swap->prev == NULL)
				*list = swap;

			print_list(*list);
		}

	}

}
