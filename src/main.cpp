#include <iostream>
#include "flags.h"

int main(int argc, char** argv) {
    const flags::args args(argc, argv);

    const auto count = args.get<int>("count");
    if (!count) {
        std::cerr << "No count supplied. :(\n";
        return 1;
    }
    std::cout << "That's " << *count << " incredible, colossal credits!\n";

    if (args.get<bool>("laugh", false)) {
        std::cout << "Ha ha ha ha!\n";
    }
    return 0;
}
