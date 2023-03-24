#include <iostream>
#include "Tree.h"
#include "List.h"

using namespace std;


int main()
{
    /*Tree tree;
    Node* n = nullptr;
    int x;
    for (int i = 0; i < 5; i++) {
        x = rand() % 7;
        tree.addTree(x, n);
        cout << x << endl;
    }
    cout << endl;
    tree.show(n);
    tree.del(n);*/

    List list;
    char s[] = "Hello World!!!";
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        list.Add(s[i]);
    }
    list.Print();
    list.Del();
    list.Del();
    list.Del();
    list.Print();
}
