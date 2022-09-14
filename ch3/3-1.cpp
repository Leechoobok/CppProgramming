#include <iostream>
using namespace std;

class Circle {
public:
    int raddius;
    double getArea();
};

double Circle::getArea(){
    return 3.14 * raddius*raddius;
}

int main(){
    Circle donut;
    donut.raddius = 1;
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;
    
    Circle pizza;
    pizza.raddius = 30;
    area = pizza.getArea();
    cout << "pizza 면적은 "<< area << endl;
    
}