#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person person1;
    Person person2("Bob", 42);
    Person person3("Adam", 25);


    cout << person1.toString() << "Memory location: " << &person1 << endl;
    cout << person2.toString() << "Memory location: " << &person2 << endl;
    cout << person3.toString() << "Memory location: " << &person3 << endl;

    return 0;
}