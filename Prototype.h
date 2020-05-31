#define KST_STR 50    //розмір стрічки кольору
#define KST 30             //максимальна кількість даних які вводимо


typedef struct info
{
    double x, y;
    char color[KST_STR];
}POINT;

double Distance(POINT p1, POINT p2);

void Input(void);
void Output(void);
void Sort_color(void);
void PrintMinDistance(void);
