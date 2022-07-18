#include <iostream>
template <typename T>
void print(T s)
{
    std::cout << s << std::endl;
}
template <>
void print(bool s)
{
    std::cout << std::boolalpha << s << std::endl;
}
template <typename T>
T max(T a, T b)
{
    T result;
    if (a > b)
    {
        result = a;
    }
    else
    {
        result = b;
    }
    return result;
}
template <>
char* max(char* a, char* b)
{
    if (strcmp(a, b) > 0)
    {
        return a;
    }
    else
    {
        return b;
    }
}
//template <>
//T* max(T* a, T* b)
//{
//    
//}
template <typename T>
T* max(T* a, T* b)
{
    return *a > *b ? a : b;
}
template <typename T>
T max(T* a, const unsigned int size)
{
    // T temp = a[0];
    T temp;
    for (int i = 0; i < size; ++i)
    {
        if (a[i] > a[i + 1])
        {
            temp = a[i];
        }
        else {
            temp = a[i + 1];
        }
    }
    return temp;
}
int main()
{
    bool bo = true;
    print(bo);
    int a = 5;
    int b = 10;
    std::cout << max(a, b) << std::endl;
    std::cout << max(8.45,9.56) << std::endl;
    int* ptr1= &a;
    int* ptr2 = &b;
    std::cout << *max(ptr1,ptr2) << std::endl;
    std::cout << max(ptr1, ptr2) << std::endl;
    std::cout << max("aaa","bbbbbb") << std::endl;
    const unsigned int size = 4;
    int arr[size] = { 1,2,3,4 };
    std::cout << max(arr, size) << std::endl;
}