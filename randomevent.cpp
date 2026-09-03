#include <iostream>
#include <ctime>


int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: std::cout << "dies of death\n";
                break;
        case 2: std::cout << "you stumbled on a rock and died\n";
                break;
        case 3: std::cout << "you lived an average life with nothing special in it\n";
                break;
        case 4: std::cout << "a nice life you were almost able to see the top\n";
                break;
        case 5: std::cout << "you will be remembered throughout history\n";
    }




    return 0;
}


