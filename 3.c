#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "RUS");

    int hours, minutes;

    printf("Введите часы (0-24) и минуты (0-60): ");
    if (scanf("%d %d", &hours, &minutes) != 2)
    {
        printf("Ошибка: некорректный ввод данных.\n");
        return 1;
    }

    if (hours < 0 || hours > 24 || minutes < 0 || minutes > 60 || (hours == 24 && minutes > 0))
    {
        printf("Ошибка: часы должны быть от 0 до 24, а минуты от 0 до 60 (для 24 часов минуты равны 0).\n");
        return 1;
    }

    int total = hours * 60 + minutes;
    if (total >= 1440)
    {
        total %= 1440;
    }

    int dist_midnight = (total < 1440 - total) ? total : (1440 - total);
    int dist_noon = abs(total - 720);

    if (dist_noon < dist_midnight)
    {
        printf("Ближе к полудню: %d мин.\n", dist_noon);
    }
    else if (dist_midnight < dist_noon)
    {
        printf("Ближе к полуночи: %d мин.\n", dist_midnight);
    }
    else
    {
        printf("Время до полудня и до полуночи одинаково: %d мин.\n", dist_noon);
    }

    return 0;
}
