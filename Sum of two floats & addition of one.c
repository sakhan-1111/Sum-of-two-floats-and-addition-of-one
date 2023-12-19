#include <stdio.h>
#include <conio.h>

float sum(float a, float b, float c);
int main(void)
{
    float x,y,z,s;
    scanf("%f %f %f", &x, &y , &z);
    s=sum(x, y, z);
    printf("Result = %f",s);
    return 0;
}
float sum(float a, float b, float c)
{
    float r;
    r=(a*b)+c;
    return r;
}
