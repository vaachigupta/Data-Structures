#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
	int data;
	struct node *next;
};

struct node *head = NULL; 
struct node *temp; 

void enqueue(struct node*);
void dequeue();
void display();

int main(){
	int choice;
	struct node *new1;
	
	while(1){
		printf("\nenter the choice\n");
		printf("1. enqueue\n2. dequeue\n3. display\n4. exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
					new1 = (struct node*)malloc(sizeof(struct node));
					printf("enter the data\n");
					scanf("%d",&new1->data);
					new1->next = NULL;
					enqueue(new1);
					break;
			case 2:
					dequeue();
					break;
			case 3:
					display();
					break;
            case 4:
					exit(1);
            default:
            printf("wrong choice");
		}
	}
}

void enqueue(struct node *new1){
		temp = head;
		if(head == NULL)
			head = new1;
		else{
			while(temp->next!= NULL)
				temp = temp->next;
			temp->next = new1;
			}
		}

void dequeue(){
		if(head == NULL)
			printf("no item to delete\n");
		else
			head = head->next;
	}

void display(){
		struct node *temp = head;
		if(head == NULL)
			printf("no item to traverse\n");
		while(temp != NULL){
			printf("%d ",temp->data);
			temp = temp->next;
		}
	}