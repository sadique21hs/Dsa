#include<stdio.h>
struct list
{
    int data;
    list *next;
};
typedef struct list node;
node *start;


void menu()
{
    int data;
    list *next;
    printf("\n1.Insert: \n2.Exit : \n")
}



int main()
{
    int choice,i=1,item;
    start=NULL;
    do
    {
        menu();
        printf("Enter Choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Enter item for insert: ");
            scanf("%d",&item);
            inseretion(item);
            display();


        }

        else
        {
            i=0;
        }

    }
    while(i);
}
