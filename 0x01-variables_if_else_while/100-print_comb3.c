#include <stdio.h>
/**
*main-Entry point
*
*Return:0 for success
*/
int main(void)
{
int ch, c;
for (ch = '0'; ch <= '9'; ch++)
{
for (c = '2'; c <= '9'; c++)
{
putchar(ch);
if (c != ch)
{
putchar(c);
putchar(',');
} 
}
}
putchar('\n');
return (0);
}
