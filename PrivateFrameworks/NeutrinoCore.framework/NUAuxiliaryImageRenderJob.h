
@interface NUAuxiliaryImageRenderJob : NURenderJob {
    <NUAuxiliaryImage> * _auxiliaryImage;
    long long  _auxiliaryImageType;
    <NUImageProperties> * _imageProperties;
    NUCVPixelBuffer * _pixelBuffer;
    unsigned int  _pixelFormat;
    CIRenderTask * _renderTask;
}

@property (retain) <NUAuxiliaryImage> *auxiliaryImage;
@property long long auxiliaryImageType;
@property (retain) <NUImageProperties> *imageProperties;

- (void).cxx_destruct;
- (id)auxiliaryImage;
- (long long)auxiliaryImageType;
- (void)cleanUp;
- (bool)complete:(out id*)arg1;
- (id)evaluateOutputGeometry:(out id*)arg1;
- (id)imageProperties;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (bool)prepare:(out id*)arg1;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (void)setAuxiliaryImage:(id)arg1;
- (void)setAuxiliaryImageType:(long long)arg1;
- (void)setImageProperties:(id)arg1;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;
- (bool)wantsPrepareNodeCached;
- (bool)wantsRenderNodeCached;
- (bool)wantsRenderScaleClampedToNativeScale;

@end
