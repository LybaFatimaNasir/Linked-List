#include<iostream>
using namespace std;
class Node {
	int value;
	Node *nextNode;
	Node *prevNode;
public:
	void setValue(int v)
	{
		value = v;
	}
	void setnextNode(Node *nn)
	{
		nextNode = nn;

	}
	void setPrevNode( Node *pn)
	{
		prevNode = pn;
	}
	int getValue()
	{
		return value;
	}
	Node *getNextNode()
	{
		return nextNode;
	}
	Node *getPrevNode()
	{
		return prevNode;
	}
};


