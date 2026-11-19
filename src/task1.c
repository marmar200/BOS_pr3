#include "task1.h"

#include <stdio.h>

int task1(void)
{
    int a;
    int b;
    int *pointer_a;
    int *pointer_b;

    printf("Задача 1. Введите два целых числа a и b:\n");
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "pr3: для задачи 1 нужны два целых числа\n");
        return 1;
    }

    pointer_a = &a;
    pointer_b = &b;
    *pointer_a = *pointer_a * 2;
    *pointer_b = *pointer_b / 2;

    printf("После изменения через указатели: a = %d, b = %d\n\n", a, b);
    return 0;
}
