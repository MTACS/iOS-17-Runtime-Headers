
@protocol PXGInternalReusableView <NSObject>

@required

- (void)pxg_addToHostingView:(id <PXGInternalReusableView>)arg1;
- (void)pxg_addToScrollViewController:(PXScrollViewController *)arg1;
- (void)pxg_becomeReusable;
- (void)pxg_configureWithTexture:(void *)arg1 geometry:(void *)arg2 info:(void *)arg3 style:(void *)arg4 textureInfo:(void *)arg5 resizableCapInsets:(void *)arg6 reusableViewInfo:(void *)arg7 screenScale:(void *)arg8 separateLayers:(void *)arg9; // needs 9 arg types, found 4: <PXGSpriteTexture> *, struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*, struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*, struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*
- (bool)pxg_hasSuperview;
- (void)pxg_prepareForReuse;
- (void)pxg_removeFromSuperview;
- (void)pxg_shiftPosition:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldReloadForUserData:(id <NSCopying>)arg1;
- (bool)shouldReuseWhenInvisible;

@end
