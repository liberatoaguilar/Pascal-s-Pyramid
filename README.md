# Pascal's Pyramid
First attempt at obfuscated code using a program for pascal's pyramid.
The pyramid is created using combinations.

Output:

```
         1 
        1 1 
       1 2 1 
      1 3 3 1 
     1 4 6 4 1 
   1 5 10 10 5 1 
  1 6 15 20 15 6 1 
 1 7 21 35 35 21 7 1 
1 8 28 56 70 56 28 8 1
```

Code:

```cpp
                      void 
                  ps(int, int); 
                int ch(int, int);
               #include <iostream>
              int main() { ps(8, 0); 
             return 0; } int fa(int n)
          {if (n == 0) return 1; return 
         n*fa(n-1); } using std::cout; int 
      ch(int n, int r) { if (r == 0) return 1;
     if (n == r) return 1; return fa(n)/(fa(r)*
   fa(n-r)); } void ps(int s, int n) { if (n <= 4) 
  cout << ' '; for (int i = 0; i < s-n; ++i) cout << 
 ' '; for (int i = 0; i <= n; ++i) cout << ch(n, i) << 
' '; std::cout << std::endl; if (s != n) ps(s, n + 1); }
```
