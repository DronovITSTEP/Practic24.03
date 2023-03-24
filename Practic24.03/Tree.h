#pragma once
#include <iostream>
using namespace std;

struct Node {
    int x;
    Node* left, * right;
};

class Tree
{
    Node* tree;
public:
    Tree();
    void addTree(int, Node*&);
    void show(Node*&);
    void del(Node*&);
};

