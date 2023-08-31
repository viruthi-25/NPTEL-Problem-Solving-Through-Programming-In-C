#include<stdio.h>
int main()
{
int N;
float sum = 0.0;
scanf("%d",&N);
for(float i=1;i<=N;i++)
{
  sum=sum+(1/i);
}
printf("Sum of the series is: %.2f\n",sum);
}
