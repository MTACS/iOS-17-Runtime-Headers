
@interface SIPersonDetectorAlgorithm : SIAlgorithm {
    SIImageInputData * _inputData;
    SIPersonDetector * _model;
    SIScaler * _scaler;
}

+ (Class)inputDataClass;
+ (Class)outputDataClass;
+ (bool)supportsANE;

- (void).cxx_destruct;
- (long long)_inferenceWithInput:(id)arg1 output:(id)arg2;
- (long long)_postprocessingOutput:(id)arg1;
- (long long)_preprocessingInputData:(id)arg1;
- (id)initWithComputeEngine:(long long)arg1 andNetworkConfiguration:(long long)arg2;
- (id)initWithComputeEngine:(long long)arg1 andNetworkConfiguration:(long long)arg2 useE5RT:(bool)arg3;
- (id)initWithNetworkConfiguration:(id)arg1;
- (void)runWithInput:(struct __CVBuffer { }*)arg1 output:(id)arg2;
- (void)runWithInput:(struct __CVBuffer { }*)arg1 output:(id)arg2 networkConfiguration:(long long)arg3;
- (long long)switchConfiguration:(unsigned long long)arg1;

@end
