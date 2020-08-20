#include "holberton.h"

/**
* countArgs - for count the number of the arguments
* @args: the of input array of strings now
* Return: number of the strings now
*/
int countArgs(char **args)
{
	register int i = 0;

	while (args[i])
		i++;
	return (i);
}

/**
* _atoi - the change string to an integer now
* @s: input string
* Return: -1 if it's not a valid number, else converted number
*/
int _atoi(char *s)
{
	register int i = 0;
	unsigned long num = 0;

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + s[i] - '0';
		else
			return (-1);
		i++;
	}
	if (num > INT_MAX)
	{
		return (-1);
	}
	return (num);
}
