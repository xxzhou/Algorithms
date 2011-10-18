/*
 * =====================================================================================
 *
 *       Filename:  TestCharString.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/18/2011 02:01:36 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Xing Zhou (GGLouis), zhoux.chn@gmail.com
 *        Company:  BiffNetworking.Inc
 *
 * =====================================================================================
 */
#include<iostream>
using namespace std;
struct myData
{
	//int data;//[0], [3]
	char s[10];
	int data;
};
int main()
{
	char* src="0123";
	cout<<strlen(src)<<endl;
	cout<<sizeof(int)<<endl;
	cout<<sizeof(myData)<<endl;
}
