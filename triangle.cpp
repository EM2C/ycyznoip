/*根据参数，画出矩形。
输入
输入一行，包括四个参数：前两个参数为整数，依次代表矩形的高和宽
（高不少于3行不多于10行，宽不少于5列不多于10列）；第三个参数是
一个字符，表示用来画图的矩形符号；第四个参数为1或0，0代表空心，
1代表实心。
输出
输出画出的图形。
样例输入
7 7 @ 0
样例输出
@@@@@@@
@     @
@     @
@     @
@     @
@     @
@@@@@@@
http://noi.openjudge.cn/ch0105/37/
*/
//Codes Are Here

#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
char a;
bool f;
int w,h,j,i;
int main()
{
	cin>>h>>w>>a>>f;
	if(f==true)
	{
		while(j<h)
		{
			for(i=1;i<=w;i++)
			{
				cout<<a;
			}
			j++;
			cout<<endl;
		}
	}
	else if(f==false)
	{
		for(i=1;i<=w;i++)
		{
			cout<<a;
		}
		cout<<endl;
		while(j<h-2)
		{
			cout<<a;
			for(i=1;i<=w-2;i++)
			{
				cout<<" ";
			}
			cout<<a<<endl;
			j++;
		}
		for(i=1;i<=w;i++)
		{
			cout<<a;
		}
	}
	return 0;
}
