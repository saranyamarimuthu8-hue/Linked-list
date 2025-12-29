#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
void append(int data){
    struct node *newNode=malloc(sizeof(struct node));
    newNode -> data=data;
    newNode -> next=NULL;
    newNode -> prev=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        struct node*temp=head;
        while(temp -> next!=NULL){
            temp=temp -> next;
        }
        temp -> next=newNode;
        newNode -> prev=temp;
    }
}
void backward(){
    struct node *temp=head;
    while(temp -> next!=NULL){
        temp=temp->next;
    }
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }
}
void display(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp -> data);
        temp=temp -> next;
    }
}
int main(){
    int n,data;
    printf("Enter number of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        if(data>0){
            append(data);
        }
    }
    display();
    printf("\n");
    backward();
    return 0;
}
