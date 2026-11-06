#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "RUS");

    int year;

    printf("Введите год: ");
    if (scanf("%d", &year) != 1)
    {
        printf("Ошибка: некорректный ввод года.\n");
        return 1;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("год %d високосный\n", year);
    }
    else
    {
        printf("год %d не високосный\n", year);
    }

    return 0;
}
