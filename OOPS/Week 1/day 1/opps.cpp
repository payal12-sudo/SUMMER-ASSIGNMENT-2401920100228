It's a way to write code using objects and classes. 
  You can sort your code better, reuse bits of it, and it makes things less complicated.
    It's also good for showing how real-world stuff works.
    A class is like a blueprint, and an object is an actual thing made from that blueprint. 
    Like in this C++ example, Car is the class, and c1 is the object, a specific BMW car with a speed.
      

  program:
  #include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    void show() {
        cout<<brand<< " " <<speed<<endl;
    }
};

int main() {
    Car c1; 
    c1.brand = "BMW";
    c1.speed = 200;

    c1.show();
}
