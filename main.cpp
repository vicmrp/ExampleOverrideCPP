
#include<iostream>

class Base {
    int b_var;
public:
    virtual void fun() { std::cout << "Base fun" << std::endl; }
};

class Derived: public Base {
    int d_var;
public:
    // med override nøgleordet sikre du at functionen er nedarvet.
    void fun() override { std::cout << "Derived fun" << std::endl; }
};


/* demo.c:  My first C program on a Linux */
int main(void)
{
    // Typen er Derived
    Derived *b = new Derived();
    b->fun();
    return 0;
}