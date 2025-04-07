#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <string>
#include <vector>

void parseInstruction(const std::string &line, std::string &operation, std::vector<std::string> &args);

#endif
