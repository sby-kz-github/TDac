/*
 * TreeList.h
 *
 *  Created on: 2014/01/13
 *      Author: sby_kz
 */

#include "TreeList.h"


TreeList::TreeList() :
mParent(NULL)
{
}

TreeList::~TreeList()
{
}

bool TreeList::AddChild(TreeList *child)
{
	TreeList* ch_parent = child->GetParent();
	if(NULL != ch_parent)
	{
		ch_parent->RemoveChild(child);
	}

	child->SetParent(this);

	mTreeList.push_back(child);
	return true;
}

TreeList* TreeList::RemoveChild(TreeList *child)
{
	std::list<TreeList*>::iterator it;
	for(it = mTreeList.begin(); it != mTreeList.end(); it++){
		if((*it) == child)
		{
			(*it)->SetParent(NULL);
			mTreeList.remove(*it);
			return *it;
		}
	}
	return NULL;
}
