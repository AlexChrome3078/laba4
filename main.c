#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int victory(int a, int b);

int main()
{
    int a;
    int b;

    setlocale(LC_ALL, "RUS");

    printf("Введите номера кнопок A и B: ");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Ошибка ввода.\n");
        return 1;
    }

    if (victory(a, b))
        printf("Победа в раунде\n");
    else
        printf("Нет победы\n");

    return 0;
}

int victory(int a, int b)
{
    return ((a % 2 == 0 && b % 2 != 0) ||
            (a % 2 != 0 && b % 2 == 0));
}
