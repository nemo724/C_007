#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
typedef struct { int x, y; }POINT;

void make_point(POINT *);//x,y의 좌표를 결정하는 함수
void calculate_circle_equation(POINT*,int*,int*,int);//원의 방정식을 계산 하고 원의 내,외의 위치하는 지에따라 카운트

void make_point(POINT* pp)
{pp->x = rand() % 100;//2*radius==원을 내접하고 있는 사각형 한 변의 길이(=이는 유효한 x축의 길이로 최소 0에서 최대 100까지 나올 수 있다)
pp->y = rand() % 100;//2*radius==원을 내접하고 있는 사각형 한 변의 길이(=이는 유효한 y축의 길이로 최소 0에서 최대 100까지 나올 수 있다)
}

void calculate_circle_equation(POINT* pp, int* icntp, int*ocntp,int radius)
{int px=pow((pp->x)-radius,2);
int py= pow((pp->y) - radius, 2);
double result = sqrt(px + py, 2);

if(result<=pow(radius,2))
	{*icntp += 1;}
else if (result > pow(radius, 2))
{*ocntp += 1;}


}













int main(void)
{POINT p;
int icnt = 0;
int ocnt = 0;
int radius = 50;
double pi;

srand((unsigned int)time(NULL));

make_point(&p);
calculate_circle_equation(&p, &icnt, &ocnt, radius);



}
