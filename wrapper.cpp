#include "wrapper.h"
Wrapper::Wrapper()
{}

Wrapper::~Wrapper()
{
    ifstream::close();
}
bool Wrapper::checker(char &ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        return true;
    }
    return false;
}

char Wrapper::get()
{
    char character=ifstream::get();
    if(character==' ')
    {
        int bar=0;
        counter++;
        if(checker(word[0]))
        {
            word.push_back(word[0]);
            word.erase(0,1);
            bar=1;
        }
        string ma="ma";
        word.append(ma);
        for(int i=0; i<counter;i++)
        {
            word.push_back('a');       
        }
        if(bar) word.push_back('a');
        word.push_back(' ');
        data.append(word);
        word="\0";
    }
    else
    {
        word.push_back(character);
    }
}

void Wrapper::print()
{
    cout<<data<<endl;;
}