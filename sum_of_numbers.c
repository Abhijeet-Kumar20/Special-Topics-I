//Write a program to find the sum of n different numbers using four functions
#include<stdio.h>
int main()
{
int n, sum=0;
printf("Enter the total number of numbers:\n");
scanf("%d", &n);
int a[n];
for(int i=1; i<=n; i++)
{
printf("Enter number %d: ", i);
scanf("%d", &a[i]);
sum = sum + a[i];
}
printf("The final sum is: %d\n",sum);
return 0;
}

