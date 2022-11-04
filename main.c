#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s[2048],save,readfrom,i;
    for(i=0;i<=128;i++)
    {
       printf("\nPlease enter options: \n[1]Save to array\n[2]Read from array\nOption: ");
       save==0;
       scanf("%d",&save);
       if(save==1)
       {
           printf("\nEnter int to save to RAM (up to 128 starts with 0 in location): ");
           scanf("%d" ,&s[i]);
           printf("\nYour int is saved at %d in array\n",i);

       }
        if(save==2)
       {
           printf("Enter location in array: ");
           scanf("%d" ,&readfrom);
           printf("\n location: %d: %d ",i, s[readfrom]);


       }



       }




    return 0;
}
