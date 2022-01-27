#include <iostream>
using namespace std;
#define MAX 10
int item[MAX];
int fronts, rears;

void enqueue(int n)
{
    if (fronts == (rears + 1) % MAX)
    {
        cout << "queue is full!!" << endl;
    }
    else
    {
        rears = (rears + 1) % MAX;
        item[rears] = n;
        cout << n << endl;
    }
}
float dequeue()
{
    float itm;
    if (rears == fronts)
    {
        cout << "queue is empty!!!" << endl;
    }
    else
    {
        fronts = (fronts + 1) % MAX;
        itm = item[fronts];
        return (itm);
    }
}
void traverse()
{
    int i;
    if (rears == fronts)
    {
        cout << "No items to display!!!" << endl;
    }
    else
    {
        cout << "Queue elements are:" << endl;
        for (i = (fronts + 1) % MAX; i <= rears; i = (i + 1) % MAX)
        {
            cout << " " << item[i] << endl;
        }
    }
}

int main()
{
    int a, c;
    rears = MAX - 1;
    fronts = MAX - 1;
    do
    {
        cout << "********Enter your choice*********: " << endl;
        cout << "1. enqueue \n2. dequeue \n3. traverse " << endl;
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter the number to be enqueued: " << endl;
            cin >> a;
            cout << "The enqueued element is" << endl;
            enqueue(a);
            break;
        case 2:
            cout << "The dequeued element is \n"
                 << dequeue() << endl;
            break;
        case 3:
            traverse();
            break;
        default:
            cout << "Invalid input!!!" << endl;
            break;
        }
    } while (c = 4);
    return 0;
}