
@interface ADStereoV2Executor : ADExecutor {
    struct __CVBuffer { } * _auxColor;
    struct __CVBuffer { } * _disparity;
    ADStereoV2ExecutorParameters * _executorParameters;
    bool  _isPrepared;
    struct __CVBuffer { } * _itmChunkyAuxColor;
    struct __CVBuffer { } * _itmChunkyRefColor;
    struct __CVBuffer { } * _itmColorFeaturesOutput;
    struct __CVBuffer { } * _itmCroppedScaledAuxColor;
    struct __CVBuffer { } * _itmCroppedScaledRefColor;
    struct __CVBuffer { } * _itmDepthFeaturesOutput;
    struct __CVBuffer { } * _itmPrevColorFeatures;
    struct __CVBuffer { } * _itmPrevDepthFeatures;
    struct __CVBuffer { } * _itmRotatedAuxColor;
    struct __CVBuffer { } * _itmRotatedRefColor;
    ADStereoV2Pipeline * _pipeline;
    struct __CVBuffer { } * _refColor;
    ADEspressoBufferHandle * _temporalSmoothingCurrentFeaturesRatioMinBuffer;
    ADEspressoBufferHandle * _temporalSmoothingPreviousFeaturesRatioMinBuffer;
}

@property (nonatomic, copy) ADStereoV2ExecutorParameters *executorParameters;
@property (nonatomic, readonly) struct __CVBuffer { }*prevColorFeatures;
@property (nonatomic, readonly) struct __CVBuffer { }*prevDepthFeatures;

- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (void)dealloc;
- (void)deallocateEspressoBuffers;
- (long long)executeWithRefColor:(struct __CVBuffer { }*)arg1 auxColor:(struct __CVBuffer { }*)arg2 outDisparityMap:(struct __CVBuffer {}**)arg3;
- (id)executorParameters;
- (id)getIntermediates;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (long long)numberOfExecutionSteps;
- (long long)prepareForEngineType:(unsigned long long)arg1;
- (struct __CVBuffer { }*)prevColorFeatures;
- (struct __CVBuffer { }*)prevDepthFeatures;
- (void)setExecutorParameters:(id)arg1;

@end
