#include <iostream>
using namespace std;
#define MAX 10
int item[MAX];
int fronts, rears;

void enqueue(int n)
{
    if (rears == MAX - 1)
    {
        cout << "queue is full!!" << endl;
    }
    else
    {
        ++rears;
        item[rears] = n;
        cout << n << endl;
    }
}
float dequeue()
{
    float itm;
    if (rears < fronts)
    {
        cout << "queue is empty!!!" << endl;
        return (0);
    }
    else
    {
        itm = item[fronts];
        fronts++;
        return (itm);
    }
}
void traverse()
{
    int i;
    if (fronts > rears)
    {
        cout << "No items to display!!!" << endl;
    }
    else
    {
        cout << "Queue elements are:" << endl;
        for (i = fronts; i < rears + 1; i++)
        {
            cout << " " << item[i] << endl;
        }
    }
}

int main()
{
    int a, c;
    rears = -1;
    fronts = 0;
    do
    {
        cout << "Enter your choice: " << endl;
        cout << "1. enqueue \n2. dequeue \n3. traverse " << endl;
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter the number to be enqueued: " << endl;
            cin >> a;
            cout << "The enqueud element is" << endl;
            enqueue(a);
            break;
        case 2:
            cout << "The dequeued element is" << dequeue() << endl;
            break;
        case 3:
            traverse();
            break;
        default:
            cout << "Invalid input!!!" << endl;
            break;
        }
    } while (c < 4);
    return 0;
}