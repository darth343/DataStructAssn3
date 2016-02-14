#include "DetectMemoryLeak.h"
#include "Node.h"
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"

// DO NOT MODIFY ANY LINE ABOVE OR ADD EXTRA INCLUDES

/*! 
 *  \brief     DM2126 Assignment 2
 *  \details   Submit the whole solution, but only this file will be used to grade
 *  \author    <John Doe>
 *  \date      2015 
 *  \note      <Admin ID>
 */

//*******************************************************************//
// Linked list stuff
//*******************************************************************//
LinkedList::LinkedList()
{
	head = nullptr;
}

LinkedList::~LinkedList()
{
}

void LinkedList::push_front(int data)
{
	if (!head)
	{
		head = new Node;
		head->next = nullptr;
		head->data = data;
	}
	else{
		Node * temp = new Node(data);
		temp->next = head;
		head = temp;
	}
}

void LinkedList::push_back(int data)
{

}

int LinkedList::pop_front()
{
    return 0;
}

int LinkedList::pop_back()
{
    return 0;
}

void LinkedList::insert_at(int pos, int data)
{

}

int LinkedList::pop_at(int pos)
{
    return 0;
}

size_t LinkedList::size()
{
	int size = 0;
	Node * curr = head;
	while (curr)
	{
		size++;
		curr = curr->next;
	}
	return size;
}

//*******************************************************************//
// Queue stuff
//*******************************************************************//
Queue::Queue()
{

}

Queue::~Queue()
{

}

void Queue::enqueue(int data)
{

}

int Queue::dequeue()
{
    return 0;
}

size_t Queue::size()
{
    return 0;
}

//*******************************************************************//
// Stack stuff
//*******************************************************************//
Stack::Stack()
{

}

Stack::~Stack()
{

}

void Stack::push(int data)
{

}

int Stack::pop()
{
    return 0;
}

size_t Stack::size()
{
    return 0;
}
