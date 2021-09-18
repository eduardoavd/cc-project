#pragma once
#include<string>
#include<iostream>

std::string SayHello(const std::string& name)
{
    return "Hello " + name;
}

void dosomething()
{
    std::cout << "Doing Something" << std::endl;
}

int  Add(int a, int b)
{
    return a + b;
}

void PrintAdd(int a, int b)
{
    std::cout << a + b << std::endl;
}

void AddOneByRef(int& a)
{
    a++;
}