#include "binary_trees.h"

/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: size of tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_side = 0, right_side = 0, leaf = 0;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_leaves(tree->left);
	right_side = binary_tree_leaves(tree->right);
	leaf = left_side + right_side;
	if (!left_side && !right_side)
		return (leaf + 1);

	return (leaf);
}
