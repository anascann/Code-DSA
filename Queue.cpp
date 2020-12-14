#include<iostream>
using namespace std;

class Queue{
	public:
		int lastIndex;
		int firstIndex;
		int size;
		int capacity;
		
		int * arr=NULL;
		
		Queue(int key){
			lastIndex=0;
			firstIndex = -1;
			arr=new int[key];
			size=0;
			capacity=key;
		}
		
		void enqueue(int element){
			if(size==capacity){
		 	cout<<"queue fulll";		
		}
			arr[lastIndex]=element;
			lastIndex= (lastIndex+1) % capacity;
			if(firstIndex== -1){
				firstIndex=0;
			}
			
			size++;
			
		}
		
		int dequeue(){
			int temp=arr[firstIndex];
			firstIndex=(firstIndex+1)%capacity;
			size--;
			return temp;
		}
		
		int front(){
			if(firstIndex== -1){
				return 0;
			}
			return arr[firstIndex];
		}
		
		int size1(){
			return size;
		}
		
		bool empty(){
	return size==0;
		}
		
		void display(){
			int curr=0;
			while(curr < size){
				cout<<arr[curr];
				curr++;
			}
		}
};

int main(){
	Queue s(4);
	
	s.enqueue(3);
	s.enqueue(4);
	s.enqueue(5);
	s.enqueue(5);
	s.enqueue(8);
	s.dequeue();
	cout<<s.front();
//	s.display();
}
