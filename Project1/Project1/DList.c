# include "DList.h"
#include <stdio.h>
#include<stdlib.h>
#include <malloc.h>
#include<assert.h>
DListNode* BuyDListNode(DLDataType x){
	DListNode*pNewNode = (DListNode*)malloc(sizeof(DLDataType));
	if (pNewNode == NULL){
		exit(1);
	}
	else{
		pNewNode->_pNext = NULL;
		pNewNode->_data = x;
		pNewNode->_pPre = NULL;

	}
	return  pNewNode;

}
void ListInit(DList* plist)
{
	assert(plist);
	plist->_pHead = BuyDListNode(0);
	plist->_pHead->_pNext = plist->_pHead;
	plist->_pHead->_pPre = plist->_pHead;
}
void ListDestory(DList* plist);

void ListPushBack(DList* plist, DLDataType x)
{
	DListNode*pNewNode = BuyDListNode(x);
	pNewNode->_pPre = plist->_pHead->_pPre;
	pNewNode->_pNext = plist->_pHead;
	plist->_pHead->_pPre = pNewNode;
	pNewNode->_pPre->_pNext = pNewNode;

}



void ListPrint(DList* plist){
	DListNode*pCur = plist->_pHead->_pNext;
	while (pCur != plist->_pHead){
		printf("%d", pCur->_data);

		pCur = pCur->_pNext;

	}
	printf("\n");
}

void TestDList1(){
	DList *plist = NULL;
	ListPushBack(plist, 3);
	ListPushBack(plist, 3);
	ListPushBack(plist, 3);
	ListPushBack(plist, 3);
	ListPushBack(plist, 3);
	ListPushBack(plist, 3);
	ListPrint(plist);
}

