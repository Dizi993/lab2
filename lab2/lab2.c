#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");

	int n = 4;

	printf("Дано:\n");
	printf("\t%d\n", n);
	printf("\t%d\n", 393);
	printf("       ------\n");
	printf("Oтвет:\n");
	printf("\t%+06.2f",(n / 393.));	
}

