#include <stdio.h>
int main()
{
     
    
    int array[50],i,n,option,pos;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("enter the elements in the array: ");
    scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
                   printf("%d",&array[i]);
    do
    {
         printf("\n******choose an option******");
         printf("\n      1)inserted");
         printf("\n      2)deleted");
         printf("\n      3)exit");
         printf("\n      4)display");
         scanf("%d",&option);
         switch(option)
         {
             //insertion of the array
             case 1:printf("enter the position of the array: ");
                    scanf("%d",&pos);
                    printf("enter the value to be entered: ");
                    scanf("%d",&array[pos]);
                    
                    
                    break;
                    //delete array operation
            case 2:        printf("enter the position of the array to delete: ");
                           scanf("%d",&pos);
                            for(int val=0;val<=n;val++)
                            { 
                                if(val>=pos){
                                    array[i]=array[i+1];
                                }
                                
                                
                            }
                           n--;
                           break;
                    
            //exit array operation
            case 3:printf("exit");
                   break;
                   default:printf("invalid output");
                   //display the array
            case 4:printf("resultant array is: ");
                   for(i=0;i<n;i++)
                   printf("%d",&array[i]);
                   
         }
         
    }
    while("option!=4");
    return 0;
    
}