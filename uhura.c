#include "mercury/tm_reader.h"
#include "mercury/tmr_types.h"
#include <stdio.h>
TMR_Status			Exit_Message;
TMR_Reader			M6e, *M6e_Pointer;
TMR_TransportListenerBlock	Transport_Listener_Block;
TMR_ReadListenerBlock		Read_Listener_Block;
TMR_ReadExceptionListenerBlock	Read_Exception_Listener_Block;
bool				Fail = 0;

void stringPrinter()
{

}

void serialPrinter()
{

}

void callback()
{

}

void exceptionCallback()
{

}

void M6e_Setup()
{
	M6e_Pointer = &M6e;	
	Exit_Message = TMR_create(M6e_Pointer, "tmr:///dev/ttyACM0");
	if (Exit_Message != TMR_SUCCESS)
		Fail = 1;
	else
	{
		Fail = 0;
		if (M6e_Pointer->readerType == TMR_READER_TYPE_SERIAL)
			Transport_Listener_Block.listener = serialPrinter;
			else Transport_Listener_Block.listener = stringPrinter;
		Transport_Listener_Block.cookie = stdout;
		Exit_Message = TMR_connect(M6e_Pointer);
		Read_Listener_Block.listener = callback;
		Read_Listener_Block.cookie = NULL;
		Read_Exception_Listener_Block.listener = exceptionCallback;
		Read_Exception_Listener_Block.cookie = NULL;
		Exit_Message = TMR_addReadListener(M6e_Pointer, &Read_Listener_Block);
		Exit_Message = TMR_addReadExceptionListener(M6e_Pointer, &Read_Exception_Listener_Block);	
	}
}

int main(int argc, char *argv[])
{
	M6e_Setup();
	return 0;
}
