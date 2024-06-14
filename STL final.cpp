#include <iostream>
#include <queue>
#include <stack>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void showq(queue <int>& Q)
{
	queue <int> tmp;
    while (!Q.empty())
    {
        cout << '\t' << Q.front();
        tmp.push(Q.front());
        Q.pop();
    }
    Q=tmp;
}
void showstack(stack <int> S)
{
    while (!S.empty())
    {
        cout << '\t' << S.top();
        S.pop();
    }
    cout << '\n';
}

void  enterelements(stack <int>& S, queue<int>& Q)
{int x,i;

cout<<"enter 10 elements: ";
	for(i=0;i<10;i++)
	{cin >> x;
	
		if(x%2 == 0)
		{Q.push(x);}
		
	else{S.push(x);}
	}
}
void sum(stack <int> S, queue<int> Q)
{int even=0,odd=0,i,x,z;
	
	while(!Q.empty())
	{z=Q.front();
	Q.pop();
	even=even+z;
	}
	
	while(!S.empty())
	{x=S.top();
	S.pop();
	odd=odd+x;
	}
	cout<<"\nSum of even:\n"<<even;
	cout<<"\nSum of odd:\n"<<odd;
}
void swap(stack <int>& S,queue <int>& Q)
{ stack <int> temp;
int x;
	while(!Q.empty())
	{x=Q.front();
	temp.push(x);
	Q.pop();
	}
	while(!S.empty())
	{x=temp.top();
	S.push(x);
	temp.pop();
	}

}

int main(int argc, char** argv) {
	queue<int> Q;
	stack<int> S;
	
	enterelements(S,Q);
	cout<<"stack is:";
	showstack(S);
	cout<<"Queue is:";
	showq(Q);
	sum(S,Q);
	swap(S,Q);
	cout<<"\nstack after swap:\n";
	showstack(S);
	
	
	return 0;
}



