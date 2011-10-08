#include<iostream>
using namespace std;
void * memmove(void * des,void * src, int count)
{
    if(des==src)
        return des;
    char * d=(char *)des;
    char * s=(char *)src;
    if(d>s)
    {
        s+=count;
        d+=count;
        while(count--)
            *(--d)=*(--s);        
    }
    else
    {
        while(count--)
            *(d++)=*(s++);
    }
    return des;
}
int main()
{
        char src[20]={"abcdefghijk"};
        memmove(src+4,src,8);
        cout<<src<<endl;
}
