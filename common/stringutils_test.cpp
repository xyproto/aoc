#include "test.h"
#include "stringutils.h"

using std::cout;
using std::endl;

void stringutils_test() {
    equal(split("hi->hello"s, "->"s).first, "hi"s);
    equal(split("hi->hello"s, "->"s).second, "hello"s);
    equal(splitv("hi->hello->there->you"s, "->"s)[2], "there"s);
    equal(splitv("hi->hello->there->    you"s, "->"s)[3], "    you"s);
    equal(trim(splitv("hi -> hello -> there ->    you"s, "->"s)[3]), "you"s);
    equal(trimv(splitv("hi -> hello -> there ->    you"s, "->"s), true)[3], "you"s);
}

int main() {
    stringutils_test();
    return 0;
}
