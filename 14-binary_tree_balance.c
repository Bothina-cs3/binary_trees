#include "binary_trees.h"
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
 * binary_tree_balance - a function that measures the balance
 * factor of a binary tree
 * @tree: is a pointer to the root node of the tree to
 * measure the balance factor
 * Return: If tree is NULL, return 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_h, r_h;

	if (tree == NULL)
	return (0);

	l_h = (int)binary_tree_height(tree->left);
	r_h = (int)binary_tree_height(tree->right);

	return (l_h - r_h);
}

