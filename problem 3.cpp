#include <iostream>
using namespace std;
int main() {
    int choice;
    cout <<"chose the shape for area calculation"<<endl;
    cout<<"1:calculate area of circle"<<endl;
    cout<<"2:calculate area of rectangle"<<endl;
    cout<<"3:calculate area of triangle"<<endl;
    cin>>choice;
    switch (choice) {
        case 1 : {
            int radius;
            const double pie=3.14159;
            cout<<"you choose option 1 to calculate area of circle"<<endl;
            cout<<"enter the radius of circle"<<endl;
            cin>>radius;
            cout <<"area of circle = "<<pie*(radius *radius)<<endl;
            break;
        }break;
        case 2 : {
            int length;
            int width;
            cout<<"you choose option 2 to calculate area of rectangle"<<endl;
            cout <<"enter the length of rectangle"<<endl;
            cin>>length;
            cout<<"enter the width of rectangle"<<endl;
            cin>>width;
            cout<<"area of rectangle = "<<length * width<<endl;break;
        }
            break;
        case 3 : {
            int base;
            int height;
            cout<<"you choose option 3 to calculate area of triangle"<<endl;
            cout<<"enter the base of triangle"<<endl;
            cin>>base;
            cout<<"enter the height"<<endl;
            cin>>height;
            cout<<"area of triangle = "<<0.5 * base*height<<endl;break;
        }
            break;
        default : cout<<"you choose invalid option";
    }

    return 0;
}

