#include "hstring.h"

#include <iostream>

hstring::hstring(hstring& rhs) {
    *this = rhs;
};

hstring::~hstring() {
    delete this;
};

std::ostream& operator<< (std::ostream& os, hstring rhs) {
    os << htools::decode_cstr(rhs);
    return os;
}