#include <iostream>
#include <list>
#include <iterator>
#include <cstdlib>

int main(int argc, char* argv[])
{
    std::list<int> i_list;

    for(int i = 1; i < argc; ++i)
    {
        int temp = std::atoi(argv[i]);
        i_list.push_back(temp);
    }

    std::list<int>::reverse_iterator it = i_list.rbegin();
    while (it != i_list.rend())
    {
        std::cout << *it << std::endl;
        it++;
    }

    return 0;
}