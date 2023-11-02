
@interface ADJasperColorExecutor : ADExecutor {
    struct PixelBufferUtilsSession { struct __CVBuffer {} *x1; struct OpaqueVTPixelTransferSession {} *x2; struct OpaqueVTPixelRotationSession {} *x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; unsigned int x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; unsigned int x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; int x9; int x10; } * _colorProcessingSession;
    ADJasperColorExecutorParameters * _executorParameters;
    bool  _firstTimeExecution;
    struct __CVBuffer { } * _itmCurrProcessedFusedConf;
    struct __CVBuffer { } * _itmCurrProcessedFusedDepth;
    struct __CVBuffer { } * _itmCurrProcessedFusedNormals;
    struct __CVBuffer { } * _itmOpticalFlow;
    struct __CVBuffer { } * _itmPostProcessedConf;
    struct __CVBuffer { } * _itmPostProcessedDepth;
    struct __CVBuffer { } * _itmPostProcessedNormals;
    struct __CVBuffer { } * _itmPreProcessedColor;
    struct __CVBuffer { } * _itmPreProcessedJasper;
    struct __CVBuffer { } * _itmPrevProcessedFusedConf;
    struct __CVBuffer { } * _itmPrevProcessedFusedDepth;
    struct __CVBuffer { } * _itmPrevProcessedFusedNormals;
    struct __CVBuffer { } * _itmUnprocessedAlpha;
    struct __CVBuffer { } * _itmUnprocessedConf;
    struct __CVBuffer { } * _itmUnprocessedDepth;
    struct __CVBuffer { } * _itmUnprocessedNormals;
    struct __CVBuffer { } * _itmWarpedPrevConf;
    struct __CVBuffer { } * _itmWarpedPrevDepth;
    ADLKTExecutor * _lktExecutor;
    bool  _opticalFlowEnabled;
    ADJasperColorPipeline * _pipeline;
    ADCameraCalibration * _prevCamCalib;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _prevPose;
}

@property (nonatomic, retain) ADJasperColorExecutorParameters *executorParameters;

- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (void)dealloc;
- (void)deallocateEspressoBuffers;
- (long long)executeWithColor:(struct __CVBuffer { }*)arg1 pointCloud:(id)arg2 outDepthMap:(struct __CVBuffer {}**)arg3 outConfMap:(struct __CVBuffer {}**)arg4;
- (long long)executeWithColor:(struct __CVBuffer { }*)arg1 pointCloud:(id)arg2 outDepthMap:(struct __CVBuffer {}**)arg3 outConfMap:(struct __CVBuffer {}**)arg4 outNormalsMap:(struct __CVBuffer {}**)arg5;
- (long long)executeWithColor:(struct __CVBuffer { }*)arg1 pointCloud:(id)arg2 outDepthMap:(struct __CVBuffer {}**)arg3 outConfMap:(struct __CVBuffer {}**)arg4 outNormalsMap:(struct __CVBuffer {}**)arg5 worldToCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg6 cameraCalibration:(id)arg7;
- (long long)executeWithColor:(struct __CVBuffer { }*)arg1 pointCloud:(id)arg2 outDepthMap:(struct __CVBuffer {}**)arg3 outConfMap:(struct __CVBuffer {}**)arg4 worldToCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg5 cameraCalibration:(id)arg6;
- (id)executorParameters;
- (id)getIntermediates;
- (id)initWithInputPrioritization:(long long)arg1;
- (id)initWithInputPrioritization:(long long)arg1 parameters:(id)arg2;
- (long long)numberOfExecutionSteps;
- (long long)prepareForEngineType:(unsigned long long)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 exifOrientation:(unsigned int)arg3;
- (long long)prepareForEngineType:(unsigned long long)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 exifOrientation:(unsigned int)arg3 rotationPreference:(unsigned long long)arg4;
- (long long)prepareForEngineType:(unsigned long long)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 exifOrientation:(unsigned int)arg3 useTemporalConsistency:(bool)arg4;
- (long long)prepareForEngineType:(unsigned long long)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 exifOrientation:(unsigned int)arg3 useTemporalConsistency:(bool)arg4 rotationPreference:(unsigned long long)arg5;
- (void)setExecutorParameters:(id)arg1;

@end
