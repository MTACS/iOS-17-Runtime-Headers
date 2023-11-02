
@interface PISliderNetBaseJob : NURenderJob {
    CIRenderTask * _renderTask;
    <NUPurgeableStorage> * _storage;
}

- (void).cxx_destruct;
- (bool)complete:(out id*)arg1;
- (bool)networkProcessingWithResultingPixelBuffer:(struct __CVBuffer { }*)arg1 error:(out id*)arg2;
- (bool)render:(out id*)arg1;
- (id)scalePolicy;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;

@end
