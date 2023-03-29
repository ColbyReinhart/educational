#include <iostream>
#include <string>

int addOne()
{
    static int num = 1;
    num++;
    return num;
}

void fooBar()
{
    std::cout << "Foobar!" << std::endl;
}

void doThing()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
}

int main()
{
    std::string hello = "Hi world!";
    int* point = new int(10);
    std::cout << *point << std::endl;
    std::cout << addOne() << std::endl;
    std::cout << addOne() << std::endl;
    std::cout << addOne() << std::endl;
    delete point;
}

//Nic did this for fun
//and also this