/*
 * TreeList.h
 *
 *  Created on: 2014/01/13
 *      Author: sby_kz
 */

#ifndef TREELIST_H_
#define TREELIST_H_

#include <list>
#include "stdio.h"

class TreeList
{
public:
	TreeList();
	virtual ~TreeList();

	bool AddChild(TreeList &child);

	void DumpPrint(int depth=0);

private:
	std::list<TreeList>  mTreeList;
};

#endif /* TREELIST_H_ */
