#include "shell.h"

/**
 * bfree --  Frees a pointer and NULLs the address
 * @ptr: address of the pointer to free
 * alx
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}

	return (0);
}
