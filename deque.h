#ifndef DEQUE_H
#define DEQUE_H
#include "log.h"
#include "launch.h"

class Deque
{
private:
    struct node
    {
        Log* ll;
        node* next;
    };
    node *top, *last;

public:
    Deque();
    Deque(int, char*, char*);
    Deque(const Deque&);
    void addLast(Log*);
    void  addFirst(Log*);
    void addFirst(Launch*);
    void addLast(Launch*);
    bool delLast();
    bool delFirst();
    Log* First();
    Log* Last();
    bool sort();
    bool reverse();
    bool isEmpty();
    void saveToFile(FILE*);
    Log* getElement(int);
    int getCount();
    ~Deque();
};

#endif // DEQUE_H
