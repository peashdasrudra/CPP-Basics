#include<bits/stdc++.h>
using namespace std;

class Student

{
private :
    string name;
public:
    int id;
    float gpa;


    virtual void Header()
    {
        cout << "Something is Wrong!"<< endl;
    }

    void setname(string name)
    {
        this -> name = name;
    }
    string getname(){
    return name;
    }

    Student(int id, float gpa){

    this -> id = id;
    this -> gpa = gpa;

    }

    void display()
    {
        cout << "Id number =" << id << endl << "CGPA =" <<gpa <<endl << endl;
           }

};

class TWO_B : public Student
{
    public:
    TWO_B(int id, float gpa)
    :Student(id,gpa)
    {

    }

    void Header()
    {
        cout << "He/she is a student of 2B section and the details of "<< endl;
    }

};


class TWO_C : public Student
{
    public:
    TWO_C(int id, float gpa)
    :Student(id,gpa)
    {

    }

    void Header()
    {
        cout << "He/she is a student of 2C section and the details of "<< endl;
    }

};


int main ()
{

Student *p;

TWO_B p1 (11220120719,3.27);
 p = &p1;
 p -> setname("Peash Das Rudra");
 p -> Header();
 cout << p -> getname() << endl;
p -> display();


 TWO_C p2 (11220120749,3.57);
 p = &p2;
 p -> setname("Raddiya Sultana");
 p -> Header();
cout << p -> getname() << endl;
 p -> display();

}
