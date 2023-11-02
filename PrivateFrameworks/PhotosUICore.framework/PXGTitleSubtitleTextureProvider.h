
@interface PXGTitleSubtitleTextureProvider : PXGCGImageTextureProvider

+ (double)_drawWithTitle:(id)arg1 subtitle:(id)arg2 spec:(id)arg3 targetSize:(struct CGSize { double x1; double x2; })arg4 context:(struct CGContext { }*)arg5 viewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 screenScale:(double)arg7;

- (void)_requestTextureForTitle:(id)arg1 subtitle:(id)arg2 spec:(id)arg3 targetSize:(struct CGSize { double x1; double x2; })arg4 screenScale:(double)arg5 requestID:(int)arg6 renderCompletionHandler:(id /* block */)arg7;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 geometries:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg2 styles:(struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg3 infos:(struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg4 inLayout:(id)arg5;
- (id)workQueue;

@end
