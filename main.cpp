#include <iostream>
#include <list>
#include <iterator>
#include <cstdlib>

int main(int argc, char* argv[])
{
    std::list<int> i_List;

    for(int i = 1; i < argc; ++i)
    {
        int temp = std::atoi(argv[i]);
        i_List.push_back(temp);
    }

    std::list<int>::iterator it = i_List.begin();
    while (it != i_List.end())
    {
        std::cout << (2*(*it)) << std::endl;
        it++;
    }

    return 0;
}