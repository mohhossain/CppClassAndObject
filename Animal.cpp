#include "Animal.h"
using namespace std;

Animal::Animal()
{
        name = "Not Valid";
        breed = "Not Valid";
        lifespan = 0;
}

Animal::Animal(string n){
        name = n;
    }

    Animal::Animal (string n, string b, int l){
        name = n;
        breed = b;
        lifespan = l;
    }

    string Animal::getName(){
        return name;
    }
    //ctor

