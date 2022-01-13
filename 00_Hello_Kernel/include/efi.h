typedef unsigned short CHAR16;
typedef unsigned long long EFI_STATUS;

//dox.ipxe.org/UefiSpec_8h_source.html
struct EFI_SYSTEM_TABLE {
  char _dummy[24];//Delete this, rebuild, and try to run!
  CHAR16 *FirmwareVendor;
  char _dummy2[28];
  struct EFI_SIMPLE_TEXT_OUTPUT_PROTCOL {
    void *_dummy;
    EFI_STATUS (*OutputStr)(
      struct EFI_SIMPLE_TEXT_OUTPUT_PROTCOL *This,
      CHAR16 *String);
    //void *_dummy2[4];
    //EFI_STATUS (*ClearScreen)(
    //  struct EFI_SIMPLE_TEXT_OUTPUT_PROTCOL *This);
  } *ConOut;
  //char _dummy3[5000]; //But commenting in this is fine! Doesn't cause an error!
};
