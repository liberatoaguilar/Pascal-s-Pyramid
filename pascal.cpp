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
