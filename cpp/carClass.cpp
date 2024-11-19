#include<iostream>

using namespace std;

class Car{
    public:
    string name;
    int price;
    int seats;
    string type;
};

void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}

void change(Car& c){
    c.name = "raju";

}

int main(){

     Car c1;
    c1.name = "Honda City";
    c1.price = 1500000;
    c1.seats = 5;
    c1.type = "sedan";

    print(c1);
    change(c1);
    print(c1);

    Car c2;
    c2.name = "mahimdra Thar";
    c2.price = 2000000;
    c2.seats = 4;
    c2.type = "SUV";

     Car c3;
    c3.name = "Maruti Swift";
    c3.price = 700000;
    c3.seats = 5;
    c3.type = "Hatchback";

     Car c4;
    c4.name = "toyota Fortuner";
    c4.price = 3600000;
    c4.seats = 8;
    c4.type = "SUV";

    print(c1);
    print(c2);
    print(c3);
    print(c4);
}