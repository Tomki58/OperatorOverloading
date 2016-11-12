#ifndef LOG_H
#define LOG_H
#include <iostream>

class Launch;

class Log
{
protected:
    int Event_ID;
    char Description[40];
    char User_Name[40];
public:
    Log();
    Log(int, char*, char*);
    Log(const Log&);
    void set_Event_ID(int);
    int get_Event_ID();
    void set_Description(char*);
    char* get_Description();
    void set_User_Name(char*);
    char* get_User_Name();
    virtual void loadFromFile(FILE*);
    virtual ~Log();
};

#endif // LOG_H
