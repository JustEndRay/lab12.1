#include <iostream>
struct Elem
{
    Elem* link1,
        * link2;
    int info;
};

Elem* p;

void Create();
void Delete();


int main()
{

    Create();
    Delete();
    return 0;
}
void Create()
{
    p = new Elem;
    p->info = 1;
    p->link1 = new Elem;
    p->link1->info = 2;
    p->link1->link1 = new Elem;
    p->link1->link1->info = 3;
    p->link2 = new Elem;
    p->link2->info = 4;
    p->link2->link2 = NULL;
    p->link1->link1->link2=p->link2->link2;
    p->link1->link2 = p->link2;
    p->link2->link1 = p->link1->link1->link1;
    p->link1->link1->link1 = p;
}
void Delete()
{
    delete p->link1->link2;             //14 - видалення четвертого елемента
    delete p->link1;                    //15 - видалення третього елемента
    delete p->link2;                    //16 - видалення другого елемента
    delete p;                           //17 - видалення першого елемента
}