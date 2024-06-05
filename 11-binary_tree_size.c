#include "binary_trees.h"

/**
 * binary_tree_size - function that return the size of a tree
 * @tree: tree to check
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_side = 0, right_side = 0, size = 0;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_size(tree->left);
	right_side = binary_tree_size(tree->right);
	size = left_side + right_side + 1;

	return (size);
}
