#	Compiler Information
CC = bcc32
ILINK = ilink32
RC = brc32

#	Compilation Information
COPTS = 
SRC = ..\src

all: clean reversi.exe

reversi.exe: rev.obj reversi.obj reversi.res
	$(ILINK) -aa rev.obj reversi.obj,reversi.exe,,c0w32.obj import32.lib cw32mt.lib,,reversi.res

rev.obj: $(SRC)\rev.c
	$(CC) $(COPTS) -c -orev.obj $(SRC)\rev.c

reversi.obj: $(SRC)\reversi.c
	$(CC) $(COPTS) -c -oreversi.obj $(SRC)\reversi.c

reversi.res: $(SRC)\reversi.rc $(SRC)\resource.h $(SRC)\reversi.ico $(SRC)\blank.cur
	brc32 -R -foreversi.res $(SRC)\reversi.rc

clean:
	if exist *.exe del *.exe
	if exist *.ilc del *.ilc
	if exist *.ild del *.ild
	if exist *.ilf del *.ilf
	if exist *.ils del *.ils
	if exist *.map del *.map
	if exist *.obj del *.obj
	if exist *.res del *.res
	if exist *.tds del *.tds