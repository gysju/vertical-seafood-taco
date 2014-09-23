#include <stdio.h>

void kek( int lel )
{
	printf("%i \n", lel);
}

int main()
{
	int cpt = 0;
	while (1)
	{
		kek(cpt);
		cpt++;
	}
}