#include <stdio.h>
#include<conio.h>
#define MAX 50

int queue_array[MAX];
int rear = - 1;
int front = - 1;

void insert()
{
    system("cls");
    int item;
    if(rear == MAX - 1)
        printf("\n\nNO Empty Parking Space\n");
    else
    {
        if(front== - 1)
            front=0;
        printf("\n\nInset Car Number: ");
        scanf("%d", &item);
        rear++;
        queue_array[rear]=item;
    }
    printf("\nCar %d has been Entered.",item);
}

void delete()
{
    system("cls");
    if(front == -1 || front>rear)
    {
        printf("\n\nNo Car Available\n");
        return;
    }
    else
    {
        printf("\n\nCar %d has been Removed.\n\n", queue_array[front]);
        front = front + 1;
    }
}

void display()
{
    system("cls");
    int i;
    if(front == - 1)
        printf("\n\nNo Cars Available\n");
    else
    {
        printf("\n\nAvailable Cars: ");
        for(i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
    }
}

void size()
{
    system("cls");
    int sum=0;
    int i;
    for(i = front; i <= rear; i++)
        sum++;
    printf("Number of Cars %d", sum);
}
int main()
{
    int choice;
    while(1)
    {
        printf("\n\n\n1.Entry Car\n");
        printf("2.Remove Car\n");
        printf("3.Display available Cars\n");
        printf("4.Number of available Cars\n");
        printf("5.Quit\n");
        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            size();
            break;
        case 5:
            exit(1);
        default:
            printf("\n\nWrong choice. TRY AGAIN");
        }
    }
}
