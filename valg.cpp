#include <iostream>

void error1()
{
    int a;
    printf("%d\n", a);
}

void error2()
{
    error1();
}

void error3()
{
    error2();
}

int main(int argc, char **argv) 
{
    error3();
    return 0;
}