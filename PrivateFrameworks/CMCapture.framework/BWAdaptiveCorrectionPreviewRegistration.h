
@interface BWAdaptiveCorrectionPreviewRegistration : NSObject {
    int (* _computeVerticalBaselineTransformFunction;
    struct CalModel { 
        double focalLengthPix[2]; 
        double opticalCenterX[2]; 
        double opticalCenterY[2]; 
        double extrinRotRefefenceToAuxiliary[12]; 
        double canonicalDisparityScale; 
        double calibrationDimensions[2]; 
        double pixelSize_um[2]; 
    }  _correctedCalibration;
    struct OpaqueVTPixelRotationSession { } * _cropAndScaleSession;
    void * _disparityLib;
    NSMutableDictionary * _estimatedSagPositionsByPortType;
    bool  _excludeEstimatedSagFromWideTeleAlignment;
    bool  _excludeExtrinsicsCorrectionFromWideTeleAlignment;
    int (* _fullCorrectionFunction;
    double * _keypointDepths;
    FigRegToolboxGPU * _keypointDetector;
    struct { float x1; float x2; float x3; float x4; float x5; float x6; } * _keypointList;
    double * _keypointWeights;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastNarrowerFramePTS;
    FigMetalContext * _metalContext;
    BWPixelBufferPool * _registrationPool;
    BWMemoryPoolFlushAssertion * _registrationPoolReadyAssertion;
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
        } narrowerToWiderTransforms[3]; 
    }  _registrationTransform;
    bool  _resourcesCleaned;
    int (* _rotateCalModelFunction;
    float  _sagEstimationAlpha;
    NSDictionary * _staticParametersByPortType;
    int (* _transformPointsWithMatrixFunction;
    double * _transposedKeypoints;
    BWAdaptiveCorrectionPreviewRegistrationTuningParameters * _tuningParameters;
    unsigned int  _validKeypointsCount;
    double * _validKeypointsInSensorResolution;
}

+ (struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1[3]; })flattenNarrowerToWiderTransforms:(struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1[3]; })arg1 narrowerDimensions:(struct { int x1; int x2; })arg2 narrowerFinalCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atNarrowerToWiderCameraScale:(double)arg4 useYAnchorAtHeightCenter:(bool)arg5;
+ (void)initialize;

- (int)allocateResourcesWithVideoFormat:(id)arg1 metalContext:(id)arg2;
- (void)cleanupResources;
- (int)computeAlignmentFromWiderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 narrowerSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 narrowerToWiderTransformsOut:(struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1[3]; }*)arg3;
- (int)computeApproximateCorrectionForWiderCamera:(struct opaqueCMSampleBuffer { }*)arg1 narrowerCameraPortType:(id)arg2 narrowerPixelBufferDimensions:(struct { int x1; int x2; })arg3 narrowerToWiderCameraScale:(double)arg4 narrowerToWiderTransformsOut:(struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1[3]; }*)arg5;
- (void)dealloc;
- (id)initWithCameraInfoByPortType:(id)arg1 excludeStaticComponentFromAlignmentShifts:(bool)arg2;
- (int)registerWiderSampleBufferUsingADC:(struct opaqueCMSampleBuffer { }*)arg1 narrowerSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 narrowerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 macroTransitionType:(int)arg4 narrowerToWiderTransformsOut:(struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1[3]; }*)arg5;

@end
