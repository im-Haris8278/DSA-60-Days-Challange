#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i = 0;
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int RCount(struct Node *p)
{
    if (p != NULL)
    {
        return RCount(p->next) + 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    create(A, 10);
    cout << "Count is: " << RCount(first);

    return 0;
}