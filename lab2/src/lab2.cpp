============================================================================
// Name        : lab2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
#include<sstream>
using namespace std;
class student
{
	string usn,name,branch;
	int sem;
public:
	void pack();
	void read();
	void write();
	void search();
	void delet();
	void modify();
	void unpack();
	fstream f1();
};
fstream f1;
void student::read()
{
	cout<<"enter the usn";
	cin>>usn;
	cout<<"enter the name";
	cin>>name;

	cout<<"enter the branch";
	cin>>branch;
	cout<<"enter the sem";
		cin>>sem;
		cout<<usn<<name<<branch<<sem;
}
void student::pack()
{
	fstream f1;
	string buffer;
	buffer=usn+'|'+name+'|'+branch;
		buffer.resize(100,'$');
	 f1.open("file1.txt",ios::out|ios::app);

	f1<<buffer;
}
void student::unpack()
{
	string extra;
	getline(f1.usn,'|');
	getline(f1.name,'|');
	getline(f1.branch,'|');

}
int main()
{
	int ch;
	student s;
	cout<<"enter your choice"<<endl;
	cin>>ch;
	switch(ch)
	{
	case 1: s.read();
			s.pack();



	}
}
