#include <iostream>

#define API_EXPORT __declspec(dllexport)

API_EXPORT void* operator new(size_t size) noexcept(false) {
    std::cout << "new\n";
    return malloc(size);
}

API_EXPORT void operator delete(void* ptr) noexcept {
    std::cout << "delete\n";
    free(ptr);
}


