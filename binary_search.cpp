#include <stdio.h>
int main()
{
 int number[25],n,data,i,flag=0,low,high,mid;
 printf("\n Enter the number of elements");
 scanf("%d",& n);
 printf("\n Enter the element in assending order");
 for(i=0;i<n;i++)
 {
    scanf("%d",& number[i]);
}
printf("Enter the element to be searchd");
scanf("%d",& data);
low=0;high=n-1;
while(low<=high)
{
 mid=(low+high)/2;
 if(number[mid]==data)
 {
   flag=1;
   break;
}
else if(data<number[mid])
{
 high=mid-1;
}
else
{
 low=mid+1;
}
}
if(flag==1)
{
  printf("\n data found at location %d",mid+1);
}
else
{ 
  printf("\n data not found");
}                                                            
}