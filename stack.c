#include <stdio.h>
int main()
{
     
    
    int n,i,stack[50],option,value,top=-1;
    printf("enter the size of the stack: ");
    scanf("%d",&n);
    printf("enter the elements in the stack: ");
    for(i=0;i<n;i++)
    scanf("%d",&stack[i]);
    do
    {
        printf("******select operation******");
        printf("\n      1)pusf: ");
        printf("\n      2)pop:  ");
        printf(" \n     3)display:  ");
        printf("\n      4)exit:  ");
        scanf("%d",&option);
        switch(option)
        {
            //stack operation
            case 1: printf("enter the value to push: ");
                    scanf("%d",&value);
                        if(top==n-1)
                        {
                            printf("stack overfloe");
                            
                        }
                        else
                        {
                            top=top+1;
                            stack[top]=value;
                            printf("%d",stack[top]);
                        }
                        
                        break;
                        //stack pop operation
                        case 2: printf("enter the value to pop: ");
                                scanf("%d",&value);
                                if(top==-1)
                                {
                                    printf("stack underflow");
                                    
                                }
                                else
                                {
                                    top=top-1;
                                    value=stack[top];
                                    printf("%d",&value);
                                }
                                
                                break;
                        //stack display
                        case 3:if(top!=-1)
                                {
                                    printf("resultant stack: ");
                                    for(i=0;i<=top;i++)
                                    printf("%d",&stack[i]);
                                    
                        
                                }
                                else
                                {
                                    printf("stsck empty");
                                    
                                }
                        case 4: printf("exit");
                                
                                break;
                                default: printf("ionvalit input");
                                
                                
                    }
    }
    while(option!=4);
    return 0;
}