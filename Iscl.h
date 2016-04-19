#pragma once
#include "stdafx.h" 
#include <iostream> 
#include <fstream>
#include <string>

using namespace std;

class Isclucheniya 
{
	string err;
public:
	Isclucheniya(string _err) : err(_err)
	{	}
	string what() { return err; }
};

class Razmery : public Isclucheniya 
{
public:
	Razmery() : Isclucheniya("ERROR: nevernye razmery!") {};

};

class WrongIndex : public Isclucheniya 
{
	
public:
	WrongIndex() : Isclucheniya("ERROR: wrong index!") {};
	
};

class FileNotOpen : public Isclucheniya 
{

public:
	FileNotOpen() : Isclucheniya("ERROR: file not open!") {};
	
};

class Samoprisvaivanie : public Isclucheniya 
{
	
public:
	Samoprisvaivanie() : Isclucheniya("ERROR: samoprisvaivanie!") {};
	
};


