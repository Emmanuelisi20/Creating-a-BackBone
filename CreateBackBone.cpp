// Emmanuel-Isidahomen
// 12-7-2018
/* Creates a "backbone" using the backBoneArray as the elements of the backbone tree.
Note that this is NOT the same function as createBackBone in the slides.
That function flattens an unbalanced tree. You are taking an array and creating a backbone.
*/ 
#include <iostream>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;

const int size = 9;

template<class T>
class Stack : public std::stack<T> {
public:
	T pop() {
		T tmp = top( );
		stack<T>::pop();
		return tmp;
	}
};
	template<class T>
	class BSTNode {
	public:
		BSTNode() {
			left = right = 0;
		}
		BSTNode(const T& e, BSTNode<T> *l = 0, BSTNode<T> *r = 0) {
			el = e; left = l; right = r;
		}
		T el;
		BSTNode<T> *left, *right;
	};

	template<class T>void BST<T>::inorder(BSTNode<T> *p)
	{
		if (p != 0)
		{
			inorder(p->left);
			visit(p);
			inorder(p->right);
		}
	}
	
	template<class T>
	class BST {
	public:

		BST()
		{
			root = 0;
		}
		BST() 
		{
			clear();
		}

		bool isEmpty() const
		{
			return root == 0;
		}

		void clear() 
		{
			clear(root);
			root = 0;
		}

		void inorder() 
		{
			inorder(root);
		}

		void createDSWBST()
		{
			createDSWBST(root);
		}

		void createBackBone(int[], const int);

	protected:
		BSTNode<T>* root;
		void clear(BSTNode<T>*);
		void inorder(BSTNode<T>*);
		void rotateLeft(BSTNode<T> *&, BSTNode<T> *&, BSTNode<T> *&);
		void createBST(int);
		virtual void visit(BSTNode<T>* p) 
		{
		cout << p->el;
		}
	};

	template<class T>
	void BST<T>::inorder(BSTNode<T> *p) {
		if (p != 0) {
			inorder(p->left);
			visit(p);
			inorder(p->right);
		}
	}

	template<class T>
	void BST<T>::createDSWBST(int n)
	{
		
	}

    template<class T>
    void BST<T> ::rotateLeft(BSTNode<T> *&gra, BSTNode<T> *&par, BSTNode<T> *&ch) {
	//rotates left
	if (par != root) {
		ch->right = left;
		visit(ch);
		par = ch->right;
	}
}

template<class T>
void BST<T> ::createBST(int n){
	//calls rotate function
	 (int n)(pow(2,, floor(log(n)/log(2))) - 1);
}

template<class T> void BST<T>::createBackBone(int backspine[], int size)
{
	BackBone = new BST();
	for (int i = 0; i < 9; i++)
	{
		BackBone.insert(backspine[i]);
	}
	return BackBone;
}

template <class T> void BST<T>::DSWRotate(int bound)
{
	for (int i = 0; i < bound; i++)
		this.DSWRotLeft();
	return;
}

template <class T> void BST<T>::DSWRotLeft(BSTNode<T> *&grandParent, BSTNode<T> *&parent, BSTNode<T> *&rightChild)
{
	grandParent.right = rightChild;
	parent.right      = rightChild.left;
	rightChild.left   = parent;
}

int main(int argc, char**argv) 
{

	int backBone[] = { 5, 10, 15, 20, 23, 25, 28, 30, 40 };

	return;


};
