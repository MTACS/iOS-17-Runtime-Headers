
@interface ADPCEDisparityColorExecutor : ADExecutor {
    <MTLCommandQueue> * _cmdQueue;
    ADPCEDisparityColorExecutorParameters * _executorParameters;
    bool  _isPrepared;
    struct __CVBuffer { } * _itmCroppedScaledColor;
    struct __CVBuffer { } * _itmCroppedScaledDisparity;
    struct __CVBuffer { } * _itmFeaturesOutput;
    struct __CVBuffer { } * _itmPostProcessedDisparity;
    struct __CVBuffer { } * _itmPreProcessedColor;
    struct __CVBuffer { } * _itmPreProcessedDisparity;
    struct __CVBuffer { } * _itmPrevDisparity;
    struct __CVBuffer { } * _itmPrevFeatures;
    struct __CVBuffer { } * _itmProcessedUnfilteredDisparity;
    struct __CVBuffer { } * _itmRotatedColor;
    struct __CVBuffer { } * _itmRotatedDisparity;
    struct __CVBuffer { } * _itmUnprocessedOutputDisparity;
    <MTLDevice> * _metalDevice;
    ADPCEDisparityColorPipeline * _pipeline;
    struct __CVBuffer { } * _postprocessorInputMetalHelper;
    struct __CVBuffer { } * _postprocessorOutputMetalHelper;
    struct __CVBuffer { } * _preprocessorInputMetalHelper;
    struct __CVBuffer { } * _preprocessorOutputMetalHelper;
    bool  _prevDisparityIsZeros;
}

@property (nonatomic, copy) ADPCEDisparityColorExecutorParameters *executorParameters;
@property (nonatomic, readonly) struct __CVBuffer { }*prevDisparity;
@property (nonatomic, readonly) struct __CVBuffer { }*prevFeatures;

- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (void)dealloc;
- (void)deallocateEspressoBuffers;
- (long long)executeWithDisparity:(struct __CVBuffer { }*)arg1 color:(struct __CVBuffer { }*)arg2 outDisparity:(struct __CVBuffer {}**)arg3;
- (long long)executeWithDisparity:(struct __CVBuffer { }*)arg1 normalizationMultiplier:(float)arg2 normalizationOffset:(float)arg3 color:(struct __CVBuffer { }*)arg4 outDisparity:(struct __CVBuffer {}**)arg5;
- (id)executorParameters;
- (id)getIntermediates;
- (id)init;
- (id)initForInputSource:(unsigned long long)arg1;
- (id)initForInputSource:(unsigned long long)arg1 parameters:(id)arg2;
- (long long)numberOfExecutionSteps;
- (long long)postProcessDisparity:(struct __CVBuffer { }*)arg1 output:(struct __CVBuffer { }*)arg2;
- (long long)preProcessDisparity:(struct __CVBuffer { }*)arg1 normalizationMultiplier:(float)arg2 normalizationOffset:(float)arg3 output:(struct __CVBuffer { }*)arg4;
- (long long)prepareForEngineType:(unsigned long long)arg1 inputColorROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct __CVBuffer { }*)prevDisparity;
- (struct __CVBuffer { }*)prevFeatures;
- (void)setExecutorParameters:(id)arg1;

@end
