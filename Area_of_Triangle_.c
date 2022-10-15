#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,p,s,Area;
    scanf("%f %f %f",&a,&b,&c);
    p = a + b + c;
    s = (a + b + c)/2;
    Area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("%0.2f",Area);
}