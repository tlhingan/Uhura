all:
	gcc -o Uhura -L/home/tlhingan/sdcard/Documents/WORK/Coding/Mercury/mercuryapi-1.19.3.31/c/src/api uhura.c -lmercuryapi -L/home/tlhingan/sdcard/Documents/WORK/Coding/Mercury/mercuryapi-1.19.3.31/c/src/api/lib/LTK/LTKC/Library -lltkc -lpthread -L/home/tlhingan/sdcard/Documents/WORK/Coding/Mercury/mercuryapi-1.19.3.31/c/src/api/lib/LTK/LTKC/Library/LLRP.org -lltkctm
	
