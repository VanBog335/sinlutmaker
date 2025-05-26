CC=gcc
TCC=/c/tcc/tcc

all:
	$(TCC) -run main.c

git:
	git commit -am "." ; git push
