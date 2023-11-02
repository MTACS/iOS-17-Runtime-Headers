
@interface ADJasperColorInFieldCalibrationExecutor : ADExecutor {
    ADJasperPointCloud * _aggregatedPointCloud;
    ADEspressoRunner * _backendEspressoRunner;
    unsigned long long  _backendFeaturesOutputElementSize;
    void * _backendResultAggregated;
    unsigned int  _backendResultAggregationCounter;
    unsigned long long  _backendSingleResultSize;
    ADCameraCalibration * _colorCameraCalibration;
    ADJasperColorInFieldCalibrationExecutorParameters * _executorParameters;
    ADEspressoBufferHandle * _featuresOutputEspressoBufferHandle;
    ADEspressoRunner * _frontendEspressoRunner;
    unsigned long long  _frontendFeaturesInputElementSize;
    ADEspressoBufferHandle * _frontendFeaturesInputEspressoBufferHandle;
    ADEspressoBufferHandle * _frontendRotErrorXOutputEspressoBufferHandle;
    ADEspressoBufferHandle * _frontendRotErrorYOutputEspressoBufferHandle;
    ADEspressoBufferHandle * _frontendRotErrorZOutputEspressoBufferHandle;
    ADEspressoBufferHandle * _frontendRotXOutputEspressoBufferHandle;
    ADEspressoBufferHandle * _frontendRotYOutputEspressoBufferHandle;
    ADEspressoBufferHandle * _frontendRotZOutputEspressoBufferHandle;
    bool  _isPrepared;
    struct __CVBuffer { } * _itmPreProcessedColor;
    struct __CVBuffer { } * _itmPreProcessedJasper;
    ADCameraCalibration * _jasperCameraCalibration;
    double  _lastColorTimestamp;
    ADStreamSyncMatch * _lastSyncMatch;
    ADCameraCalibration * _mcamJCameraCalibration;
    ADPointCloudAggregator * _pcAggregator;
    ADJasperColorInFieldCalibrationPipeline * _pipeline;
    bool  _preProcessInputColorFrameDone;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _prevJasperPose;
    ADStreamSync * _streamSync;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _vmcamToWmcamExtrinsics;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _wmcamToMcamExtrinsics;
}

@property (nonatomic, retain) ADCameraCalibration *colorCameraCalibration;
@property (nonatomic, copy) ADJasperColorInFieldCalibrationExecutorParameters *executorParameters;
@property (nonatomic, retain) ADCameraCalibration *jasperCameraCalibration;
@property (nonatomic, readonly) ADJasperColorInFieldCalibrationPipeline *pipeline;
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
- (id)jasperCameraCalibration;
- (long long)numberOfExecutionSteps;
- (id)pipeline;
- (long long)prepare;
- (long long)preprocessInputColorFrame:(struct __CVBuffer { }*)arg1 colorPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 jasperPointClouds:(id)arg3 jasperPoses:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg4 jasperCameraCalibration:(id)arg5 colorCameraCalibration:(id)arg6 timestamp:(double)arg7;
- (long long)preprocessPushedInputs;
- (long long)pushColorImage:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2 metadata:(id)arg3 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4;
- (long long)pushColorImage:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (long long)pushJasperPointCloud:(id)arg1 timestamp:(double)arg2 metadata:(id)arg3 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4;
- (long long)pushJasperPointCloud:(id)arg1 timestamp:(double)arg2 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rectifyColorCameraExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setColorCameraCalibration:(id)arg1;
- (void)setExecutorParameters:(id)arg1;
- (void)setJasperCameraCalibration:(id)arg1;
- (void)setVmcamToWmcamExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setWmcamToMcamExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)updatePcAggregator;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })vmcamToWmcamExtrinsics;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })wmcamToMcamExtrinsics;

@end
