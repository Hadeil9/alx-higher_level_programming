#include <stdlib>
#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - checks if list is cyelical
 * @list: pointer to list check
 * Return: 1 if cyelical, 0 otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list, *fast = list;

	if (list == NULL || list->next == NULL)
		return (0);

	slow = list->next;
	fast = list->next->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
