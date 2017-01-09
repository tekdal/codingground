#include <stdio.h>
int main()
{  int d[12]={1,2,2,3,3,3,4,4,4,4,5,5};int i,t=0;
   for (i=0;i<12;i++)
    {
       t=t+1;
       if(d[i+1]>d[i])
       {
           printf("%d %d \n", d[i],t);
           t=0;
       }
    }
    return 0;
}