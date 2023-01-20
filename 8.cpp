#include <iostream>
using namespace std;

struct Node 
{
  int data;
  int key;
  int root;
  struct Node *left, *right;
  Node(int data)
   {
    this->data = data;
    left = right = NULL;
  }
};
    Node(node* root,key)
    {
    	while(root!=Null)
    	{
    		if(root->data==key)
    		return Null;
    		else if(root->data<key)
    		root=root->right;
    		else if(root->data>key)
    		root=root->left;
		}
		return false;
	}
void preorderTraversal(struct Node* node) {
  if (root == NULL)
    return;

  cout << node->data << "->";
  preorderTraversal(node->left);
  preorderTraversal(node->right);
}
int main() 
{
  struct Node* root = new Node(5);
  root->left = new Node(2);
  root->right = new Node(10);
  root->left->left = new Node(1);
  root->right->left = new Node(6);
  root->right->left->left = new Node(8);
  root->right->right= new Node(11);
  root->right->right->right = new Node(15);
  cout << "\nPreorder traversal ";
  preorderTraversal(root);
}
