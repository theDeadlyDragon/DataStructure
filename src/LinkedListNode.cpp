#include "LinkedListNode.hpp"
template class LinkedListNode<int>;

template <typename T>
LinkedListNode<T>::LinkedListNode(LinkedListNode<T> *prev)
{
    this->_prev = prev;
}

template <typename T>
LinkedListNode<T>::LinkedListNode(T value)
{
    this->value = value;
}

template <typename T>
LinkedListNode<T>::LinkedListNode()
{
}

template <typename T>
LinkedListNode<T>::LinkedListNode(T value, LinkedListNode<T> *prev)
{
    this->value = value;
    this->_prev = prev;
}

template <typename T>
LinkedListNode<T>::~LinkedListNode()
{
    if (_next != nullptr)
    {
        LinkedListNode<T> *tempNext = this->_next;
        this->_next = nullptr;
        delete (tempNext);
    }

    if (_prev != nullptr)
    {
        LinkedListNode<T> *tempPrev = this->_prev;
        this->_prev = nullptr;
        delete (tempPrev);
    }
}

template <typename T>
void LinkedListNode<T>::insert(T value)
{
    if (this->_next == nullptr)
        this->_next = new LinkedListNode(value, this);
    else
        this->_next->insert(value);
}

template <typename T>
T LinkedListNode<T>::search(T value)
{
    if (this->value == value)
        return value;
    else if (this->_next == nullptr)
        return 0;
    else
        this->_next->search(value);
}

template <typename T>
LinkedListNode<T> *LinkedListNode<T>::next()
{
    return this->_next;
}