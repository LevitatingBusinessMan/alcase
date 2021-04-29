ifeq ($(PREFIX),)
    PREFIX := /usr
endif

build:
	gcc alcase.c -o alcase

clean:
	rm -v alcase

install:
	install -vm 755 ./alcase $(DESTDIR)$(PREFIX)/bin/alcase
