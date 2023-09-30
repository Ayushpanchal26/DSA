//these is a simple stack propgram builded in c++ which includes push pop and display function using switch case.

#include<iostream>
using namespace std;
int stack[100],n=100,top =-1;
//Push  algo
void push(int val){
    if(top>=n-1)
        cout<<"--<<stack is overflow>>--"<<endl;
    
        else {
            top++;
            stack[top]=val;
        }
    
}
//pop algo
void pop(){
    if (top<=-1)
    cout<<"--<<stack Underflow>>--"<<endl;
    
    else{
        cout<<"--<<The popped element is>>--"<<stack[top]<<endl;
        top--;

    }

}
// display algo
void display(){
    if(top>=0){
        cout<<"--<<Stack elements are>>--";
        for(int i = top; i>=0;i--)
        cout<<stack[i]<<" ";
        cout<<endl;
    } else 
    cout<<"--<<stack is empty>>--\n";
}

int main(){
    int ch, val;
    cout<<"1> Push in stack."<<endl;
    cout<<"2> Pop from stack."<<endl;
    cout<<"3> Display the whole stack."<<endl;
    cout<<"4> exit."<<endl;
    do{
        cout<<"-------/----------\n";
        cout<<"Enter your choice:"<<endl;
        // cout<<"-------/----------\n";
        cin>>ch;

        switch(ch){
            case 1:{
                cout<<"Enter the value to push-"<<endl;
                cin>>val;
                push(val);
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                 display();
                 break;
            }
            case 4:{
                cout<<"Exit"<<endl;
                break;
            }
            default:{
                cout<<"Invalid choice"<<endl;
            }
        }
    }while(ch!=4);
    return 0;
}
