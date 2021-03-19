#pragma once
#include "Man.h"
#include <iostream>
#include <fstream>
using namespace std;
class Man
{
private:
	char name[30];
	int age;
	int pay;
public:
	Man();
	Man(char* name, int age, int pay);
	Man(const char* name, int age, int pay);
	Man(const Man& m);
	void setName(char* name);
	void setName(const char* name);
	void setAge(int age);
	void setPay(int pay);
	char* getName();
	int getAge();
	int getPay();
	void toString();
	Man& ravno(const Man& m);
	Man& operator=(const Man& m);
	Man& operator++();
	Man operator++(int x);
	void write(ofstream& os);
	void read(ifstream& is);
	friend ostream& operator<<(ostream& os, const Man& m) {
		return os<< "name " << m.name << " age " << m.age << " pay " << m.pay << "\n";
	}
	friend istream& operator>>(istream& is,  Man& m) {
		return is >> m.name >> m.age >>  m.pay ;
	}
	~Man();


};

