#include "italianchef.h"

ItalianChef::ItalianChef(string newName):Chef(newName)
{
    name = newName;
    cout << "ItalianChef" << name << " konstruktori" <<endl;

}
ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << name << " dekonstruktori" <<endl;
}
string ItalianChef::getName()
{
    return name;
}
void ItalianChef::makePasta()
{
    cout << "Italian Chef " << name << " makes pasta" <<endl;
}
