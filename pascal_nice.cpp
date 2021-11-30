#include <iostream>
using std::cout;
using std::endl;

int factorial(int n) 
{
    if (n == 0) return 1; 
    return n*factorial(n-1); 
}  

int choose(int n, int r) 
{ 
    if (r == 0) return 1;
    if (n == r) return 1; 
    return factorial(n)/(factorial(r)* factorial(n-r)); 
} 

void pascal(int size, int n) 
{ 
    if (n <= 4) cout << ' '; 
    for (int i = 0; i < size-n; ++i) cout << ' '; 
    for (int i = 0; i <= n; ++i) cout << choose(n, i) << ' '; 
    cout << endl; if (size != n) pascal(size, n + 1); 
}

int main() 
{ 
    pascal(8, 0); 
    return 0; 
} 
