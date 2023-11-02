
@interface PXGDecorationTextureProvider : PXGCGImageTextureProvider {
    NSByteCountFormatter * _byteCountFormatter;
    <PXGViewSource> * _overlayViewSource;
    NSDateComponentsFormatter * _videoDurationFormatter;
}

@property (nonatomic, readonly) NSByteCountFormatter *byteCountFormatter;
@property (nonatomic) <PXGViewSource> *overlayViewSource;
@property (nonatomic, readonly) NSDateComponentsFormatter *videoDurationFormatter;

+ (void)_drawWithDecorationInfo:(struct PXGDecorationSpriteInfo { long long x1; long long x2; double x3; long long x4; long long x5; })arg1 solidColorOverlay:(id)arg2 debugDecoration:(id)arg3 cornerRadius:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg4 context:(struct CGContext { }*)arg5 viewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 screenScale:(double)arg7 viewEnvironment:(id)arg8 userInterfaceDirection:(unsigned long long)arg9 videoDurationFormatter:(id)arg10 byteCountFormatter:(id)arg11;

- (void).cxx_destruct;
- (void)_requestTextureForDecorationInfo:(struct PXGDecorationSpriteInfo { long long x1; long long x2; double x3; long long x4; long long x5; })arg1 solidColorOverlay:(id)arg2 debugDecoration:(id)arg3 targetSize:(struct CGSize { double x1; double x2; })arg4 cornerRadius:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg5 screenScale:(double)arg6 requestID:(int)arg7 viewEnvironment:(id)arg8 userInterfaceDirection:(unsigned long long)arg9;
- (void)_requestViewTextureForDecorationInfo:(struct PXGDecorationSpriteInfo { long long x1; long long x2; double x3; long long x4; long long x5; })arg1 customViewClass:(Class)arg2 userData:(id)arg3 decorationOptions:(unsigned long long)arg4 requestID:(int)arg5;
- (id)byteCountFormatter;
- (id)init;
- (id)overlayViewSource;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 geometries:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg2 styles:(struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg3 infos:(struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg4 inLayout:(id)arg5;
- (void)setOverlayViewSource:(id)arg1;
- (id)videoDurationFormatter;

@end
