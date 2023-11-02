
@interface _PIParallaxRenderCacheEntry : NSObject {
    CIImage * _cachedImage;
    NUColorSpace * _colorSpace;
    CIImage * _image;
    NUCVPixelBuffer * _pixelBuffer;
    NUPixelFormat * _pixelFormat;
    CIRenderInfo * _renderInfo;
    CIRenderTask * _renderTask;
}

@property (nonatomic, readonly) CIImage *cachedImage;
@property (nonatomic, readonly) NUColorSpace *colorSpace;
@property (nonatomic, readonly) CIImage *image;
@property (nonatomic, readonly) NUPixelFormat *pixelFormat;
@property (nonatomic, readonly) CIRenderInfo *renderInfo;
@property (nonatomic, readonly) CIRenderTask *renderTask;
@property (nonatomic, readonly) unsigned long long sizeInBytes;

- (void).cxx_destruct;
- (id)cachedImage;
- (id)colorSpace;
- (id)image;
- (id)initWithImage:(id)arg1 format:(id)arg2 colorSpace:(id)arg3;
- (id)pixelFormat;
- (bool)render:(id)arg1 error:(out id*)arg2;
- (id)renderInfo;
- (id)renderTask;
- (unsigned long long)sizeInBytes;
- (bool)waitForRender:(out id*)arg1;

@end
