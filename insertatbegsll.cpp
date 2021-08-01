#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head;
void insertatbeg(int x){
    node* ll = new node();
    
    ll->data = x;
    ll->next = head;
    head = ll;
}
void printll(){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    cout<<"size of ll\n";
    int n;
    cin>>n;
    for( int i=0;i<n;i++){
        int x;
        cin>>x;
        insertatbeg(x);
        cout<<"now the ll is\n";
        printll();
        cout<<"\n";

    }
    return 0;
}
