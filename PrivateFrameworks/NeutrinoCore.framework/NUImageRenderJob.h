
@interface NUImageRenderJob : NURenderJob {
    NUPurgeableImageAccessGuard * _accessRegionGuard;
    NUColorSpace * _colorSpace;
    NUPixelFormat * _pixelFormat;
    NURegion * _regionToRender;
    NUStorageImageBuffer * _renderBuffer;
    CIRenderTask * _renderTask;
    <NUPurgeableImage> * _renderedImage;
    NURegion * _renderedRegion;
    <NUMutablePurgeableImage> * _targetImage;
}

@property (nonatomic, retain) NUColorSpace *colorSpace;
@property (nonatomic, retain) NUPixelFormat *pixelFormat;
@property (nonatomic, readonly) NURegion *regionToRender;
@property (nonatomic, readonly) NUStorageImageBuffer *renderBuffer;
@property (nonatomic, retain) CIRenderTask *renderTask;
@property (nonatomic, readonly) <NUPurgeableImage> *renderedImage;
@property (nonatomic, readonly) NURegion *renderedRegion;
@property (nonatomic, readonly) NUPurgeableStoragePool *storagePool;
@property (nonatomic, readonly) <NUMutablePurgeableImage> *targetImage;

- (void).cxx_destruct;
- (id)_HDRPixelFormatForColorSpace:(id)arg1;
- (void)cleanUp;
- (id)colorSpace;
- (bool)complete:(out id*)arg1;
- (bool)copyStorage:(id)arg1 fromRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 toImage:(id)arg3 atPoint:(struct { long long x1; long long x2; })arg4;
- (id)extentPolicy;
- (id)imageAccumulationNodeWithImageSize:(struct { long long x1; long long x2; })arg1 tileSize:(struct { long long x1; long long x2; })arg2 borderSize:(struct { long long x1; long long x2; })arg3 format:(id)arg4 colorSpace:(id)arg5;
- (id)imageRequest;
- (id)initWithImageRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (id)pixelFormat;
- (bool)prepare:(out id*)arg1;
- (id)prepareNodeWithPipelineState:(id)arg1 error:(out id*)arg2;
- (id)regionToRender;
- (bool)render:(out id*)arg1;
- (id)renderBuffer;
- (id)renderBufferOfSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2;
- (id)renderTask;
- (id)renderedImage;
- (id)renderedRegion;
- (id)scalePolicy;
- (void)setColorSpace:(id)arg1;
- (void)setPixelFormat:(id)arg1;
- (void)setRenderTask:(id)arg1;
- (id)storagePool;
- (id)targetImage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;

@end
