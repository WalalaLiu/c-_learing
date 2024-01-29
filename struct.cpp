#include<iostream>
using namespace std;
struct stu
{
    string mname;
    int mage;
    void setname(string name){mname=name;}
    void setage(int age){mage=age;}
    void showstudent()
    {
        cout<<"name:"<<mname<<endl<<"age:"<<mage<<endl;
    }
};

void test()
{
    stu student;
    student.setname("john");
    student.setage(20);
    student.showstudent();
}
int main()
{
    test();
    return 0;
}
