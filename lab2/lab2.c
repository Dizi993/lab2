#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	int N=12, K=56;
	printf("Сейчас %d часов %d минут 00 секунд\n",N,K);
	printf("Идет %d минута суток\n", N * 60 + K);
	printf("До полуночи осталось %d часов и %d минут\n", 24 - N, 60 - K);
	printf("С 8.00 прошло %d секунд\n", N * 60 * 60 + K * 60);
	printf("Текущий час  = %f суток  и текущая минута = %f часа", N / 24., K / 60.);
	




}

