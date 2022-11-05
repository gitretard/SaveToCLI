#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    unsigned int main[4096],save,i,secopt,saveloc,thirdopt;
    unsigned int nameheader[2048]; 
    printf("Please enter a valid option. Idk how to handle errors yet!\n");
    for(i=0;i<=128;i++)
    {
       
       printf("Please enter options: \n[1]Save to array\n[2]Read from array\nOption: ");
       save==0;
       scanf("%d",&save);
       if(save==1)
       {
           printf("Please enter option:\n[1]Use current incrementing location: %d\n[2]Enter desired location\nOption: ",i);
           scanf("%d",&secopt);
           if (secopt==1)
           {
             printf("Please enter int to save to %d in array location %d: ",i,saveloc);
             saveloc = i;
             scanf("%d",&main[saveloc]);
             /*printf("Do you want a header name for int in array location %d?\n[1]Yes\n[2]No\nOption: ",saveloc);
             scanf("%d",&thirdopt);
             if (thirdopt==1)
             {
                printf("Enter header name for %d: ",saveloc);
                scanf("%s",&nameheader[saveloc]);
             }*/
             printf("\nYour int is saved at %d in array\n",saveloc);
           }
           else if(secopt==2)
           {
             printf("Enter position to save to array: ");
             scanf("%d",&saveloc);
             printf("Enter int to save to array location %d: ",saveloc);
             scanf("%d",&main[saveloc]);
             /*printf("Do you want a header name for int in array location %d?\n[1]Yes\n[2]No\nOption: ",saveloc);
             scanf("%d",&thirdopt);
             if (thirdopt==1)
             {
                printf("Enter header name for %d: ",saveloc);
                scanf("%s",&nameheader[saveloc]);
             }*/
             printf("\nYour int is saved at %d in array\n",saveloc);
           }
          
           }
         
        if(save==2)
       {
           printf("Enter location in array: ");
           scanf("%d" ,&saveloc);
           printf("\n location: %d: %d \n",saveloc, main[saveloc]);
         
       }
          
       
            
       }


      


    return 0;
    
}
