
@interface EBProtection : NSObject

+ (id)edProtectionFromXlDXfProtect:(struct XlDXfProtect { bool x1; bool x2; }*)arg1;
+ (id)edProtectionFromXlGraphicsInfo:(void*)arg1;
+ (id)edProtectionFromXlXf:(struct XlXf { int (**x1)(); struct XlHeader { unsigned int x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; short x3; short x4; short x5; int x6; int x7; unsigned char x8; unsigned char x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; bool x25; bool x26; bool x27; bool x28; bool x29; bool x30; bool x31; bool x32; bool x33; bool x34; bool x35; bool x36; bool x37; bool x38; bool x39; }*)arg1;
+ (void)writeProtection:(id)arg1 toXlGraphicsInfo:(void*)arg2;
+ (void)writeProtection:(id)arg1 toXlXf:(struct XlXf { int (**x1)(); struct XlHeader { unsigned int x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; short x3; short x4; short x5; int x6; int x7; unsigned char x8; unsigned char x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; bool x25; bool x26; bool x27; bool x28; bool x29; bool x30; bool x31; bool x32; bool x33; bool x34; bool x35; bool x36; bool x37; bool x38; bool x39; }*)arg2;
+ (struct XlDXfProtect { bool x1; bool x2; }*)xlDXfProtectFromEDProtection:(id)arg1;

@end
