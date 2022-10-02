#include <iostream>
#include <string>

using namespace std;

class ShorifsClass
{
public:
    ShorifsClass(string z)
    {
        setName(z);
    }
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    ShorifsClass So("Lucky bucky bunty");
    cout << So.getName();
    return 0;
}
