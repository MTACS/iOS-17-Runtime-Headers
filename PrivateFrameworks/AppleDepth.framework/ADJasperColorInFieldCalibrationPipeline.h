
@interface ADJasperColorInFieldCalibrationPipeline : NSObject {
    unsigned char  _backendIndex;
    ADEspressoJasperColorInFieldCalibrationBackendInferenceDescriptor * _backendInferenceDesc;
    ADNetworkProvider * _backendNetworkProvider;
    ADCameraCalibration * _colorCalib;
    float  _colorCameraEfl;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _colorCameraTransform;
    struct __CVBuffer { } * _colorImageRaw;
    struct PixelBufferUtilsSession { struct __CVBuffer {} *x1; struct OpaqueVTPixelTransferSession {} *x2; struct OpaqueVTPixelRotationSession {} *x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; unsigned int x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; unsigned int x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; int x9; int x10; } * _colorInputProcessingSession;
    ADJasperColorInFieldCalibrationControllerParameters * _controllerParameters;
    struct CGPoint { 
        double x; 
        double y; 
    }  _distortedImagePixels;
    ADEspressoJasperColorInFieldCalibrationFrontendInferenceDescriptor * _frontendInferenceDesc;
    ADNetworkProvider * _frontendNetworkProvider;
    unsigned long long  _gcdOutputImageDimensions;
    ADCameraCalibration * _jasperCalib;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _jasperCameraTransform;
    int  _jasperColorInFieldForceRun;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _jasperFOVInImage;
    int  _lastKnownGoodSpotsCount;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _lastKnownPointsCollectionVec;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _motionRotationAngles;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _motionTranslation;
    int  _networkFlowType;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _origWorldPoints;
    ADJasperColorInFieldCalibrationPipelineParameters * _pipelineParameters;
    struct CGPoint { double x1; double x2; } * _rectifiedPoints;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _rectifiedWorldPoints;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _referenceCameraExtrinsics;
    long long  _referenceCameraNumOfPoints;
    float  _scale;
    struct CGPoint { double x1; double x2; } * _undistortedImagePixels;
    char * _validDepthPercentage;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _wmcamToMcamRotation;
    float * _zVals;
}

@property (nonatomic, copy) ADJasperColorInFieldCalibrationPipelineParameters *pipelineParameters;

+ (bool)is:(double)arg1 around:(double)arg2 withPercentage:(float)arg3;
+ (bool)is:(double)arg1 distanceFromSymmetricCroppingPoint:(double)arg2 normalizedBySensorDimention:(double)arg3 andAllowedDriftFromSymmetricCrop:(float)arg4;
+ (bool)isColorFrameValid:(struct __CVBuffer { }*)arg1 withMetadata:(id)arg2 andPipelineParameters:(id)arg3;
+ (bool)isInSupportedFormat:(struct __CVBuffer { }*)arg1;
+ (bool)isJasperFrameValid:(id)arg1 andPipelineParameters:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)backendInferenceDescriptor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateJasperFOVInImageWithJasperCalibration:(id)arg1 withCameraCalibration:(id)arg2 withOriginalImageWidth:(unsigned long long)arg3 withOriginalImageHeight:(unsigned long long)arg4 forOutputImageWidth:(unsigned long long)arg5 forOutputImageHeight:(unsigned long long)arg6;
- (float)claculateWeightedStd;
- (float)convertStdToWeight:(float)arg1;
- (id)createInterSessionDataWithDictionaryRepresentation:(id)arg1;
- (id)createInterSessionDataWithFactoryJasperToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 currentJasperToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)createReferenceCameraForColor:(id)arg1 withExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (void)dealloc;
- (void)deallocMemory;
- (id)frontendInferenceDescriptor;
- (unsigned long long)gcd:(unsigned long long)arg1 and:(unsigned long long)arg2;
- (id)init;
- (id)initWithParameters:(id)arg1 espressoEngine:(unsigned long long)arg2;
- (bool)isColorFrameValid:(struct __CVBuffer { }*)arg1 withMetadata:(id)arg2;
- (bool)isJasperFrameValid:(id)arg1 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 prevPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (bool)isSDF:(id)arg1;
- (id)pipelineParameters;
- (long long)postProcessFrontendOutputX:(void*)arg1 frontendOutputY:(void*)arg2 frontendOutputZ:(void*)arg3 frontendOutputErrorX:(void*)arg4 frontendOutputErrotY:(void*)arg5 frontendOutputErrorZ:(void*)arg6 interSessionData:(id)arg7 jasperColorInFieldCalibrationResult:(id)arg8;
- (long long)preProcessColor:(struct __CVBuffer { }*)arg1 processedColor:(struct __CVBuffer { }*)arg2 referenceCameraCalibration:(id)arg3 colorCameraCalibration:(id)arg4;
- (long long)preProcessJasper:(id)arg1 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 prevPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 referenceCameraCalibration:(id)arg4 jasperCameraCalibration:(id)arg5 reprojectedPointsBuffer:(struct __CVBuffer { }*)arg6;
- (long long)processIntermediateResultsWithBackendFeaturesOutputVector:(const void*)arg1 frontendEspressoFeaturesInput:(void*)arg2 dimensions:(id)arg3;
- (void)reportTelemetry:(id)arg1 withInterSessionData:(id)arg2;
- (long long)resizeImage:(id)arg1 colorImage:(struct __CVBuffer { }*)arg2 processedColor:(struct __CVBuffer { }*)arg3;
- (void)setPipelineParameters:(id)arg1;
- (long long)undistortColorImage:(struct __CVBuffer { }*)arg1 undistortedImage:(struct __CVBuffer { }*)arg2 calibration:(id)arg3;
- (void)updateJasperCamera:(id)arg1;
- (void)updateLastKnownDepthMap:(id)arg1;
- (void)updateWmcamToMcamExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

@end
