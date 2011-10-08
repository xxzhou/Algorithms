#include<iostream>
#include<string>
using namespace std;
void* memset(void* dst,int n,size_t cnt)
{
    if(cnt)        
    {
        char * temp=(char *)dst;
        while(cnt--)
            *temp++=n;
    }
    return dst;
}
int main()
{
    char src[5]={'1','2','3','4','5'};
    memset(src,' ',strlen(src));
    cout<<*src<<endl;
}

