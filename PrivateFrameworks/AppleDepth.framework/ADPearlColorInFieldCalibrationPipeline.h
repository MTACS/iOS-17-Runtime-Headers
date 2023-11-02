
@interface ADPearlColorInFieldCalibrationPipeline : NSObject {
    ADEspressoPearlColorInFieldCalibrationBackendInferenceDescriptor * _backendInferenceDesc;
    ADNetworkProvider * _backendNetworkProvider;
    ADCameraCalibration * _colorCalib;
    float  _colorCameraEfl;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _colorCameraTransform;
    struct __CVBuffer { } * _colorImageRaw;
    struct PixelBufferUtilsSession { struct __CVBuffer {} *x1; struct OpaqueVTPixelTransferSession {} *x2; struct OpaqueVTPixelRotationSession {} *x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; unsigned int x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; unsigned int x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; int x9; int x10; } * _colorInputProcessingSession;
    ADPearlColorInFieldCalibrationControllerParameters * _controllerParameters;
    struct CGPoint { 
        double x; 
        double y; 
    }  _distortedImagePixels;
    ADEspressoPearlColorInFieldCalibrationFrontendInferenceDescriptor * _frontendInferenceDesc;
    ADNetworkProvider * _frontendNetworkProvider;
    void _motionRotationAngles;
    void _motionTranslation;
    int  _networkFlowType;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _origWorldPoints;
    ADCameraCalibration * _pearlCalib;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _pearlCameraTransform;
    ADReprojection * _pearlReprojector;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _pearlToColorCurrentTransform;
    ADPearlColorInFieldCalibrationPipelineParameters * _pipelineParameters;
    struct CGPoint { double x1; double x2; } * _rectifiedPoints;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _rectifiedWorldPoints;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _referenceCameraExtrinsics;
    long long  _referenceCameraNumOfPoints;
    struct CGPoint { double x1; double x2; } * _undistortedImagePixels;
    float  _validDepthPercentage;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _wmcamToMcamRotation;
    float * _zVals;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } pearlToColorCurrentTransform;
@property (nonatomic, copy) ADPearlColorInFieldCalibrationPipelineParameters *pipelineParameters;

+ (bool)isColorFrameValid:(struct __CVBuffer { }*)arg1 withMetadata:(id)arg2;
+ (bool)isPearlFrameValid:(struct __CVBuffer { }*)arg1 withMetadata:(id)arg2;
+ (bool)isPearlFrameValid:(struct __CVBuffer { }*)arg1 withMetadata:(id)arg2 andPipelineParameters:(id)arg3;
+ (bool)isValidDepthAboveThreshold:(struct __CVBuffer { }*)arg1 threshold:(float)arg2 invalid:(unsigned short)arg3 validDepthPercentage:(float*)arg4;

- (void).cxx_destruct;
- (id)backendInferenceDescriptor;
- (float)claculateWeightedStd;
- (float)convertStdToWeight:(float)arg1;
- (id)createInterSessionDataWithDictionaryRepresentation:(id)arg1;
- (id)createInterSessionDataWithFactoryPearlToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 currentPearlToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)createReferenceCameraForColor:(id)arg1 withExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (void)dealloc;
- (void)deallocMemory;
- (id)frontendInferenceDescriptor;
- (id)init;
- (id)initWithParameters:(id)arg1 espressoEngine:(unsigned long long)arg2;
- (bool)isColorFrameValid:(struct __CVBuffer { }*)arg1 withMetadata:(id)arg2;
- (bool)isPearlFrameValid:(struct __CVBuffer { }*)arg1 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 prevPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (bool)isPearlFrameValid:(struct __CVBuffer { }*)arg1 withMetadata:(id)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })pearlToColorCurrentTransform;
- (id)pipelineParameters;
- (long long)postProcessFrontendOutputX:(void*)arg1 frontendOutputY:(void*)arg2 frontendOutputErrorX:(void*)arg3 frontendOutputErrotY:(void*)arg4 interSessionData:(id)arg5 pearlColorInFieldCalibrationResult:(id)arg6;
- (long long)preProcessColor:(struct __CVBuffer { }*)arg1 processedColor:(struct __CVBuffer { }*)arg2 referenceCameraCalibration:(id)arg3 colorCameraCalibration:(id)arg4;
- (long long)preProcessPearl:(struct __CVBuffer { }*)arg1 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 prevPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 referenceCameraCalibration:(id)arg4 pearlCameraCalibration:(id)arg5 reprojectedPointsBuffer:(struct __CVBuffer { }*)arg6;
- (long long)processIntermediateResultsWithBackendFeaturesOutputVector:(const void*)arg1 frontendEspressoFeaturesInput:(void*)arg2 dimensions:(id)arg3;
- (void)reportTelemetry:(id)arg1 withInterSessionData:(id)arg2;
- (void)setPearlToColorCurrentTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setPipelineParameters:(id)arg1;
- (long long)undistortColorImage:(struct __CVBuffer { }*)arg1 undistortedImage:(struct __CVBuffer { }*)arg2 calibration:(id)arg3;
- (void)updatePearlCamera:(id)arg1;
- (void)updateWmcamToMcamExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

@end
