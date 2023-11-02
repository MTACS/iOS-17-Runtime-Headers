
@interface PXGStringTextureProvider : PXGCGImageTextureProvider {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _requestBlockLock;
    NSMutableDictionary * _requestBlockLock_requestIDsToProviderBlock;
}

- (void).cxx_destruct;
- (void)_requestTextureForAttributedString:(id)arg1 attributedStringBoundingSize:(struct CGSize { double x1; double x2; })arg2 string:(id)arg3 withAttributes:(id)arg4 targetSize:(struct CGSize { double x1; double x2; })arg5 drawingOptions:(long long)arg6 drawingContext:(id)arg7 userInterfaceDirection:(unsigned long long)arg8 verticalAlignment:(long long)arg9 screenScale:(double)arg10 textureRequestID:(int)arg11 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg12;
- (bool)_shouldRedrawForViewEnvironmentChange:(id)arg1;
- (void)cancelTextureRequests:(id)arg1;
- (id)init;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 geometries:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg2 styles:(struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg3 infos:(struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg4 inLayout:(id)arg5;
- (void)viewEnvironmentDidChange:(id)arg1;

@end
