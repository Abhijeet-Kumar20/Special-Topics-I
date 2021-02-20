//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
float h, d, b, x;
printf("Enter height: ");
scanf("%f", &h);
printf("Enter depth: ");
scanf("%f", &d);
printf("Enter breadth: ");
scanf("%f", &b);
x = ((h*d*b)+(d/b))*1/3;
printf("Volume of tromboloid is: %f \n", x);
return 0;
}
