
@interface FxContext : NSObject {
    struct FxContextPriv { int x1; id x2; union { struct { struct CGImage {} *x_1_2_1; } x_3_1_1; struct { struct CGContext {} *x_2_2_1; } x_3_1_2; struct { unsigned long long x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; bool x_3_2_3; struct CGColorSpace {} *x_3_2_4; } x_3_1_3; struct { id x_4_2_1; } x_3_1_4; struct { id x_5_2_1; } x_3_1_5; struct { id x_6_2_1; } x_3_1_6; } x3; } * _priv;
}

+ (id)contextForCGImageWithOptions:(id)arg1;
+ (id)contextForCIImageWithOptions:(id)arg1;
+ (id)contextForGLTextureWithOptions:(id)arg1;
+ (id)contextWithCGContext:(struct CGContext { }*)arg1 options:(id)arg2;
+ (id)contextWithFxBitmapImage:(id)arg1 options:(id)arg2;

- (id)bitmap;
- (struct CGContext { }*)cgContext;
- (struct CGImage { }*)cgImage;
- (id)ciImage;
- (int)contextType;
- (void)dealloc;
- (id)derivedCIContext;
- (void)drawFxSample:(id)arg1 withRegionOfInterest:(id)arg2;
- (unsigned long long)glTexture;
- (struct CGColorSpace { }*)glTextureColorSpace;
- (bool)glTextureIsFlipped;
- (struct CGSize { double x1; double x2; })glTextureSize;
- (id)initForCGImageWithOptions:(id)arg1;
- (id)initForCIImageWithOptions:(id)arg1;
- (id)initForGLTextureWithOptions:(id)arg1;
- (id)initWithCGContext:(struct CGContext { }*)arg1 options:(id)arg2;
- (id)initWithFxBitmapImage:(id)arg1 options:(id)arg2;
- (id)options;
- (void)setCGImage:(struct CGImage { }*)arg1;
- (void)setCIImage:(id)arg1;
- (void)setGLTexture:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 flipped:(bool)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (void)setOptions:(id)arg1;

@end
