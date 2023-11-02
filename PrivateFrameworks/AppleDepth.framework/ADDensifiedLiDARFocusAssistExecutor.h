
@interface ADDensifiedLiDARFocusAssistExecutor : ADExecutor {
    struct PixelBufferUtilsSession { struct __CVBuffer {} *x1; struct OpaqueVTPixelTransferSession {} *x2; struct OpaqueVTPixelRotationSession {} *x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; unsigned int x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; unsigned int x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; int x9; int x10; } * _colorProcessingSession;
    ADDensifiedLiDARFocusAssistExecutorParameters * _executorParameters;
    bool  _isPrepared;
    ADMutableJasperPointCloud * _itmPovChangedPointCloud;
    struct __CVBuffer { } * _itmPreProcessedColor;
    struct __CVBuffer { } * _itmPreProcessedLidar;
    struct __CVBuffer { } * _itmUnprocessedDepth;
    struct __CVBuffer { } * _itmUnprocessedUncertainty;
    ADDensifiedLiDARFocusAssistPipeline * _pipeline;
}

@property (nonatomic, copy) ADDensifiedLiDARFocusAssistExecutorParameters *executorParameters;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } expectedOutputSize;

- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (void)dealloc;
- (void)deallocateEspressoBuffers;
- (long long)executeWithColor:(struct __CVBuffer { }*)arg1 pointCloud:(id)arg2 lidarToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 colorCameraCalibration:(id)arg4 outputDepthMap:(struct __CVBuffer {}**)arg5 outputConfidenceMap:(struct __CVBuffer {}**)arg6 outputCalibration:(id*)arg7;
- (id)executorParameters;
- (struct CGSize { double x1; double x2; })expectedOutputSize;
- (id)getIntermediates;
- (id)init;
- (id)initWithEngineType:(unsigned long long)arg1;
- (long long)numberOfExecutionSteps;
- (long long)prepare;
- (long long)prepareForColorROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setExecutorParameters:(id)arg1;
- (long long)updateColorROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
