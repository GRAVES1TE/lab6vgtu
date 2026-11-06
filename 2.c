#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

/*
    Контрольные примеры для кусочно-заданной функции F(x):
    Вариант 5:
    F(x) = -3 * x + 9, при x <= 7
    F(x) = 1 / (x - 7), при x > 7

    1) При x <= 7:
       x = 0  -> F(0)  = -3 * 0 + 9  = 9.000000
       x = 7  -> F(7)  = -3 * 7 + 9  = -12.000000
       x = -2 -> F(-2) = -3 * (-2) + 9 = 15.000000

    2) При x > 7:
       x = 8   -> F(8)   = 1 / (8 - 7)   = 1.000000
       x = 11  -> F(11)  = 1 / (11 - 7)  = 0.250000
       x = 7.5 -> F(7.5) = 1 / (7.5 - 7) = 2.000000
*/

int main(void)
{
    setlocale(LC_ALL, "RUS");
    setlocale(LC_NUMERIC, "C");

    double x;

    printf("Введите x: ");
    if (scanf("%lf", &x) != 1)
    {
        printf("Ошибка: некорректный ввод x.\n");
        return 1;
    }

    printf("F(%lf) = %lf\n", x, (x <= 7.0) ? (-3.0 * x + 9.0) : (1.0 / (x - 7.0)));

    return 0;
}
