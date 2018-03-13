#include <iostream>

using namespace std;

class Complex_Number
{
private:
    float real;
    float imaginary;
    int Test;
public:
    Complex_Number() : real(10.0),imaginary(20.0) {    // DEFAULT CONSTRUCTOR INITIALISATION LIST
       cout << "Constructor is Called!!" << endl;
       // real = 0.0 ,imaginary = 0.0 ;
    }
    ~Complex_Number() {
        cout << "Destructor is Called!!" << endl;
    }
    void Set_complex(double r, double i) {
        real = r ;
        imaginary = i ;
    }
    double Get_real(){
        return real;
    }
    double Get_img(){
        return imaginary;
    }
    int Get_Size() {
        return (sizeof(real)+sizeof(imaginary)+sizeof(Test));
    }
    void print(){
        cout << "\n\nReal : " << real << " and Imaginary : " << imaginary <<endl;
    }
    void print_This() {
        cout << "Address of this Object : " << this << endl;
        //cout << "Real Part : " << this->real << "Img Part : " << this->imaginary << endl;
    }
};

int main()
{
    Complex_Number CN,CN2;       // Object of class OR variable of class
    CN.Set_complex(2.5,9.689);
    CN.print();
    CN2 = CN ;                   // Copy Object state to object CN2
    cout << "Total Size of Variable in Class : " << CN.Get_Size() << endl << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "---------" <<endl;
    cout << "Object 1 " << endl;
    cout << "---------" <<endl;
    CN.print_This();
    cout << "Size of Object :" << sizeof(CN) << endl << endl;
    cout << "---------" <<endl;
    cout << "Object 2 " << endl;
    cout << "---------" <<endl;
    CN2.print_This();
    cout << "Size of Object :" << sizeof(CN2) << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
    return 0;
}
