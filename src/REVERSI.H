//  THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF 
//  ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO 
//  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A 
//  PARTICULAR PURPOSE.
//
//  Copyright (C) 1993-1997  Microsoft Corporation.  All Rights Reserved.
//
//  PROGRAM: Reversi.h
//
//  PURPOSE: Header definitions for Reversi Sample Game

#pragma once

#define BoardSize           100 
#define edge                0
#define empty               1
#define human               2
#define computer            3
#define infin               32767
#define win                 32000
#define loss                (-32000)
#define max_depth           6

#define PASS                20
#define NEW                 25
#define BSkill              40
#define EASY                41
#define MEDIUM              42
#define HARD                44
#define VHARD               46
#define HINT                50
#define EXIT                52

VOID NEAR PASCAL paintmove(BYTE b[BoardSize], INT move, BYTE friendly, BYTE enemy);
LRESULT APIENTRY ReversiWndProc(HWND, UINT, WPARAM, LPARAM);
LRESULT APIENTRY InverseMessage(HWND, UINT, WPARAM, LPARAM);

// variable declarations
extern INT     moves[61];
extern INT     BestMove[max_depth + 2];
extern HWND    hWin;
extern HDC     hDisp;
extern INT     depth;
extern INT     direc[];
