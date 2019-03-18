/*
By Derick Ehouman and Alissa Beckett

Modules were implemented by Johnny Santana, Samuel Gardiner, Derick Ehouman, and Alissa Beckett.

Stephen Allen has not been a part of our communication. He has barely responded to our group discussions and has not made an effort
to assist in the project. His last communication was when we asked him if he had dropped, about 2 weeks before the due date.
This includes tagged messages on GroupMe the day before the due date and plans for in person group meetups.
*/


#include "targetver.h"
#include <Windows.h>
#include <wchar.h>

#include "CPU.h"
// #include "CMemory.h"

CPU g_Cpu;


int wmain(int , wchar_t *[])
{
	// I have to initialize my machine, READ the data file, and then go to work

	// our process has fake data in Debug
	PCB process;

	g_Cpu.AssignProcess(process);

	g_Cpu.Execute();

	return 0;
}

