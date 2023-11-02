
@interface PXGViewImageTexture : PXGImageTexture {
    float  _alpha;
    struct CGImage { } * _imageRef;
    bool  _isContentOpaque;
    unsigned int  _orientation;
}

@property (nonatomic, readonly) struct CGImage { }*imageRef;
@property (nonatomic, readonly) unsigned int orientation;

- (id)copyWithOrientationTransform:(void *)arg1 alpha:(void *)arg2; // needs 2 arg types, found 1: float
- (void)dealloc;
- (long long)estimatedByteSize;
- (struct CGImage { }*)imageRef;
- (id)initWithImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 alpha:(float)arg3;
- (bool)isOpaque;
- (unsigned int)orientation;
- (struct CGSize { double x1; double x2; })pixelSize;
- (unsigned char)presentationType;

@end
