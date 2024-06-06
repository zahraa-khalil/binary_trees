#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left_side = 0, right_side = 0;

	if (!tree)
		return (0);

	left_side = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
	right_side = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;

	if (left_side > right_side)
		return (left_side);
	else
		return (right_side);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
