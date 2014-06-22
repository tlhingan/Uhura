all:
	gcc -o Uhura -L../Mercury/mercuryapi-1.19.3.31/c/src/api uhura.c -lmercuryapi -L../Mercury/mercuryapi-1.19.3.31/c/src/api/lib/LTK/LTKC/Library -lltkc -lpthread -L../Mercury/mercuryapi-1.19.3.31/c/src/api/lib/LTK/LTKC/Library/LLRP.org -lltkctm
	
