
@interface _UIImageIOSurfaceContent : _UIImageContent {
    struct __IOSurface { } * _surfaceRef;
}

- (struct __IOSurface { }*)IOSurface;
- (void)_drawWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 effect:(id)arg4;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)imageRendererFormat;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1 scale:(double)arg2;
- (id)initWithScale:(double)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHDR;
- (bool)isIOSurface;
- (id)makeSDRVersion;
- (bool)prefersProvidingContentsDirectly;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (id)typeName;

@end
