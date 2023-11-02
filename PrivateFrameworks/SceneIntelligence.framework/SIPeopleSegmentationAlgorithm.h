
@interface SIPeopleSegmentationAlgorithm : SIAlgorithm {
    SIImageInputData * _inputData;
    SIPeopleSegmentation * _model;
    SIScaler * _scaler;
}

+ (Class)inputDataClass;
+ (Class)outputDataClass;
+ (bool)supportsANE;

- (void).cxx_destruct;
- (long long)_inferenceWithInput:(id)arg1 output:(id)arg2;
- (long long)_postprocessingOutput:(id)arg1;
- (long long)_preprocessingInputData:(id)arg1;
- (id)initWithComputeEngine:(long long)arg1;
- (id)initWithComputeEngine:(long long)arg1 andNetworkConfiguration:(long long)arg2;
- (id)initWithComputeEngine:(long long)arg1 andNetworkConfiguration:(long long)arg2 useAppleNeuralEngineFramework:(bool)arg3;
- (id)initWithInputResolution:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithNetworkConfiguration:(id)arg1;
- (long long)runWithInput:(struct __CVBuffer { }*)arg1 output:(struct __IOSurface { }*)arg2;
- (long long)runWithInput:(struct __CVBuffer { }*)arg1 output:(struct __IOSurface { }*)arg2 networkConfiguration:(long long)arg3;
- (void)setSnapEveryFrameCount:(unsigned char)arg1;
- (long long)switchConfiguration:(unsigned long long)arg1;

@end
