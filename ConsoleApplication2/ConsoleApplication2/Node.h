#ifndef __NODE_H__
#define __NODE_H__
#include <iostream>
using namespace std;
class Node
{
public:
	int key;
	Node* left;
	Node* right;
	int height;
	int max(int, int);
	int Height(Node*);
	Node* newNode(int);
	Node* rightRotate(Node*);
	Node* leftRotate(Node*);
	int getBalance(Node*);
	Node* insert(Node*, int);
	Node* minValueNode(Node* node);
	Node* deleteNode(Node* root, int key);
	void preOrder(Node* root);
};

#endif