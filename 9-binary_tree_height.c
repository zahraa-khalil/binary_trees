#include "binary_trees.h"

/**
 * __binary_tree_height - implicit Function that measures the height of a binary tree
 * @tree: is a pointer to the root node
 * Return: the height
 */
size_t __binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return -1;
	else
	{
		int left_side;
		int right_side;
		left_side = __binary_tree_height(tree->left);
		right_side = __binary_tree_height(tree->right);
		if (left_side > right_side)
		{
			return left_side + 1;
		}
		else
			return right_side + 1;
	}
}

/**
 * binary_tree_height - implicit Function that measures the height of a binary tree
 * @tree: is a pointer to the root node
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return 0;

	return __binary_tree_height(tree);
}
