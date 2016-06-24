#include "wrapper.h"
int main()
{
    Wrapper file;
    file.open("h.txt");
    while(file.good())
    {
    char ch=file.get();
    }
    file.print();
    return 0;
}