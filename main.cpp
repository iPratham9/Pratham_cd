#include <iostream>
#include <fstream>
#include <string>
#include "utils\instruction.h"
#include "utils\compute.h"

int main()
{
    std::ifstream infile("instruction.txt");
    std::string line;

    if (infile.is_open())
    {
        while (getline(infile, line))
        {
            std::string operation;
            std::vector<std::string> args;
            parseInstruction(line, operation, args);

            if (operation == "power" && args.size() == 2)
            {
                double base = std::stod(args[0]);
                double exponent;

                if (args[1] == "x")
                {
                    std::cout << "Enter value for x: ";
                    std::cin >> exponent;
                }
                else
                {
                    exponent = std::stod(args[1]);
                }

                double result = power(base, exponent);
                std::cout << base << "^" << exponent << " = " << result << std::endl;
            }
        }
        infile.close();
    }
    else
    {
        std::cerr << "Unable to open instruction file.\n";
    }

    return 0;
}
