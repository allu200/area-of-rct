#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double getArea()
    {
        return length * width;
    }

    double getPerimeter() 
    {
        return 2 * (length + width);
    }
};

int main() 
{
    Rectangle r(10, 5);

    cout << "Area: " << r.getArea() << endl;
    cout << "Perimeter: " << r.getPerimeter() << endl;

    return 0;
}