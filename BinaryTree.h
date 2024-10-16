#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
using namespace std;

//Definicion de la estructura del nodo del árbol binario
struct Node {
    int data;
    Node* right;
    Node* left;

    Node(int value);
};

class BinaryTree {
public:
    Node* root;
    
    //Constructor
    BinaryTree();

    Node* insert(Node* node, int value);

    void preorder(Node* node);

    Node* search(Node* node, int value);
};

#endif