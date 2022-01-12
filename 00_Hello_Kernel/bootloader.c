#include <efi.h>
EFI_STATUS efi_main(void* ImageHandle, struct EFI_SYSTEM_TABLE *st) {
  st->ConOut->OutputStr(st->ConOut, L"Hello World!\r\n");
  while (1);
}
