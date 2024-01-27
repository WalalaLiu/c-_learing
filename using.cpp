#include <iostream>
using namespace std;
namespace A
{
    int paramA = 20;
    int paramB = 30;
    void funcA() { cout << "hello funcA" << endl; }
    void funcB() { cout << "hello funcA" << endl; }
}
void test()
{
    cout << A::paramA << endl;
    A::funcA();
    using A::funcA;
    using A::paramA;
    cout << paramA << endl;
    funcA();
}