﻿#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");

	printf("1\n\t2\n\t\t3\n");

	printf("%d %130d %130d %130d\n", 1, 2, 3, 4);


	printf("%10.5f\n ", 12.234657);

	printf("Деление %d на %d равен %d\n ", 7, 5, 7 / 5);
	printf("Умножение %d на %d равен %d\n ", 2000, 4, 2000 * 4);

	printf("%d разделить %d равно %d\n ", 5, 2, 5 / 2);      //d-целочисленное
	printf("%f разделить %f равно %f\n ", 5., 2., 5. / 2);	//f-с плавающей точкой
	printf("%g разделить %g равно %g\n ", 5., 2., 5. / 2);	//g-%f или %e, с выбором по принципу, что короче
	printf("%e разделить %e равно %e\n ", 5., 2., 5. / 2);	//e-десятичное число в виде x.xx e+xx
}