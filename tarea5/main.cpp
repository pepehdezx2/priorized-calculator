#include <iostream>
#include <sstream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

/*
 void suma(stack<int>miStack, queue<int>miQueue,  priority_queue<int, vector<int>, greater<int> >miPriorityQueue)
 {
 int iOp1=0;
 int iOp2=0;
 
 iOp2=miStack.top();
 miStack.pop();
 iOp1=miStack.top();
 miStack.pop();
 
 miStack.push(iOp1+iOp2);
 iOp1=0;
 iOp2=0;
 
 iOp2=miQueue.front();
 miQueue.pop();
 iOp1=miQueue.front();
 miQueue.pop();
 
 miQueue.push(iOp1+iOp2);
 iOp1=0;
 iOp2=0;
 
 iOp2=miPriorityQueue.top();
 miPriorityQueue.pop();
 iOp1=miPriorityQueue.top();
 miPriorityQueue.pop();
 
 miPriorityQueue.push(iOp1+iOp2);
 iOp1=0;
 iOp2=0;
 
 }
 */
/*
 void resta(stack<int>miStack, queue<int>miQueue,  priority_queue<int, vector<int>, greater<int> >miPriorityQueue)
 {
 int iOp1=0;
 int iOp2=0;
 
 iOp2=miStack.top();
 miStack.pop();
 iOp1=miStack.top();
 miStack.pop();
 
 miStack.push(iOp1-iOp2);
 iOp1=0;
 iOp2=0;
 
 iOp2=miQueue.front();
 miQueue.pop();
 iOp1=miQueue.front();
 miQueue.pop();
 
 miQueue.push(iOp1-iOp2);
 iOp1=0;
 iOp2=0;
 
 iOp2=miPriorityQueue.top();
 miPriorityQueue.pop();
 iOp1=miPriorityQueue.top();
 miPriorityQueue.pop();
 
 miPriorityQueue.push(iOp1-iOp2);
 iOp1=0;
 iOp2=0;
 
 }
 */
/*
 void mult(stack<int>miStack, queue<int>miQueue,  priority_queue<int, vector<int>, greater<int> >miPriorityQueue)
 {
 int iOp1=0;
 int iOp2=0;
 iOp1=miStack.top();
 miStack.pop();
 iOp2=miStack.top();
 miStack.pop();
 
 miStack.push(iOp1*iOp2);
 iOp1=0;
 iOp2=0;
 
 iOp1=miQueue.front();
 miQueue.pop();
 iOp2=miQueue.front();
 miQueue.pop();
 
 miQueue.push(iOp1*iOp2);
 iOp1=0;
 iOp2=0;
 
 iOp1=miPriorityQueue.top();
 miPriorityQueue.pop();
 iOp2=miPriorityQueue.top();
 miPriorityQueue.pop();
 
 miPriorityQueue.push(iOp1*iOp2);
 iOp1=0;
 iOp2=0;
 
 }
 */

int main()
{
    int iAux, iOp1, iOp2;
    stack<int> miStack;
    queue<int> miQueue;
    priority_queue<int, vector<int>, greater<int> >miPriorityQueue;
    string d, data;
    
    getline(cin, data);
    while (data != "#") // proceso
    {
        stringstream ss;
        ss<< data;
        while (ss >> d)
        {
            switch (d[0])
            {
                case '+':
                {
                    int iOp1=0;
                    int iOp2=0;
                    
                    iOp2=miStack.top();
                    miStack.pop();
                    iOp1=miStack.top();
                    miStack.pop();
                    
                    miStack.push(iOp1+iOp2);
                    iOp1=0;
                    iOp2=0;
                    
                    iOp2=miQueue.front();
                    miQueue.pop();
                    iOp1=miQueue.front();
                    miQueue.pop();
                    
                    miQueue.push(iOp1+iOp2);
                    iOp1=0;
                    iOp2=0;
                    
                    iOp2=miPriorityQueue.top();
                    miPriorityQueue.pop();
                    iOp1=miPriorityQueue.top();
                    miPriorityQueue.pop();
                    
                    miPriorityQueue.push(iOp1+iOp2);
                    iOp1=0;
                    iOp2=0;
                    
                    //suma(miStack, miQueue, miPriorityQueue);
                    break;
                }
                case '-':
                {
                    int iOp1=0;
                    int iOp2=0;
                    
                    iOp2=miStack.top();
                    miStack.pop();
                    iOp1=miStack.top();
                    miStack.pop();
                    
                    miStack.push(iOp1-iOp2);
                    iOp1=0;
                    iOp2=0;
                    
                    iOp2=miQueue.front();
                    miQueue.pop();
                    iOp1=miQueue.front();
                    miQueue.pop();
                    
                    miQueue.push(iOp1-iOp2);
                    iOp1=0;
                    iOp2=0;
                    
                    iOp2=miPriorityQueue.top();
                    miPriorityQueue.pop();
                    iOp1=miPriorityQueue.top();
                    miPriorityQueue.pop();
                    
                    miPriorityQueue.push(iOp1-iOp2);
                    iOp1=0;
                    iOp2=0;
                    //resta(miStack, miQueue, miPriorityQueue);
                    break;
                }
                case '*':
                {
                    int iOp1=0;
                    int iOp2=0;
                    iOp1=miStack.top();
                    miStack.pop();
                    iOp2=miStack.top();
                    miStack.pop();
                    
                    miStack.push(iOp1*iOp2);
                    iOp1=0;
                    iOp2=0;
                    
                    iOp1=miQueue.front();
                    miQueue.pop();
                    iOp2=miQueue.front();
                    miQueue.pop();
                    
                    miQueue.push(iOp1*iOp2);
                    iOp1=0;
                    iOp2=0;
                    
                    iOp1=miPriorityQueue.top();
                    miPriorityQueue.pop();
                    iOp2=miPriorityQueue.top();
                    miPriorityQueue.pop();
                    
                    miPriorityQueue.push(iOp1*iOp2);
                    iOp1=0;
                    iOp2=0;
                    
                    // mult(miStack, miQueue, miPriorityQueue);
                    break;
                }
                default:
                {
                    iAux = stoi(d);
                    miStack.push(iAux);
                    miQueue.push(iAux);
                    miPriorityQueue.push(iAux);
                    break;
                }
            }
        }
        cout<<miStack.top()<< " " << miQueue.front()<< " " << miPriorityQueue.top()<<endl;
        miStack.pop();
        //cout<<miQueue.front()<<endl;
        miQueue.pop();
        //cout<<miPriorityQueue.top()<<endl;
        miPriorityQueue.pop();
        
        getline(cin, data);
    }
    
    
    
    return 0;
}

