//  THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF 
//  ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO 
//  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A 
//  PARTICULAR PURPOSE.
//
//  Copyright (C) 1993-1997  Microsoft Corporation.  All Rights Reserved.
//
//  PROGRAM: Rev.h
//
//  PURPOSE: Header definitions for Reversi Sample Game Helper Functions

#pragma once

#include "reversi.h"

INT NEAR PASCAL minmax(BYTE b[max_depth + 2][100], INT move, BYTE friendly,
	BYTE enemy, INT ply, INT vmin, INT vmax);
VOID NEAR PASCAL makemove(BYTE b[], INT move, BYTE friendly, BYTE enemy);
INT NEAR PASCAL legalcheck(BYTE b[], INT move, BYTE friendly, BYTE enemy);