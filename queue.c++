//Queue
/*
queue works on  FIFO displine 
queue is ABSTRACT data type 
requirement
data: 1.storage
      2.Insertion end
      3.Deletion end

Methods: 1.Enqueue
         2.Dequeue
         3.first val
         4.last val
         5.peek = bateyga ki hamre front par kya value hain
         6.isEmpty
         7.isFull

how to implement:
1.using arays
2.using linked list
3.using other ABSTACTION DATA TYPE(ADT)
****
NOTE:-1 in dsa means ekk kadam piche valid index see
****
Queue ex:- railways counter , can be implemented in various ways.

Insert(enqueue): 
increment backend - increment b and insert at b


Remove(dequeue):(front++)
 remove at backend shift all elements   ""##big oh 1 O(n)##""
Increment f and remove element at front
first element - front ind +1
Rear element - back

Q  empty conditiom = front = backend
Q full condition = back = size-1;
*/

// Queue implementaion using Array
/* before insertring any element both front and back will be on -1 and while adding 
adding one element both will be on 1 and then again when we add then only back will
move ahead.
*/

#include<iostream>
#define SIZE 5
using namespace std;

class Queue{
    private:
    int items [SIZE],front, rear;

    public:
    Queue(){
        front = -1;
        rear = -1;

    }

  bool isFull(){
    if(front ==0 && rear == SIZE -1){
        return true;
    }
    return false;
  }
void enQueue(int element){
    if(isFull()){
       cout<<"Queue is full";
    }
    else{
        if(front == -1) front =0;
        rear++;
        items[rear]= element;
        cout<<endl <<"Inserted"<<element<<endl;
    }

}

 int deQueue(){
    int element;
    if(is_Empty()){
        cout<<"Queue is empty"<<endl;
        return -1;
    }else{
        element = items[front];
        if(front>= rear){
            front = -1;
            rear =-1;
        }
        else{
            front++;
        }
        cout<<endl <<"deleted"<<element<< endl;
        return(element);
    }
 }
 
 void display(){
    int i;
    if(is_Empty()){
        cout<<endl<<"Empyt queue"<<endl;

    }else{
        cout<<endl<<"Front index"<<front;
        cout<<endl<<"items";;

        for (i = front; i <=rear ; i++)
              cout<<items[i]<<" ";
              cout<<endl<<"rear index"<<rear<<endl;

    }
 }
};

int main(){
    Queue q;

    q.deQueue();

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);

q.display();
q.deQueue();
q.display();
return 0;
}
