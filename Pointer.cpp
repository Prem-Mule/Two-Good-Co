#include <iostream>
using namespace std;

class People
{
public:
    int height;
    int weight;

    People(int a, int b)
    {
        height = a;
        weight = b;
    }

public:
    void display()
    {
        cout << height << weight;
    }
};
int main()
{
    People aryan(2, 5);
    People prem(3, 9);
    aryan.display();
    prem.display();
    return 0;
}
