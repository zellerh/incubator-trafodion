/**********************************************************************
// @@@ START COPYRIGHT @@@
//
// (C) Copyright 1995-2014 Hewlett-Packard Development Company, L.P.
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
#ifndef ELEMDDLFILEATTROWNER_H
#define ELEMDDLFILEATTROWNER_H
/* -*-C++-*-
******************************************************************************
*
* File:         ElemDDLFileAttrOwner.h
* Description:  class for owner information in DDL create statements
*               initially used for bulk replicate 
*
*               
* Created:      3/29/10
* Language:     C++
*
*
*
*
******************************************************************************
*/


#include "ElemDDLFileAttr.h"

// -----------------------------------------------------------------------
// contents of this file
// -----------------------------------------------------------------------
class ElemDDLFileAttrOwner;

// -----------------------------------------------------------------------
// forward references
// -----------------------------------------------------------------------
// None.

// -----------------------------------------------------------------------
// Generic Lock Length (parse node) elements in DDL statements
// -----------------------------------------------------------------------
class ElemDDLFileAttrOwner : public ElemDDLFileAttr
{

public:

  // constructor
  ElemDDLFileAttrOwner(NAString &objectOwner)
  : ElemDDLFileAttr(ELM_FILE_ATTR_OWNER_ELEM),
    objectOwner_(objectOwner)
  { }

  // virtual destructor
  virtual ~ElemDDLFileAttrOwner();

  // cast
  virtual ElemDDLFileAttrOwner * castToElemDDLFileAttrOwner();

  // accessor
  inline const NAString & getOwner() const;

  // member functions for tracing
  virtual const NAString getText() const;
  virtual const NAString displayLabel1() const;

  // method for building text
  virtual NAString getSyntax() const;

private:

  NAString objectOwner_;

}; // class ElemDDLFileAttrOwner

// -----------------------------------------------------------------------
// definitions of inline methods for class ElemDDLFileAttrOwner
// -----------------------------------------------------------------------
//
// accessor
//

inline const NAString &
ElemDDLFileAttrOwner::getOwner() const
{
  return objectOwner_;
}

#endif // ELEMDDLFILEATTROWNER_H
