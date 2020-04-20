#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
void insert(int );
void traverse(struct node *);
int main()
{
    insert(1);
     insert(2);
      insert(3);
       insert(4);
        insert(5);
         insert(6);
  traverse(root);

}

void insert(int d)
{
    struct node *t,*p;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=d;
    t->left=NULL;
    t->right=NULL;
    p=root;
    if(root=NULL)
    {
      67root=t;
    }
    else
    {
        struct node *curr;
        curr=root;
        while(curr)
        {
            p=curr;
            if(t->data>curr->data)
            {
                curr=curr->right;
            }
            else
            {
                curr=curr->left;
            }
        }
        if(t->data>p->data)
        {
            p->right=t;
        }
        else
        {
            p->left=t;
        }
    }
}
void traverse(struct node *t)
{
    if(t->left)
        traverse(t->left);
    printf("%d",t->data);
    if(t->right)
        traverse(t->right);
}
