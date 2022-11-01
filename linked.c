#include<stdio.h>
#include<stdlib.h>
struct abc{
    char name[20];
    int prn;
    struct abc *next;
    struct abc *prv
};
void main()
{
    struct abc *head;
    head=(struct abc*)malloc(sizeof(struct abc));
    printf("ENTER THE NAME OF PRESIDENT: ");
    scanf(" %s",head->name);
    printf("ENTER THE PRN NUMBER: ");
    scanf("%d",&head->prn);
    head->next=NULL;
    head->prv=NULL;
    inserts(head);
   
}
void inserts(struct abc *head)
{
    struct abc *new;
    new=(struct abc*)malloc(sizeof(struct abc));
    printf("ENTER THE NAME OF SECRETARY: ");
    scanf(" %s",new->name);
    printf("ENTER THE PRN NUMBER : ");
    scanf("%d",&new->prn);
    new->next=NULL;
    head->next=new;
    new->prv=head;
}