#include "Man.h"
Man::Man()
{
	cout << "empty constructor\n";
	age = pay = 0;
	name[0] = 0;
}

Man::Man(char* name, int age, int pay)
{
	cout << "parametr constructor\n";
	strcpy_s(this->name, name);
	this->age = age;
	this->pay = pay;
}
Man::Man(const char* name, int age, int pay)
{
	cout << "parametr constructor\n";
	strcpy_s(this->name, name);
	this->age = age;
	this->pay = pay;
}

Man::Man(const Man& m)
{
	cout << "copy constructor\n";
	strcpy_s(this->name,m.name);
	this->age = m.age;
	this->pay = m.pay;
}

void Man::setName(char* name)
{
	strcpy_s(this->name, name);
}
void Man::setName(const char* name)
{
	strcpy_s(this->name, name);
}

void Man::setAge(int age)
{ 
	this->age = age;
}

void Man::setPay(int pay)
{
	this->pay = pay;
}

char* Man::getName()
{
	return name;
}

int Man::getAge()
{
	return age;
}

int Man::getPay()
{
	return pay;
}

void Man::toString()
{
	cout << "name " << name << " age " << age << " pay " << pay << "\n";
}

Man& Man::ravno(const Man& m)
{
	cout << "func ravno\n";
	strcpy_s(this->name, m.name);
	this->age = m.age;
	this->pay = m.pay;
	return *this;
}

Man& Man::operator=(const Man& m)
{
	cout << "operator =\n";
	strcpy_s(this->name, m.name);
	this->age = m.age;
	this->pay = m.pay;
	return *this;
}

Man& Man::operator++()
{
	this->age++;
	return *this;
}

Man Man::operator++(int x)
{
	Man help(*this);
	this->age++;
	return help;
}

void Man::write(ofstream& os)
{
	os.write((char*)this, sizeof(Man));
}

void Man::read(ifstream& is)
{
	is.read((char*)this, sizeof(Man));
}

Man::~Man()
{
	cout << "destructor\n";
}
