/*
By Derick Ehouman and Alissa Beckett

Modules were implemented by Johnny Santana, Samuel Gardiner, Derick Ehouman, and Alissa Beckett.

*/



#include "targetver.h"
#include "stdafx.h"
#include <wchar.h>

#include "CPU.h"

using namespace std;

CPU g_Cpu;



int wmain(int argc, wchar_t* argv[])
{
	Loader::Loader();
	LTS::LTScheduler();
	STS::STScheduling();
	while (!m_Memory.readyQueue.empty()) {
		g_Cpu.Execute(m_Memory.readyQueue.front());
		m_Memory.readyQueue.pop();
	}

	//g_Cpu.Execute(m_Memory.readyQueue.front());
	return 0;
}

