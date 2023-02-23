#include<stdio.h>
int main()
{
    int n,m,i,pos,j,temp,d=0;
    printf("ener the no of process");
    scanf("%d",&n);
     printf("ener the no of blocks");
    scanf("%d",m);
    int p[n],b[m],allo[n],a[m],c[m];
    for(i=0;i<n;i++)
    {
       printf("process%d",i);
       printf("enter the process size");
       scanf("%d",&p[i]);
    }
     for(i=0;i<m;i++)
    {
       printf("block%d",i);
       printf("enter the block size");
       scanf("%d",&b[i]);
    }
     for(i=0;i<n;i++)
    {
       allo[i]==-1;
    }
    //sorting
   for(i=0;i=m-1;i++)
   {
       pos=i;
       for(j=i+1;j=m;j++)
       {
         if(b[j]<b[pos])
         {
             pos=j;             
         }
         temp=b[i];
         b[i]=b[pos];
         b[pos]=temp;
       }
   }
   for(i=m-1;i>=0;i--)
   {
      c[d]=b[j];
       d=d+1;
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
         if(p[i]<=c[j])
         {
             allo[i]=j;
             a[i]=c[j];
             c[j]=c[j]-p[i];
             break;
         }
       }
   }
   printf("process no \t\t  process size\t\t  block size\t\t block no\n");
   for(i=0;i<n;i++)
   {
       printf("%d",i);
       printf("\t\t %d",p[i]);
       if(allo[i]!=-1)
       {
         printf("\t\t %d",a[i]);  
          printf("\t\t %d",allo[i]); 
       }
       else
       {
           printf("not allocated");
       }

       }printf("\n");
   }
 return 0; 

