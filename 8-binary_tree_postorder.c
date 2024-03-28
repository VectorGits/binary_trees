#include "binary_trees.h"
/**
 * binary_tree_postorder - Goes through a binary tree
 * using post-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 * Description: If tree or func is NULL, do nothing.
 *
 * Return: void
*/


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}