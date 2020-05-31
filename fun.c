#include "Prototype.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

extern int kst;
extern POINT arr[KST];

void Input(void)
{
    for (int i = 0; i < kst; i++)
    {
        puts("Введіть x");
        scanf("%lf", &arr[i].x);
        rewind(stdin);
        puts("Введіть y");
        scanf("%lf", &arr[i].y);
        rewind(stdin);
        puts("Введіть колір (наприклад: green)");
        gets(arr[i].color);
    }
}

void Output(void)
{
    for (int i = 0; i < kst; i++)
    {
        printf("\n%2d)%-20s x = %.3lf\ty = %.3lf", i + 1, arr[i].color, arr[i].x, arr[i].y);
    }
}

void Sort_color(void)
{
    POINT temp;
    for (int i = 0; i < kst; i++)
        for (int j = 0; j < kst - i - 1; j++)
            if (strcmp(arr[j].color, arr[j + 1].color) > 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

void PrintMinDistance(void)
{
    POINT p1, p2;


    for (int i = 0; i < kst; i++)
    {
        if (strcmp(arr[i].color, arr[i + 1].color) != 0)
            continue;
        p1 = arr[i];
        p2 = arr[i + 1];


        double MinDistance = Distance(p1, p2);


        for (; i < kst && strcmp(arr[i].color, arr[i + 1].color) == 0; i++)
            for (int j = 0; j < kst - i - 1; j++)
                if (MinDistance > Distance(arr[j], arr[j + 1])) {
                    p1 = arr[j];
                    p2 = arr[j + 1];
                }

        printf("\n\n\n%-15s %.3lf\t%.3lf", p1.color, p1.x, p1.y);
        printf("\n%-15s %.3lf\t%.3lf", p2.color, p2.x, p2.y);
    }
}

double Distance(POINT p1, POINT p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}
