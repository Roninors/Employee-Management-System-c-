#include <iostream>
#include "FunctionClass.h"
#include "UserClass.h"

int main()

{
    UserClass *empArr = new UserClass[50];

    std::string operationDecider;
    int size = 50;
    FunctionClass functionClass;
    int decider;

    while (true)
    {
        std::cout << "\n -----------------------------------\n";

        std::cout << "\n   Please choose actions to perform\n"
                  << "\n";

        std::cout << "           Add Employee[1]"
                  << "\n\n";
        std::cout << "          Remove Employee[2]"
                  << "\n\n";
        std::cout << "           Edit Employee[3]"
                  << "\n\n";
        std::cout << "          Search Employee[4]"
                  << "\n";

        std::cout << "\n -----------------------------------\n";

        std::cout << "Answer: ";
        std::cin >> decider;

        switch (decider)
        {
        case 1:
            functionClass.RegisterEmp(empArr, size);
            break;
        case 2:
            functionClass.removeUser(empArr, size);
            break;
        default:
            std::cout << "Operation not found\n";
            break;
        }

        std::cout << "Do you want to do another operation?(y/n)"
                  << "\n";
        std::cout << "Answer: ";
        std::cin >> operationDecider;
        if (operationDecider != "y" && operationDecider != "Y")
        {
            break;
        }
    }

    return 0;
}
