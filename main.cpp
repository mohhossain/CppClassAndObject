#include <iostream>
#include "Animal.h"

using namespace std;

int main()
{
    Animal dog = Animal("Pet", "Husky", 20);

    cout << dog.getName() << endl;
    return 0;
}
