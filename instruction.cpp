#include "instruction.h"
#include <sstream>

void parseInstruction(const std::string &line, std::string &operation, std::vector<std::string> &args)
{
    size_t open = line.find('(');
    size_t close = line.find(')');

    if (open != std::string::npos && close != std::string::npos)
    {
        operation = line.substr(0, open);
        std::string argString = line.substr(open + 1, close - open - 1);
        std::stringstream ss(argString);
        std::string token;
        while (getline(ss, token, ','))
        {
            args.push_back(token);
        }
    }
}
