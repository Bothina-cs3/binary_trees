#include "binary_trees.h"
/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, perfect_tree, n;

	if (tree == NULL)
		return (0);

	h = binary_tree_height(tree);
	n = binary_tree_size(tree);
	perfect_tree = (1 << h) - 1;

	return (n == perfect_tree);
}

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_h, r_h;

	if (tree == NULL)
		return (0);

	l_h = binary_tree_height(tree->left);
	r_h = binary_tree_height(tree->right);

	return (1 + (l_h > r_h ? l_h : r_h));
}

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, the function must return 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

