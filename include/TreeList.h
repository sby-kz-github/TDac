/*
 * TreeList.h
 *
 *  Created on: 2014/01/13
 *      Author: sby_kz
 */

#ifndef TREELIST_H_
#define TREELIST_H_

#include <list>

class TreeList
{
public:
	TreeList();
	virtual ~TreeList();

	TreeList*               GetParent(){ return mParent; }
	std::list<TreeList*>*   GetChild() { return &mTreeList;}

	bool      AddChild(TreeList *child);
	TreeList* RemoveChild(TreeList *child);

private:
	void      SetParent(TreeList* parent){ mParent = parent; }

private:
	TreeList *mParent;
	std::list<TreeList*>  mTreeList;
};

#endif /* TREELIST_H_ */
