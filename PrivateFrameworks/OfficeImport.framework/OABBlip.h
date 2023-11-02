
@interface OABBlip : NSObject

+ (int)blipTypeForBlipSignature:(int)arg1;
+ (id)compressMetafileData:(id)arg1 info:(void*)arg2;
+ (id)delayedSubBlipWithMetafileInfo:(const void*)arg1;
+ (id)dibFileContentsWithDibBlipData:(const struct OcBinaryData { int (**x1)(); unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; bool x7; struct SsrwOOStream {} *x8; }*)arg1;
+ (id)readBlipFromBse:(id)arg1;
+ (id)readBlipFromEshBlip:(struct EshBlip { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; struct UID { unsigned char x_4_1_1[16]; } x4; }*)arg1;
+ (void)setMetafileBoundsFromPictData:(id)arg1 info:(void*)arg2;
+ (id)subBlipWithMetafileInfo:(const void*)arg1;
+ (struct EshBlip { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; struct UID { unsigned char x_4_1_1[16]; } x4; }*)writeBlip:(id)arg1;
+ (void)writeBlip:(id)arg1 toBlipStoreEntry:(struct EshBSE { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; struct EshBlip {} *x4; unsigned short *x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned short x9; int x10; unsigned char x11; int x12; int x13; unsigned char x14; unsigned char x15; struct UID { unsigned char x_16_1_1[16]; } x16; }*)arg2;
+ (void)writeEmptyBlipStoreEntry:(struct EshBSE { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; struct EshBlip {} *x4; unsigned short *x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned short x9; int x10; unsigned char x11; int x12; int x13; unsigned char x14; unsigned char x15; struct UID { unsigned char x_16_1_1[16]; } x16; }*)arg1;

@end
