#include <iostream>
using namespace std;

class abstraksiklas{
    private:string x,y;

    public:

    //method untuk mengisi nilai
    //private member
    void setXY(string a, string b) {
        x = a;
        y = b;
    }
    //menampilkan nilai
    void display() {
        cout << "x = " << endl;
        cout << "y = " << endl;
    }
};

