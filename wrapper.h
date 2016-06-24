#include<iostream>
#include<fstream>
#include <string>
using namespace std;
class Wrapper:public ifstream
{
    private:
        string data;
        string word;
        int counter=0;
        bool checker(char&);
    public:
        Wrapper();
        ~Wrapper();
        char get();
        void print();
};