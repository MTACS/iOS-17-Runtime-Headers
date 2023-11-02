
@interface TSUCustomFormatWrapper : NSObject {
    void * mCustomFormat;
}

- (const struct { id x1; id x2; id x3; id x4; id x5; double x6; unsigned int x7 : 8; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; }*)conditionalFormatDataForValue:(double)arg1;
- (const struct { id x1; id x2; id x3; id x4; id x5; double x6; unsigned int x7 : 8; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; }*)defaultFormatData;
- (id)formatName;
- (int)formatType;
- (id)initWithCustomFormat:(void*)arg1;
- (const void*)pointerToTSUCustomFormat;

@end
