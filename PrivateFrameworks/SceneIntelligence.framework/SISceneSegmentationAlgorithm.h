
@interface SISceneSegmentationAlgorithm : SIAlgorithm <SIVisualLoggerSupporting> {
    SISceneSegmentationNetworkConfiguration * _configuration;
    SIScaler * _depthScaler;
    double  _frameTimestamp;
    SIImageInputData * _inputData;
    SISceneSegmentation * _model;
    SIScaler * _scalerOne;
}

@property (nonatomic, readonly) SISceneSegmentationNetworkConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })getOutputResolution:(long long)arg1;
+ (Class)inputDataClass;
+ (Class)outputDataClass;
+ (id)subLoggers;

- (void).cxx_destruct;
- (long long)_inferenceWithInput:(id)arg1 output:(id)arg2;
- (long long)_postprocessingOutput:(id)arg1;
- (long long)_preprocessingInputData:(id)arg1;
- (id)configuration;
- (id)initWithComputeEngine:(long long)arg1 andNetworkConfiguration:(long long)arg2 uncertaintyThreshold:(float)arg3;
- (id)initWithNetworkConfiguration:(id)arg1;
- (long long)runWithInput:(struct __CVBuffer { }*)arg1 output:(struct __IOSurface { }*)arg2 confidenceOutput:(struct __IOSurface { }*)arg3 uncertaintyOutput:(struct __IOSurface { }*)arg4 resampleOutput:(bool)arg5 networkConfiguration:(long long)arg6;
- (bool)supportUncertainty;
- (long long)switchConfiguration:(unsigned long long)arg1;

@end
