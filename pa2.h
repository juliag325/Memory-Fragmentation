//
//  LinkedList.h
//  pa2.h


#include <string>
using namespace std;

class Node{
private:
    string pName;
    bool used;
    Node *next;
public:
    Node();
    Node(bool used);
    Node(bool used, string pName);
    Node(bool used, string pName, Node *next);
    ~Node();
    void setUsed(bool used);
    bool getUsed();
    string getName();
    void setName(string pName);
    Node *getNext();
    void setNext(Node *next);
};

class LinkedList {
private:
    Node *head;
public:
    ~LinkedList();
    LinkedList();
    LinkedList(Node *head);
    
    Node *getHead();
    void setHead(Node *head)
    
    void insert();
    void remove(bool used, string pName);
    
    bool search(string name);
    void print();
    int fragCount();
    bool addBestProgram(string name, int size);
    bool addWorstProgram(string name, int size);
    int searchRemove(string pName);
    void clear();
    
};
