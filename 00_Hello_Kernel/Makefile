CC = x86_64-w64-mingw32-gcc
CFLAGS = -Wall -Wextra
CFLAGS += -nostdinc -nostdlib -fno-builtin -fno-common
# https://forum.osdev.org/viewtopic.php?f=1&t=28307
CFLAGS += -fno-stack-check -fno-stack-protector -mno-stack-arg-probe
CFLAGS += -Wl,--subsystem,10

all: fs/EFI/BOOT/BOOTX64.EFI

build/BOOTX64.EFI: build/bootloader.o
	mkdir -p build
	$(CC) $(CFLAGS) -e efi_main -o $@ $^

build/%.o: %.c
	mkdir -p build
	$(CC) $(CFLAGS) -Iinclude -c -o $@ $<

fs/EFI/BOOT/BOOTX64.EFI: build/BOOTX64.EFI
	mkdir -p fs/EFI/BOOT
	cp $< $@

clean:
	rm -Rf build/* fs/*

.PHONY: all clean
