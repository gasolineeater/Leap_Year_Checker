#include <stdio.h>

char	*lyc(int year)
{
	if ((year % 4 == 0) || ((year % 4 == 0) && (year % 400 == 0)))
		printf("Leap Year.\n");
	else
		printf("Not a Leap Year.\n");
	return (NULL);
}

int main(void)
{
	printf("%s", lyc(1904));
	return (0);
}
