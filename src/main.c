#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"

int main(void)
{
    if (task1() != 0) {
        return 1;
    }
    if (task2() != 0) {
        return 1;
    }
    if (task3() != 0) {
        return 1;
    }
    if (task4() != 0) {
        return 1;
    }
    return 0;
}
