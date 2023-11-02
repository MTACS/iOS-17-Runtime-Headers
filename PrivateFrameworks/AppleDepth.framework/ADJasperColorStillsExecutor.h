
@interface ADJasperColorStillsExecutor : ADExecutor {
    ADJasperPointCloud * _aggregatedPointCloud;
    ADJasperPointCloud * _aggregatedPointCloudBeforeCorrection;
    float * _calibAnglesOutput;
    float * _calibErrorsOutput;
    float * _calibFeaturesInput;
    float * _calibFeaturesOutput;
    ADEspressoBufferHandle * _calibFeaturesOutputBuffer;
    ADEspressoRunner * _correctionBackendEspressoRunner;
    ADEspressoRunner * _correctionFrontendEspressoRunner;
    NSString * _correctionLogString;
    ADJasperColorStillsExecutorParameters * _executorParameters;
    bool  _isPrepared;
    struct __CVBuffer { } * _itmCroppedScaledColor;
    struct __CVBuffer { } * _itmPreProcessedColor;
    struct __CVBuffer { } * _itmPreProcessedJasper;
    struct __CVBuffer { } * _itmPreProcessedJasperForCorrection;
    struct __CVBuffer { } * _itmRotatedColor;
    struct __CVBuffer { } * _itmUnprocessedDepth;
    struct __CVBuffer { } * _itmUnscaledProcessedDepth;
    ADJasperColorStillsPipeline * _pipeline;
}

@property (nonatomic, copy) ADJasperColorStillsExecutorParameters *executorParameters;

- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (void)dealloc;
- (void)deallocateEspressoBuffers;
- (long long)executeWithColor:(struct __CVBuffer { }*)arg1 pointCloudArray:(id)arg2 jasper2ColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 colorCameraCalibration:(id)arg4 outDepthMap:(struct __CVBuffer {}**)arg5;
- (long long)executeWithColor:(struct __CVBuffer { }*)arg1 pointCloudArray:(id)arg2 pointCloud2ColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 colorCameraCalibration:(id)arg4 outDepthMap:(struct __CVBuffer {}**)arg5;
- (id)executorParameters;
- (id)getIntermediates;
- (id)init;
- (id)initForDevice:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (long long)numberOfExecutionSteps;
- (long long)prepareForEngineType:(unsigned long long)arg1 inputROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)prepareForEngineType:(unsigned long long)arg1 inputSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setExecutorParameters:(id)arg1;

@end
