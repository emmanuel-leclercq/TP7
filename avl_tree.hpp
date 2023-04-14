#ifndef _AVL_TREE_HPP
#define _AVL_TREE_HPP
class Tree;
class Node
{
private:
    long data;  // étiquette du nœud
    int height; // hauteur du nœud dans un arbre
    Node *left;
    Node *right;

public:
    Node(long x);
    Node() : height(1), left(nullptr), right(nullptr) {}
    friend class Tree;
};
class Tree
{
private:
    Node *root; // racine de l'arbre
public:
    Tree(Node *r);
    Tree() : root(nullptr) {}
    Node *insert(long x); // plus tard : TreeIterator insert(long x); Node * search(long x); // plus tard : TreeIterator search(long x);
};
#endif
