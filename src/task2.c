#include "task2.h"

#include <stdio.h>
#include <stdlib.h>

int task2(void)
{
    float *first = malloc(sizeof(*first));
    float *second = malloc(sizeof(*second));
    float *third = malloc(sizeof(*third));
    float saved;

    printf("Задача 2. Три динамические вещественные переменные.\n");
    if (first == NULL || second == NULL || third == NULL) {
        fprintf(stderr, "pr3: не удалось выделить память\n");
        free(first);
        free(second);
        free(third);
        return 1;
    }

    *first = 1.5f;
    *second = 4.25f;
    *third = -2.0f;

    printf("До обмена: %.2f %.2f %.2f\n", (double)*first, (double)*second, (double)*third);

    saved = *first;
    *first = *second;
    *second = saved;

    printf("После обмена первых двух: %.2f %.2f %.2f\n\n", (double)*first, (double)*second, (double)*third);

    free(first);
    free(second);
    free(third);
    return 0;
}
