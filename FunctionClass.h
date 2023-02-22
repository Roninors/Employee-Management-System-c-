#include <iostream>
#pragma once
#include "UserClass.h"
#include <limits>

int numholder;

class FunctionClass
{
public:
    std::string empName;
    std::string empEmail;
    int empAge;
    int numOfmem;
    std::string viewDecider;
    UserClass registerClassFunc;
    void RegisterEmp(UserClass empArr[], int size)
    {

        std::cout << "\nHow many numbers of employee you would like to add\n"
                  << "\n";
        std::cout << "Answer: ";
        std::cin >> numOfmem;
        numholder += numOfmem;
        for (int i = 0; i < numOfmem; i++)
        {
            std::cout << "\n\n--------------New Employee [" << i + 1 << "]----------------\n\n";

            std::cout << "Full Name (Last name, given name, middle initial): ";

            std::cin.ignore();

            getline(std::cin, empName);
            registerClassFunc.setName(empName);

            std::cout << "Enter age: ";
            std::cin >> empAge;
            registerClassFunc.setAge(empAge);

            std::cout << "Enter email address: ";
            std::cin >> empEmail;
            registerClassFunc.setEmail(empEmail);

            std::cout
                << "\n--------------New Employee [" << i + 1 << "]----------------\n";

            for (int k = 0; k < size; k++)

            {

                if (empArr[k].getName() == "")
                {
                    empArr[k] = registerClassFunc;

                    break;
                }
            }
        }

        std::cout << "\n\nDo you want to view Employees?(y/n)"
                  << "\n";
        std::cout << "Answer: ";
        std::cin >> viewDecider;

        if (viewDecider == "y")
        {
            std::cout << "\n==================================================\n";

            for (int i = 0; i < numholder; i++)
            {
                std::cout << "\n-----------------Employee[" << i + 1 << "]-------------------\n\n";
                std::cout << "Name: " << empArr[i].getName() << "\n";
                std::cout << "Age: " << empArr[i].getAge() << "\n";
                std::cout << "Email Address: " << empArr[i].getEmail();
                std::cout << "\n\n-----------------Employee[" << i + 1 << "]-------------------\n";
            }

            std::cout << "\n==================================================\n";
        }
    };
    // to be developed
    void removeUser(UserClass empArr[], int size)
    {
        std::string removeChosenEmp;
        std::cout << "Enter the name of the employee you want to remove: ";
        std::cin.ignore();
        getline(std::cin, removeChosenEmp);

        for (int i = 0; i < size; i++)
        {

            if (empArr[i].getName() == removeChosenEmp)
            {
                delete &empArr[i];
                break;
            }
            else
            {
                std::cout << "Not found";
            }
        };
    };
};
