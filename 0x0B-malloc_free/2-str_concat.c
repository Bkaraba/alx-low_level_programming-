#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*str_concat - duplicates a string.
*@s1: string.
*@s2: string
*
*Return: pointer to string concatenated
*/

char *str_concat(char *s1, char *s2)
{
char *ar;
int len, len2;
int i = 0;
int j = 0;
len = strlen(s1);
len2 = strlen(s2);
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
ar = malloc(sizeof(*s1) * (len2 + len));
if (ar == NULL)
{
fprintf(stderr, "failled to allocate memory\n");
return (NULL);
}
while(i < len)
{
ar[i] = as1[i];
i++;
}
while(j <= len1)
ar[j] = s2[j];
j++;
}
return (ar);
}
