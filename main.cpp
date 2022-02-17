#include <iostream>
int a, b, i, d, s;

int main() {

    std::cin>>a>>b;
    for (i=a;i<=b;i++) {
        s=0;
        for (d = 1; d <= i / 2; d++)
            if (i % d == 0)
                s = s + d;
        if(s==i)
            std::cout<<i;
    }
    //std::cout << "Hello, world!\n";
    return 0;
}
