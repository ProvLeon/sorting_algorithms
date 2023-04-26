#include "sort.h"

/**
 * insertion_sort_list - function to swap a doubly linked list
 * @list: double pointer that points to the first node
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		insert_node(list, current);
		current = current->next;
		print_list(*list);
	}
}

/**
 * insert_node - function to swap the nodes
 * @list: double pointer to hold the first node
 * @node: is a pointer to hold any other secondary node
 */
void insert_node(listint_t **list, listint_t *node)
{
	listint_t *temp = node->prev;

	while (temp != NULL && temp->n > node->n)
	{
		temp->next = node->next;
		if (node->next != NULL)
			node->next->prev = temp;
		node->next = temp;
		node->prev = temp->prev;
		temp->prev = node;
		if (node->prev == NULL)
			*list = node;
		else
			node->prev->next = node;
		temp = node->prev;
	}
}
