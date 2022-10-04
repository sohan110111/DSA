#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *head = NULL, *second, *third;

int main(void){

    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    head->data = 1;
    head->link = second;
    second->data = 2;
    second->link = third;
    third->data = 3;
    third->link = NULL;

    struct node *temp = head;
    while (temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->link;
    }
    

    return 0;
}