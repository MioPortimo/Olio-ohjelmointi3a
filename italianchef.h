#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

#include <iostream>

using namespace std;

class ItalianChef:public Chef
{
public:
    ItalianChef(string newName);
    ~ItalianChef();
    string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
