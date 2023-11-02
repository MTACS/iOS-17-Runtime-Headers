
@interface ARDepthEstimationTechnique : ARMLImageProcessingTechnique <ARMLDepthDataSourceProvider, ARTechniqueBusyState> {
    struct __CVPixelBufferPool { } * _alphaChannelPixelBufferPool;
    ARImageCroppingTechnique * _imageCroppingTechnique;
    struct __CVPixelBufferPool { } * _outputPixelBufferPool;
    ARImageRotationTechnique * _rotationTechnique;
    struct __CVPixelBufferPool { } * _scaledOutputPixelBufferPool;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long depthDataSource;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBusy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_endLoadingMLModelSignpost;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)arg1;
- (void)_endMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (id)_fullDescription;
- (void)_startLoadingMLModelSignpost;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_startMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (id)createResultDataFromTensors:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 numberOfOutputTensors:(unsigned long long)arg2 imageDataForNeuralNetwork:(id)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(struct CGSize { double x1; double x2; })arg6;
- (void)dealloc;
- (long long)depthDataSource;
- (id)init;
- (void)networkModeDidChange:(id)arg1 toMode:(id)arg2;
- (long long)numberOfInputChannelsToExpectInNetwork;
- (double)requiredTimeInterval;
- (id)resultDataClasses;

@end
