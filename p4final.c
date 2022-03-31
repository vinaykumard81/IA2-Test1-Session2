#include<stdio.h>
int input_array_size()
{
  int x;
  printf("How many numbers do you want to enter:- ");
  scanf("%d",&x);
  return x;
}
void input_array(int n, int a[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("Enter %dth number:- ",i+1);
    scanf("%d",&a[i]);
  }
}
int sum_composite(int n, int a[n])
{
  int k,i,sum=0,count=0;
  for(i=0;i<n;i++)
  {
    for(k=1;a[i]%k==0 && k<a[i];k++)
    {
      count=count+1;
    }
    if(count>2)
    sum=sum+a[i];
  }
  return sum;
}
void output(int sum)
{
  printf("Sum of all composite numbers is %d",sum);
}
int main()
{
  int n,result;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  result=sum_composite(n,a);
  output(result);
  return 0;
}
