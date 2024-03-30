
template <typename  T>
class LinkedListNode
{
private:
    LinkedListNode *_next = nullptr;
    LinkedListNode *_prev = nullptr;
    T value;

    LinkedListNode(T value, LinkedListNode *prev);

public:
    LinkedListNode(LinkedListNode *prev);
    LinkedListNode();
    LinkedListNode(T value);

    ~LinkedListNode();
    void insert(T value);
    T search(T value);
    T next(); 
};


