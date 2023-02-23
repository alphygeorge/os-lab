#include<stdio.h>
int main()
{
 int n,i,f,j,avail,count=0,k,freq[20];
 printf("enter the number of pages\n");
 scanf("%d",&n);
 int a[n],frame[10];
 printf("enter the reference string\n");
 for(i=0;i<n;i++)
 {
 scanf("\n%d",&a[i]);
 }
 printf(" enter the number of frames");
 scanf("\n%d",&f);
 for(i=0;i<f;i++)
 frame[i]= -1;
 j=0;
 printf("\tref string\t page frames\n");
 for(i=0;i<n;i++)
 {
 printf("%d\t\t",a[i]);
 avail=0;
 for(k=0;k<f;k++)
 if(frame[k]==a[i])
{
     printf("no replacement");
 avail=1;
 freq[k]++;
 }
 if (avail==0)
 {
 frame[j]=a[i];
j=(j+1)%f;
count++;
for(k=0;k<f;k++)
printf("%d\t",frame[k]);
}
 printf("\n");
}
 printf("Page Fault Is %d",count);
 return 0;}
