/*
 *  === Числа и условия, задача 1:
 *
 *  Если n больше нуля, написать "Это положительное число.\n"
 *  Если n меньше нуля, написать "Это отрицательное число.\n"
 *  Если n равно нулю, написать "Это ноль.\n"
 *
 */

#include<stdio.h>
#include<cs50.h>

int main(void)
{
    // Запрашиваем у пользователя число и сохраняем его в переменной n
    int n = get_int("Введите число n: ");

    // Выводим на экран это число
    printf("Вы ввели %d.\n", n);

    // Решение задачи:
    // ...
}
