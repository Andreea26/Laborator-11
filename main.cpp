#include <iostream>
#include <vector>

using namespace std;

template <typename T>

class Stack{

public:

    vector <T> vec;

    bool Empty(){
        return vec.empty();

    }

    void push(const T &item){
        vec.push_back(item);
        cout<<"element adaugat"<<endl;
    }

    T &top(){

        return vec.back();
    }

    void pop(){

        vec.pop_back();
        cout<<"element sters"<<endl;

    }




};
int main()
{
    //am alas ca template <int>

    Stack <int> a;

    int alegere, x;

    do{
    cout<<endl;
    cout<<"Pentru a adauga element, alege 1"<<endl;
    cout<<"Pentru a sterge element, alege 2"<<endl;
    cout<<"Pentru a verifica daca stiva este goala, alege 3"<<endl;
    cout<<"Pentru a returna referinta ultimului element adaugat, alege 4"<<endl;
    cout<<"Pentru a afisa, alege 5"<<endl;
    cout<<"Iesire, alege 6"<<endl;
    cout<<"Alege: ";
    cin>>alegere;

    switch(alegere){
        case 1: {
            cout<<"element:";
            cin>>x;
            a.push(x);
            break;
        }
        case 2:{
            if(a.Empty() == false)
            {
                a.pop();
            }
            else
                cout<<"Stiva este goala, nu ai ce sa stergi"<<endl;
             break;
        }
        case 3:{
             if(a.Empty() == true)
                cout<<"Este goala"<<endl;
             else
                cout<<"Nu este goala"<<endl;
             break;
        }
        case 4:{
            cout<<"Referinta este "<<a.top()<<endl;
            break;
        }
        case 5: {
            for(int i = 0; i < a.vec.size(); i++)
                cout<<a.vec[i]<<" ";
            cout<<endl;
            break;
        }
        case 6: return 0;
    }
} while(1);



    return 0;
}
