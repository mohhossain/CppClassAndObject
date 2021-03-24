#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>


class Animal
{
    public:
        Animal();
        Animal (std::string n);
        Animal (std::string n, std::string b, int l);
        void setName(std::string n);
        std::string getName();
    protected:

    private:
        std::string name;
        std::string breed;
        int lifespan;
};

#endif // ANIMAL_H
