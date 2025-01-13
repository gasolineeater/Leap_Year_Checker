#include <stdio.h>

int	lyc(int year)
{
	int res;

	res = 0;
	if ((year / 4) || ((year / 4) && (year / 400)))
	{
		printf("Leap Year.");
	}
	else
		printf("Not a Leap Year.")
	return (0);
}
