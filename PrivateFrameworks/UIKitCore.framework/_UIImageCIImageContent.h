
@interface _UIImageCIImageContent : _UIImageContent {
    bool  _allowHDR;
    CIImage * _ciImage;
}

- (void).cxx_destruct;
- (id)CIImage;
- (void)_drawWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 effect:(id)arg4;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (bool)canRenderCIImage;
- (bool)canScaleImageToTargetResolution;
- (id)description;
- (unsigned long long)hash;
- (id)imageRendererFormat;
- (id)initWithCIImage:(id)arg1 scale:(double)arg2;
- (id)initWithScale:(double)arg1;
- (bool)isCIImage;
- (bool)isEqual:(id)arg1;
- (bool)isHDR;
- (id)makeSDRVersion;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (id)typeName;

@end
