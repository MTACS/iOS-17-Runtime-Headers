
@interface ADMonocularV2Executor : ADExecutor {
    ADMonocularV2ExecutorParameters * _executorParameters;
    bool  _isPrepared;
    struct __CVBuffer { } * _itmCroppedScaledColor;
    struct __CVBuffer { } * _itmPreProcessedColor;
    struct __CVBuffer { } * _itmPrevDisparity;
    struct __CVBuffer { } * _itmRotatedColor;
    struct __CVBuffer { } * _itmUnprocessedOutputDisparity;
    ADMonocularV2Pipeline * _pipeline;
}

@property (nonatomic, copy) ADMonocularV2ExecutorParameters *executorParameters;
@property (nonatomic, readonly) struct __CVBuffer { }*prevDisparity;

- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (void)dealloc;
- (void)deallocateEspressoBuffers;
- (long long)executeWithColor:(struct __CVBuffer { }*)arg1 outDisparity:(struct __CVBuffer {}**)arg2;
- (id)executorParameters;
- (id)getIntermediates;
- (id)initWithInputPrioritization:(long long)arg1;
- (id)initWithInputPrioritization:(long long)arg1 parameters:(id)arg2;
- (long long)numberOfExecutionSteps;
- (long long)prepareForEngineType:(unsigned long long)arg1 inputColorROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct __CVBuffer { }*)prevDisparity;
- (void)setExecutorParameters:(id)arg1;

@end
