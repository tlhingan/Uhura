#include "mercury/tm_reader.h"

TMR_Status	Exit_Message;
TMR_Reader	M6e;

bool		Fail = 0;

void M6e_Setup()
{
	Exit_Message = TMR_create(&M6e, "tmr:///dev/ttyACM0");
	if (Exit_Message != TMR_SUCCESS)
		Fail = 1;
	else Fail = 0;
}

int main(int argc, char *argv[])
{
	M6e_Setup();
	return 0;
}
