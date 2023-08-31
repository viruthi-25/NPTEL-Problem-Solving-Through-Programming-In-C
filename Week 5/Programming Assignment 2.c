#include <stdio.h>
 int main()
{
int N; 
scanf("%d",&N); 
int x=N;
int i=0;
while(x!=0)
{
  x=x/10;
  i++;
}
printf("The number %d contains %d digits.",N,i);
}
