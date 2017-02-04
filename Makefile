SOURCES = main.c args.c error.c help.c parse.c xserver.c


displayinfo: $(SOURCES)
	gcc -o displayinfo $(SOURCES)

