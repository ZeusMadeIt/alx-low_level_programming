#include "main.h"

/**
 * _strcmp - compare
 * @s1 : pointerto char params
 * @s2 : pointer to char params
 * Return: *dest
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	res = s1[i] - s2[i];
	return (res);
}
