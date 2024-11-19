#include<iostream>

using namespace std;

class Student{
    public: 
    string name;
    int rno;
    float gpa;
};

int main(){
    Student s1;
    s1.name = "Debanjan";
    s1.rno = 20;
    s1.gpa = 8.29;

    cout<<s1.name<<endl;
    cout<<s1.rno<<endl;

    return 0;
}