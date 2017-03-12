#pragma once
#include <iostream>
#include <memory>
#include <string>

namespace simple_string
{

class String
{
public:
    String();
    String(const char*);
    String(const String& src);
    String(String&& src);
    String& operator=(const String& src);
    String& operator=(String&& src);
    String& operator=(const char * src);

    char operator[](const int) const;

    void Print() const;
    int Length() const;
    // char[] GetBuffer() const;

private:
    std::unique_ptr<char[]> buffer = nullptr;
    int size = 0;

}; // String

} // namespace
