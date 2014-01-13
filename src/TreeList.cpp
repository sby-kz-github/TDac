/*
 * TreeList.h
 *
 *  Created on: 2014/01/13
 *      Author: sby_kz
 */

#include "stdio.h"
#include "TreeList.h"


TreeList::TreeList()
{
}

TreeList::~TreeList()
{
}

bool TreeList::AddChild(TreeList &child)
{
	mTreeList.push_back(child);
	return true;
}

void TreeList::DumpPrint(int depth)
{
	for(int i=0; i<depth; i++)
	{
		printf(" ");
	}
	printf("Node\n");


	std::list<TreeList>::iterator it = mTreeList.begin();
	while(it != mTreeList.end()){
		it->DumpPrint(depth + 1);
		it++;
	}
}
