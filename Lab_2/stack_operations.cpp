#include <iostream>
using namespace std;
#define MAX 10
int item[MAX];
int top;

void push(int n)
{
    if (top == MAX - 1)
    {
        cout << "Stack is full!!" << endl;
    }
    else
    {
        ++top;
        item[top] = n;
    }
}
int pop()
{
    int itm;
    if (top == -1)
    {
        cout << "Stack is empty!!!" << endl;
        return (0);
    }
    else
    {
        itm = item[top];
        top--;
        return (itm);
    }
}
void traverse()
{
    int i;
    if (top == -1)
    {
        cout << "No items to display!!!" << endl;
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            cout << " " << item[i] << endl;
        }
    }
}

int main()
{
    int a, c;
    top = -1;
    do
    {
        cout << "Enter your choice: " << endl;
        cout << "1. push \n2. pop \n3. traverse " << endl;
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter the number to be pushed: " << endl;
            cin >> a;
            push(a);
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        default:
            cout << "Invalid input!!!" << endl;
            break;
        }
    } while (c != 4);
    return 0;
}