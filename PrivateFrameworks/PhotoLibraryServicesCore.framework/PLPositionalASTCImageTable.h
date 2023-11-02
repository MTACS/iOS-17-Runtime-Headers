
@interface PLPositionalASTCImageTable : PLPositionalImageTable

+ (struct __CFString { }*)colorSpaceName;
+ (unsigned long long)metalPixelFormat;

- (struct CGImage { }*)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2;
- (id)debugImageDataAtIndex:(unsigned long long)arg1;
- (void)getImageDataOffset:(long long*)arg1 size:(struct CGSize { double x1; double x2; }*)arg2 bytesPerRow:(unsigned long long*)arg3 fromEntryFooter:(struct PLImageTableEntryFooter_s { struct { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; unsigned char x_1_1_4; unsigned char x_1_1_5; unsigned char x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned char x_1_1_13; unsigned char x_1_1_14; unsigned char x_1_1_15; unsigned char x_1_1_16; } x1; unsigned int x2; unsigned int x3; int x4; }*)arg4;

@end
