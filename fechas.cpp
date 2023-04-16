#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
using namespace std;
int main()
{
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    std::ostringstream oss;
    oss << std::put_time(&tm, "%Y");
    auto str = oss.str();

    std::cout << str << std::endl;
}