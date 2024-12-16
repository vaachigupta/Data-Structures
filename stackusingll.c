// stack using linked list
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
	int data;
	struct node *next;
};

struct node *head = NULL; 
struct node *temp; 

void push(struct node*);
void pop();
void display();

int main(){
	int choice;
	struct node *new1;
	
	while(1){
		printf("\nenter the choice\n");
		printf("1. push\n2. pop\n3. display\n4. exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
					new1 = (struct node*)malloc(sizeof(struct node));
					printf("enter the data\n");
					scanf("%d",&new1->data);
					new1->next = NULL;
					push(new1);
					break;
			case 2:
					pop();
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
	void push(struct node *new1){
		if(head == NULL)
			head = new1;
		else{
			new1->next = head;
			head = new1;
		}
	}
		
	void pop(){
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
