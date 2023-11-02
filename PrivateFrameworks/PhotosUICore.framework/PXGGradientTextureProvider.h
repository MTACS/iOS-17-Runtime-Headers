
@interface PXGGradientTextureProvider : PXGCGImageTextureProvider

- (void)_requestTextureForGradient:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 requestID:(int)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 geometries:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg2 styles:(struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg3 infos:(struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg4 inLayout:(id)arg5;

@end
