CC = gcc
LIBS = -lraylib -lopengl32 -lgdi32 -lwinmm

game.exe: libdialog.a
	$(CC) main.c -o game.exe -L lib/ -I include/ $(LIBS) -ldialog

libdialog.a: lib/dialog.c
	$(CC) -c lib/dialog.c -o lib/dialog.o
	ar rcs lib/libdialog.a lib/dialog.o

clean:
	rm lib/dialog.o
	rm lib/libdialog.a
	rm game.exe
