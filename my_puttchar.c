#include "main.h"
/**
 * my_puttchar - printing a char
 * @c: char input
 * Return: 1
 */
int my_puttchar(char c)
{
	return (write(1, &c, 1));
}
