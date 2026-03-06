#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(char);
    char pop();
    Stack();
    ~Stack();
    bool is_empty();
};


void Stack::push(char x){
    NodePtr new_node=new NODE(x);
    if(new_node){
        new_node->set_next(top);
        //top->set_next(new_node);
        top=new_node;
        size+=1;
        cout<<"pushed "<<x<<endl;
    }
    
}

char Stack::pop(){
        NodePtr t=top;
        if (top==NULL)
            return NULL;

        char value;
        value=t->get_value();
        size -=1;
        top = t->get_next();
        //cout<<"poped "<<value<<endl;
        delete t;
        return value;
	
    }

Stack::Stack(){
    top = NULL;
    size = 0;
    
}
Stack::~Stack(){
    for (int i =0; i<size; i++)
    {
        this->pop();
    }
    //delete all remaning stack (i.e. pop all) 
    
}

bool Stack::is_empty(){
    return size==0;
}


#endif
