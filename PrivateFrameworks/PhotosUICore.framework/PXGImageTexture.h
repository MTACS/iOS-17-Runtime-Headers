
@interface PXGImageTexture : PXGBaseTexture {
    id  _cacheKey;
    struct CGImage { } * _sourceCGImage;
    struct __CVBuffer { } * _sourceCVPixelBuffer;
}

@property (nonatomic, readonly) float alpha;
@property (nonatomic, retain) id cacheKey;
@property (nonatomic, readonly) void orientationTransform;
@property (nonatomic) struct CGImage { }*sourceCGImage;
@property (nonatomic) struct __CVBuffer { }*sourceCVPixelBuffer;

+ (id)_sharedCIContext;

- (void).cxx_destruct;
- (float)alpha;
- (id)cacheKey;
- (id)copyWithOrientationTransform:(void *)arg1 alpha:(void *)arg2; // needs 2 arg types, found 1: float
- (void)dealloc;
- (void)getTextureInfos:(struct { float x1; }*)arg1 forSpriteIndexes:(unsigned int*)arg2 geometries:(const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg3 spriteStyles:(const struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg4 spriteInfos:(const struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg5 screenScale:(double)arg6 count:(unsigned int)arg7;
- (struct CGImage { }*)imageRepresentation;
- (id)init;
- (void)orientationTransform;
- (void)setCacheKey:(id)arg1;
- (void)setSourceCGImage:(struct CGImage { }*)arg1;
- (void)setSourceCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (struct CGImage { }*)sourceCGImage;
- (struct __CVBuffer { }*)sourceCVPixelBuffer;

@end
