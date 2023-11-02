
@interface ADJasperColorV2Executor : ADExecutor {
    struct PixelBufferUtilsSession { struct __CVBuffer {} *x1; struct OpaqueVTPixelTransferSession {} *x2; struct OpaqueVTPixelRotationSession {} *x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; unsigned int x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; unsigned int x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; int x9; int x10; } * _colorProcessingSession;
    double  _colorScaleFactor;
    ADJasperColorV2ExecutorParameters * _executorParameters;
    bool  _isPaddingRequired;
    bool  _isPrepared;
    struct __CVBuffer { } * _itmColorFeatures;
    struct __CVBuffer { } * _itmDepthFeatures;
    ADMutableJasperPointCloud * _itmPovChangedPointCloud;
    struct __CVBuffer { } * _itmPreProcessedColor;
    struct __CVBuffer { } * _itmPreProcessedJasper;
    struct __CVBuffer { } * _itmPrevColor;
    struct __CVBuffer { } * _itmPrevDepth;
    struct __CVBuffer { } * _itmPrevUncertainty;
    struct __CVBuffer { } * _itmUnprocessedDepth;
    struct __CVBuffer { } * _itmUnprocessedUncertainty;
    unsigned long long  _paddingLinesBottom;
    unsigned long long  _paddingLinesTop;
    ADJasperColorV2Pipeline * _pipeline;
    double  _preScaledPaddingLines;
    bool  _temporalConsistencySupported;
    bool  _temporalConsistencyWithFeatures;
}

@property (nonatomic, copy) ADJasperColorV2ExecutorParameters *executorParameters;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } expectedOutputSize;
@property (nonatomic, readonly) struct __CVBuffer { }*prevColor;
@property (nonatomic, readonly) struct __CVBuffer { }*prevDepth;
@property (nonatomic, readonly) struct __CVBuffer { }*prevUncertainty;

- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (void)dealloc;
- (void)deallocateEspressoBuffers;
- (long long)executeWithColor:(struct __CVBuffer { }*)arg1 pointCloud:(id)arg2 jasperToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 colorCamera:(id)arg4 outputDepthMap:(struct __CVBuffer {}**)arg5 outputConfidenceMap:(struct __CVBuffer {}**)arg6;
- (id)executorParameters;
- (struct CGSize { double x1; double x2; })expectedOutputSize;
- (id)getIntermediates;
- (id)initWithInputPrioritization:(long long)arg1;
- (id)initWithInputPrioritization:(long long)arg1 engineType:(unsigned long long)arg2;
- (id)initWithParameters:(id)arg1 prioritization:(long long)arg2 engineType:(unsigned long long)arg3;
- (long long)numberOfExecutionSteps;
- (long long)prepareForColorROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct __CVBuffer { }*)prevColor;
- (struct __CVBuffer { }*)prevDepth;
- (struct __CVBuffer { }*)prevUncertainty;
- (void)setExecutorParameters:(id)arg1;

@end
