# include <iostream>
# include <cstdlib>
using namespace std;
struct nod//node declaration
{
   int info;
   struct nod *l;
   struct nod *r;
}*r;
class BST
{
   public://functions declaration
   void search(nod *, int);
   void find(int, nod **, nod **);
   void insert(nod *, nod *);
   void del(int);
   void casea(nod *,nod *);
   void caseb(nod *,nod *);
   void casec(nod *,nod *);
   void preorder(nod *);
   void inorder(nod *);
   void postorder(nod *);
   void show(nod *, int);
   BST()
   {
      r = NULL;
   }
};
void BST::find(int i, nod **par, nod **loc)//find the position of the item
{
   nod *ptr, *ptrsave;
   if (r == NULL)
   {
      *loc = NULL;
      *par = NULL;
      return;
