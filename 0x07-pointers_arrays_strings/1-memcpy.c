#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: where n bytes are copied into from src
 * @src: bytes of data to be copied into dest
 * @n: number of bytes to be copied
 * Return: returns a pointer to dest
 */
char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
