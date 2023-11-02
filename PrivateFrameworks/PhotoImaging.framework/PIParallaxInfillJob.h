
@interface PIParallaxInfillJob : NURenderJob {
    NUStorageImageBuffer * _infilledImageBuffer;
    CIImage * _matteImage;
    CIRenderTask * _renderTask;
}

@property (nonatomic, readonly) PIParallaxInfillRequest *infillRequest;
@property (nonatomic, retain) CIImage *matteImage;

- (void).cxx_destruct;
- (void)cleanUp;
- (bool)complete:(out id*)arg1;
- (id)infillRequest;
- (id)initWithParallaxInfillRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)matteImage;
- (bool)prepare:(out id*)arg1;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (void)setMatteImage:(id)arg1;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;
- (bool)wantsRenderStage;

@end
