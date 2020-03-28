#include "Napis.h"
#include <iostream>
#include <string>

using namespace std;

Napis::Napis()
{
    miejsce_=2;
    ile_liter_=0;
    litery_=new char[miejsce_];
}

Napis::Napis(int a)
{
    miejsce_=a;
    ile_liter_=0;
    litery_=new char[miejsce_];
}

Napis::Napis(const Napis& n)
{
    miejsce_=n.miejsce_;
    ile_liter_=n.ile_liter_;
    litery_=n.litery_;
}

Napis::~Napis()
{
    delete[] litery_;
    cout<<endl<<"Destruktor"<<endl;
}

void Napis::wypisz()
{
    if(ile_liter_>0)
    {
    cout<<endl;
    for(unsigned int i=0; i<miejsce_; i++)
    {
        cout<<litery_[i];
    }
cout<<endl;

    }
}


void Napis::wstaw(const char znak)
{
    if(ile_liter_<miejsce_)
    {
        litery_[ile_liter_]=znak;
        ile_liter_++;
    }

    else if(ile_liter_==miejsce_)
    {
        cout<<"Realokowano Pamiec"<<endl;
        char* pom = new char[miejsce_+1];

        for(int i=0; i<miejsce_; i++)
            {
                pom[i]=litery_[i];
            }
            pom[ile_liter_]=znak;
            litery_=pom;
            delete [] pom;
            ile_liter_++;
            miejsce_++;


    }
}


void Napis::set_ile_liter(int a)
{
    ile_liter_ = a;
}

void Napis::set_miejsce_(int a)
{
    miejsce_ = a;
}


unsigned int Napis::get_ile_liter()
{
    return ile_liter_;
}


unsigned int Napis::get_miejsce_()
{
    return miejsce_;
}


























