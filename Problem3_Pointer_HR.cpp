#include<iostream>

using namespace std;

void update( int *a, int *b)
{
    int temp = *a;
    *a = temp + *b;
    *b = temp - *b;

    if (*b < 0)
    {
        *b = -(*b);
    }

}

int main()
{
 int a;
 int b;
 int *pa = &a;
 int *pb = &b;
 cin>>a>>b;
 update(pa, pb);
 cout<<a<<endl;
 cout<<b;

 return 0;
}
