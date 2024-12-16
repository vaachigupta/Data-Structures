#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void enqueue();
void dequeue();
void display();

int c_queue[MAX];
int rear=-1;
int front=-1;

int main(){
    int choice;
    while(1){
        printf("\nenter your choice\n");
        printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
        scanf("%d",&choice);
        switch (choice){
            case 1:
            enqueue();
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(1);
            break;

            default:
            printf("wrong choice");
        }
    }
}

void enqueue(){
    int a;
    scanf("%d", &a);
    if(((front==0) && (rear=MAX-1)) || )
}