#include "binary_trees.h"
/**
 * binary_tree_depth - a function that measures the depth of
 * a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: Depth of the node, 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t Depth = 0;

	if (tree == NULL)
	return (0);

	while (tree->parent != NULL)
	{
		Depth++;
		tree = tree->parent;
	}

		return (Depth);
}

