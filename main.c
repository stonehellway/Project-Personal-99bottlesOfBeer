/*Sing 99 bottles of beers on the wall
I'm calling Bill Gates */

#include <stdio.h>

#define MAX 99

int main(void)
{
	int i = MAX;
	char *bottle = "bottles";

	while (i > 0)
	{
		printf("%i %s of beer on the wall, %i %s of beer\n", i, bottle, i, bottle);
		i--;

		if (i == 1)
			bottle = "bottle";

		if (i == 0)
		{
			printf("Take one down and pass it around, no more bottles of beer on the wall.\n\n");
			break;
		}
		else
			printf("Take one down and pass it around, %i %s of beer on the wall.\n\n", i, bottle);
	}

	return 0;
}
