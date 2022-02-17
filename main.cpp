//fail


#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
char s[101];
int l,vol,h;

struct forma { int x, y, h; };
struct forma fr;
void triunghi()
{
    cin>>fr.x>>fr.y;

}

void patrat()
{
    cin>>l>>h;
    cout<<2*l*l*h<<" gem";
    cout<<4*l*h<<" frisca";
}



int main() {
    cin.getline(s,101);



    if(strcmp(s,"triunghi")==0)
        triunghi();
    else if(strcmp(s,"patrat")==0)
        patrat();

    return 0;
}
