#pragma once
#include <iostream>
#include <string>
using namespace std;

class JsonService :public Service{
public:
	virtual Weather getWeather(string s) override;
	virtual ~JsonService() {};
};