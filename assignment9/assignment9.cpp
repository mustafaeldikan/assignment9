#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;
public:
    Box() {
        cout << "Box is created by default constuctor!" << endl;
    }
    Box(double w1, double h1, double l1) {
        setLength(l1);
        setWidth(w1);
        setHeight(h1);
        cout << "Box is created by parameterized constructor!\nVolume of the box is : " << w1 * l1 * h1 << endl;
    }
    ~Box() {
        cout << "Box is destroyed by destructor" << endl;
    }
    double getLength() {
        return length;
    }
    double getWidth() {
        return width;
    }
    double getHeight() {
        return height;
    }
    void setLength(double l) {
        length = l;
    }
    void setWidth(double w) {
        width = w;
    }
    void setHeight(double h) {
        height = h;
    }
    double calculateVolume() {
        return length * width * height;
    }
};
int main() {
    double length, width, height;
    for (int counter = 0; counter < 10; ++counter) {
        cout << "\nPlease enter dimensions(w l h) : ";
        cin >> length >> width >> height;
        cout << "\nBox #" << counter + 1 << endl;
        if (counter % 2 == 0) {
            Box box(width, height, length);
        }
        else {
            Box box;
            box.setHeight(height);
            box.setLength(length);
            box.setWidth(width);
            cout << "Volume of the box is : " << box.calculateVolume() << endl;
        }
        cout << "-----------------------------" << endl;
    }
}