#include <string>
void f(std::string &className, std::string &testName)
{
    const size_t endOfClassNamePos = className.find("::");
    if (endOfClassNamePos != std::string::npos)
    {
        testName = className.substr(endOfClassNamePos + 2);
        (void)className.erase(endOfClassNamePos, std::string::npos);
    }
}

void f_odd(std::string &className, std::string &testName)
{
    if (className.find("::") != std::string::npos)
    {
        testName = className.substr(className.find("::") + 2);
        (void)className.erase(className.find("::"), std::string::npos);
    }
}

int main()
{}
