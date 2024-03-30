#include <Arduino.h>

template <typename  T>
class LinkedListNode
{
private:
    LinkedListNode<T>  *_next = nullptr;
    LinkedListNode<T> *_prev = nullptr;


    LinkedListNode(T value, LinkedListNode<T>  *prev);

public:
    T value;

    LinkedListNode(LinkedListNode<T>  *prev);
    LinkedListNode();
    LinkedListNode(T value);

    ~LinkedListNode();
    void insert(T value);
    T search(T value);
    LinkedListNode<T>* next(); 
};


