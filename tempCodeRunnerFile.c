#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*left;
    node*right;
};
node*newnode(int data)
{
    node*temp=newnode();
    temp->data=data;
    temp->left=null;
    temp->right=null;

}

int findHeight(node*root)
{
    if(root==null)
    {
        return(-1);
    }
    int Hleft= findHeight(root->left);
    int Hright= findHeight(root->right);
    return max(Hleft,Hright) +1;
}

int main()
{
    node*root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    root->left->right->left=newnode(6);
    cout<<"Height of tree is :"<<findHeight(root);
    return 0;

}