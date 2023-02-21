#include <iostream>
#include <limits>
#pragma once
#include <regex>
class UserClass
{
    std::string name;
    int age;
    std::string email;

public:
    int numHolder;
    void setName(std::string empName)
    {

        std::regex pattern("^[[:alpha:][:space:]]+$");

        while (true)
        {
            if (std::regex_match(empName, pattern) == true)
            {
                name = empName;
                break;
            }
            else
            {
                std::cout << "Format of input is not acceptable, enter appropriate format (text/string)"
                          << "\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter Name: ";
                getline(std::cin, empName);
                name = empName;
            };
        };
    }

    std::string getName()
    {
        return name;
    }

    void setEmail(std::string empEmail)
    {

        std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

        while (true)
        {
            if (std::regex_match(empEmail, pattern) == true)
            {
                email = empEmail;
                break;
            }
            else
            {
                std::cout << "Email is invalid"
                          << "\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter Email Address: ";
                std::cin >> empEmail;
            };
        };
    }

    std::string getEmail()
    {
        return email;
    }

    void setAge(int empAge)
    {
        while (true)
        {

            if (std::cin.fail() || empAge < 18 || empAge >= 50)
            {
                std::cout << "Age is not appropriate"
                          << "\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter age: ";
                std::cin >> empAge;
            }
            else
            {
                age = empAge;
                break;
            };
        };
    }

    int getAge()
    {
        return age;
    }
};
