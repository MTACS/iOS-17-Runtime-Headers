
@interface ADPearlColorInFieldCalibrationExecutor : ADExecutor {
    ADEspressoRunner * _backendEspressoRunner;
    unsigned long long  _backendFeaturesOutputElementSize;
    void * _backendResultAggregated;
    unsigned int  _backendResultAggregationCounter;
    unsigned long long  _backendSingleResultSize;
    ADCameraCalibration * _colorCameraCalibration;
    ADPearlColorInFieldCalibrationExecutorParameters * _executorParameters;
    ADEspressoBufferHandle * _featuresOutputEspressoBufferHandle;
    ADEspressoBufferHandle * _frontendErrorXOutputEspressoBufferHandle;
    ADEspressoBufferHandle * _frontendErrorYOutputEspressoBufferHandle;
    ADEspressoRunner * _frontendEspressoRunner;
    unsigned long long  _frontendFeaturesInputElementSize;
    ADEspressoBufferHandle * _frontendFeaturesInputEspressoBufferHandle;
    ADEspressoBufferHandle * _frontendRotationXOutputEspressoBufferHandle;
    ADEspressoBufferHandle * _frontendRotationYOutputEspressoBufferHandle;
    bool  _isPrepared;
    struct __CVBuffer { } * _itmPreProcessedColor;
    struct __CVBuffer { } * _itmPreProcessedPearl;
    double  _lastColorTimestamp;
    ADStreamSyncMatch * _lastSyncMatch;
    ADCameraCalibration * _mcamPCameraCalibration;
    ADCameraCalibration * _pearlCameraCalibration;
    ADPearlColorInFieldCalibrationPipeline * _pipeline;
    bool  _preProcessInputColorFrameDone;
    NSDictionary * _preprocessedColorMetadata;
    NSDictionary * _preprocessedPearlMetadata;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _prevPearlPose;
    ADStreamSync * _streamSync;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _vmcamToWmcamExtrinsics;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _wmcamToMcamExtrinsics;
}

@property (nonatomic, retain) ADCameraCalibration *colorCameraCalibration;
@property (nonatomic, copy) ADPearlColorInFieldCalibrationExecutorParameters *executorParameters;
@property (nonatomic, retain) ADCameraCalibration *pearlCameraCalibration;
@property (nonatomic, readonly) ADPearlColorInFieldCalibrationPipeline *pipeline;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } vmcamToWmcamExtrinsics;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } wmcamToMcamExtrinsics;

- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (long long)clearFeaturesAggregator;
- (id)colorCameraCalibration;
- (void)dealloc;
- (void)deallocateEspressoBuffers;
- (long long)executePreprocessedInputsWithInterSessionData:(id)arg1 outResult:(id)arg2;
- (long long)executeWithInterSessionData:(id)arg1 outResult:(id)arg2;
- (long long)executeWithInterSessionData:(id)arg1 result:(id)arg2;
- (id)executorParameters;
- (id)init;
- (id)initForEngineType:(unsigned long long)arg1;
- (id)initForEngineType:(unsigned long long)arg1 andExecutorParameters:(id)arg2;
- (bool)normalizedDX:(struct __CVBuffer { }*)arg1 toDepth:(struct __CVBuffer { }*)arg2 withMultiplier:(double)arg3 andOffset:(double)arg4;
- (long long)numberOfExecutionSteps;
- (id)pearlCameraCalibration;
- (id)pipeline;
- (long long)prepare;
- (long long)preprocessInputColorFrame:(struct __CVBuffer { }*)arg1 pearlDepth:(struct __CVBuffer { }*)arg2 pearlPoses:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 pceCameraCalibration:(id)arg4 pearlCameraCalibrationTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg5 colorCameraCalibration:(id)arg6 timestamp:(double)arg7;
- (long long)preprocessInputColorFrame:(struct __CVBuffer { }*)arg1 pearlNormalizedDX:(struct __CVBuffer { }*)arg2 pearlPoses:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 disparityNormalizationMultiplier:(double)arg4 disparityNormalizationOffset:(double)arg5 pceCameraCalibration:(id)arg6 pearlCameraCalibrationTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg7 colorCameraCalibration:(id)arg8 timestamp:(double)arg9;
- (long long)preprocessPushedInputs;
- (long long)pushColorImage:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2 metadata:(id)arg3 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4;
- (long long)pushColorImage:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (long long)pushPearlDepth:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2 metadata:(id)arg3 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4;
- (long long)pushPearlDepth:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rectifyColorCameraExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setColorCameraCalibration:(id)arg1;
- (void)setExecutorParameters:(id)arg1;
- (void)setPearlCameraCalibration:(id)arg1;
- (void)setVmcamToWmcamExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setWmcamToMcamExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })vmcamToWmcamExtrinsics;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })wmcamToMcamExtrinsics;

@end
