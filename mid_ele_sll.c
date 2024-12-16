#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
	int data;
	struct node *next;
};

struct node *head = NULL; 
struct node *temp; 
struct node *temp1;

void ins_beg(struct node *new1){
		if(head == NULL)
			head = new1;
		else{
			new1->next = head;
			head = new1;
		}
	}

void ins_end(struct node *new1){
		temp = head;
		if(head == NULL)
			head = new1;
		else{
			while(temp->next!= NULL)
				temp = temp->next;
			temp->next = new1;
			}
		}

void find_mid(){
        temp = head;
        temp1 = head;
        if(head == NULL)
            printf("no item in the list\n");
        else{
            while(temp1!=NULL && temp1->next!= NULL){
                temp1 = temp1->next->next;
                temp = temp->next;
            }
            }
            printf("Middle element of the list is %d\n", temp->data);
        }

void traverse(){
		struct node *temp = head;
		if(head == NULL)
			printf("no item to traverse\n");
		while(temp != NULL){
			printf("%d ",temp->data);
			temp = temp->next;
		}
	}

int main(){
	int choice, n;
	struct node *new1;
	
	while(1){
		printf("\nenter the choice\n");
		printf("1. ins_beg\n2. ins_end\n3. find_mid\n4. traverse\n5. exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
					new1 = (struct node*)malloc(sizeof(struct node));
					printf("enter the data\n");
					scanf("%d",&new1->data);
					new1->next = NULL;
					ins_beg(new1);
					break;
			case 2:
					new1 = (struct node*)malloc(sizeof(struct node));
					printf("enter the data\n");
					scanf("%d",&new1->data);
					new1->next = NULL;
					ins_end(new1);
					break;
            case 3:
                    find_mid();
                    break;
			case 4:
					traverse();
					break;
			default:
					exit(1);
		}
	}
}