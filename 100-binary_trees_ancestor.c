#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, return NULL
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *x[1024], *y[1024];
	int a, b;

	if (!first || !second)
		return (NULL);

	for (a = 0; first; a++)
	{
		x[a] = (binary_tree_t *)first;
		first = first->parent;
	}

	for (b = 0; second; b++)
	{
		y[b] = (binary_tree_t *)second;
		second = second->parent;
	}

	while (a >= 0 && b >= 0 && x[a] == y[b])
	{
		a--;
		b--;
	}

	return (x[a + 1]);
}
