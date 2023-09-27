#include "main.h"
/**
 * puttts - printign a stringg
 * @c: string
 * Return: bytes return
 */
int puttts(char *c)
{
	int counttt = 0;
if (c)
{
for (counttt = 0; c[counttt] != '\0'; counttt++)
{
my_puttchar(c[counttt]);
}
}
return (counttt);
}
