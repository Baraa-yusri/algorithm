#include<stdio.h>
#include<stdlib.h>

struct binaryTree{
  int key;
  struct binaryTree *left,*right;
};

struct binaryTree *new_node(int item){
 struct binaryTree *node=(struct binaryTree*)malloc(sizeof(struct binaryTree));
 node->key=item;
 node->left=node->right=NULL;
 return node;
}

struct binaryTree*insertKey(struct binaryTree*root,int key){
  if (root==NULL)
    return new_node(key);                              //the new_node
  if(key<root->key)
      root->left=insertKey(root->left,key);
  else if(key>root->key)
      root->right=insertKey(root->right,key);
  return root;                                         //rethun the unchanged node
}

void inorder(struct binaryTree*root){
  if (root!=NULL) {
    inorder(root->left);
    printf("%d\n",root->key);
    inorder(root->right);
  }

}
