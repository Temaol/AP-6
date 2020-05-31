#include <stdio.h>
#include "Prototype.h"
int kst;
POINT arr[KST];
int main()
{


    puts("Введіть кількість даних які хочете ввести");
    scanf("%d", &kst);
    rewind(stdin);

    puts("Вводіть ваші елементи");
    Input();

    puts("Bаші елементи");
    Output();

    puts("\n\n\nВідсортовані за кольором");
    Sort_color();
    Output();


    PrintMinDistance();

    puts("");

    return 0;
}
