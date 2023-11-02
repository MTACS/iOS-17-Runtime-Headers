
@interface _UIImageCGImageContent : _UIImageContent {
    _Atomic struct CGImage {} * _imageRef;
}

- (struct CGImage { }*)CGImage;
- (void)_drawWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 effect:(id)arg4;
- (struct CGImage { }*)_provideCGImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)contentOptimizedForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)contentPreparedForDisplay;
- (id)contentWithCGImage:(struct CGImage { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)hasCGImage;
- (unsigned long long)hash;
- (id)imageRendererFormat;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2;
- (id)initWithCGImageSource:(struct CGImageSource { }*)arg1 CGImage:(struct CGImage { }*)arg2 scale:(double)arg3;
- (id)initWithCGImageSource:(struct CGImageSource { }*)arg1 scale:(double)arg2;
- (bool)isCGImage;
- (bool)isEqual:(id)arg1;
- (bool)isHDR;
- (id)makeSDRVersion;
- (bool)optimizeContentForImageSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (bool)prepareContentForDisplayWithCompletionHandler:(id /* block */)arg1;
- (id)renditionApplyingEffect:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (id)typeName;

@end
