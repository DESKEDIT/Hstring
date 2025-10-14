#ifndef  _HSTRING_
#include <string>   /*for conversion*/
#include <iostream> /*for operator<<*/

class hstring
{
    int data;
public:
    hstring(const char* rhs) {};
    hstring(std::string rhs) {};
    hstring(char[]);
    hstring(hstring&);
    ~hstring();
};

std::ostream& operator<< (std::ostream os, hstring rhs);

namespace htools
{
    hstring encode          (char*);
    hstring encode          (const char*);
    hstring encode          (std::string);
    char *decode_char       (hstring);
    const char *decode_cstr (hstring);
    std::string decode_str  (hstring);
};

#define  _HSTRING_
#endif //_HSTRING_