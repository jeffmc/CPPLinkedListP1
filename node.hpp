template <typename T>
class Node {
	T* dataptr;
	Node* nextptr;

public:
	// Gets a pointer to next node
	Node* getNext() const { 
		return nextptr;
	}
	// Gets a pointer to the data this node contains.
	T* getData() {
		return dataptr;
	}
	// Set the pointer to the next node.
	void setNext(Node* np) {
		nextptr = np;
	}
	// Construct a node with a pointer to data
	Node(T* dp) : dataptr(dp) { }
	// Delete this node and DELETE THE DATA IT CONTAINS!
	// This means once data it put in a linked list, the list is managing that memory.
	~Node() {
		delete dataptr;
	}

};
