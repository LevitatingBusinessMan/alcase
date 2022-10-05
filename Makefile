ifeq ($(PREFIX),)
    PREFIX := /usr/local
endif

build:
	gcc alcase.c -o alcase

clean:
	rm -v alcase

install:
	install -Dvm 755 ./alcase $(DESTDIR)$(PREFIX)/bin/alcase
