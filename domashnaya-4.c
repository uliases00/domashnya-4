#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, ".UTF-8");

	int A, B, C, D; //состояние датчиков (0 или 1)
	int W; // результат 1 - запись включена, 0 - запись выключена

	printf("Введите состояние датчиков A B C D 1(запись включена) или 0(запись выключена) через пробел\n");
	scanf("%d %d %d %d", &A, &B, &C, &D);

	W = (A && B && C) || (A && B && D) || (A && C && D) || (B && C && D);

	if (W)
		printf("Запись включена (сработало не менее трех датчиков)\n");
	else
		printf("Запись выключена\n");
	
	return 0;
}