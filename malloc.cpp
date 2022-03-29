#include<stdio.h>
#include<stdlib.h>
int main(){

int i,n,*ptr,sum=0;
printf("enter number of element\n");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
if(ptr==NULL)
{
	printf("memory does not exist\n");
	exit(0);
	
}
printf("enter in pointer variable\n");
for(i=0;i<n;i++)
{
	scanf("%d",ptr+i);
	sum=sum+*(ptr+i);
}
printf("sum=%d",sum);
free(ptr);
return 0;
}
