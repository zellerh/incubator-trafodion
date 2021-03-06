/**********************************************************************
// @@@ START COPYRIGHT @@@
//
// (C) Copyright 1996-2014 Hewlett-Packard Development Company, L.P.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
// @@@ END COPYRIGHT @@@
**********************************************************************/
#ifndef STMTDDLGRANTARRAY_H
#define STMTDDLGRANTARRAY_H
/* -*-C++-*-
 *****************************************************************************
 *
 * File:         StmtDDLGrantArray.h
 * Description:  class for an array of pointers pointing to instances of
 *               class StmtDDLGrant
 *               
 *               
 * Created:      1/11/96
 * Language:     C++
 *
 *
 *
 *
 *****************************************************************************
 */


#include "Collections.h"
#ifndef   SQLPARSERGLOBALS_CONTEXT_AND_DIAGS
#define   SQLPARSERGLOBALS_CONTEXT_AND_DIAGS
#endif
#include "SqlParserGlobals.h"
#include "StmtDDLGrant.h"

// -----------------------------------------------------------------------
// contents of this file
// -----------------------------------------------------------------------
class StmtDDLGrantArray;

// -----------------------------------------------------------------------
// forward references
// -----------------------------------------------------------------------
// None.

// -----------------------------------------------------------------------
// Definition of class StmtDDLGrantArray
// -----------------------------------------------------------------------
class StmtDDLGrantArray : public LIST(StmtDDLGrant *)
{

public:

  // constructor
  StmtDDLGrantArray(CollHeap *heap = PARSERHEAP())
   : LIST(StmtDDLGrant *)(heap)
  { }

  // virtual destructor
  virtual ~StmtDDLGrantArray();

private:

}; // class StmtDDLGrantArray

 

#endif // STMTDDLGRANTARRAY_H
