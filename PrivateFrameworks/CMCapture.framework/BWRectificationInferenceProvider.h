
@interface BWRectificationInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable> {
    double * _adaptiveCorrectionKeypointsAuxiliaryDistorted;
    double * _adaptiveCorrectionKeypointsReferenceDistorted;
    unsigned long long  _adcFramesConverged;
    int  _adcFrequency;
    unsigned long long  _adcMinFramesToConverge;
    bool  _applyRollingShutterCorrection;
    MTLTextureDescriptor * _auxInputDescriptor;
    BWInferenceVideoRequirement * _auxInputRequirement;
    MTLTextureDescriptor * _auxKeypointsInputDescriptor;
    BWInferenceVideoRequirement * _auxKeypointsInputRequirement;
    MTLTextureDescriptor * _auxOutputDescriptor;
    BWInferenceVideoRequirement * _auxOutputRequirement;
    Demosaic * _auxiliaryDemosaic;
    Calibration * _calibration;
    unsigned long long  _calibrationHeight;
    NSDictionary * _calibrationOptions;
    unsigned long long  _calibrationWidth;
    NSDictionary * _cameraInfoByPortType;
    DisparityTuningParameters * _disparityTuningParameters;
    unsigned long long  _frameIndex;
    struct { 
        float distortPolynomCoefficients[8]; 
        float undistortPolynomCoefficients[8]; 
        float centerX; 
        float centerY; 
        float originalImageOriginX; 
        float originalImageOriginY; 
        float originalImageWidth; 
        float originalImageHeight; 
        float pixelSize; 
        float homography[9]; 
        float inverseHomography[9]; 
        struct CGSize { 
            double width; 
            double height; 
        } canvasResolution; 
        bool applyZTransform; 
        int samplerType; 
        struct { /* ? */ } *rollingShutterCorrectionHomographies; 
        int numRollingShutterCorrectionHomographies; 
        float rollingShutterCorrectionHomographyStep; 
        bool applyRollingShutterCorrection; 
        float focalLengthPix; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } originalCropRect; 
    }  _gdcParametersAuxiliary;
    struct { 
        float distortPolynomCoefficients[8]; 
        float undistortPolynomCoefficients[8]; 
        float centerX; 
        float centerY; 
        float originalImageOriginX; 
        float originalImageOriginY; 
        float originalImageWidth; 
        float originalImageHeight; 
        float pixelSize; 
        float homography[9]; 
        float inverseHomography[9]; 
        struct CGSize { 
            double width; 
            double height; 
        } canvasResolution; 
        bool applyZTransform; 
        int samplerType; 
        struct { /* ? */ } *rollingShutterCorrectionHomographies; 
        int numRollingShutterCorrectionHomographies; 
        float rollingShutterCorrectionHomographyStep; 
        bool applyRollingShutterCorrection; 
        float focalLengthPix; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } originalCropRect; 
    }  _gdcParametersReference;
    GDCTransform * _gdcTransform;
    unsigned long long  _keypointGridHeight;
    unsigned long long  _keypointGridWidth;
    LKTKeypointDetector * _lktKeypointDetector;
    FigMetalContext * _metalContext;
    int  _oldQuadraBinningFactor;
    float  _oldZoomFactor;
    BWInferenceVideoRequirement * _originalAuxInputRequirement;
    BWInferenceVideoRequirement * _originalRefInputRequirement;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    unsigned int  _rectificationHeight;
    unsigned int  _rectificationWidth;
    MTLTextureDescriptor * _refInputDescriptor;
    BWInferenceVideoRequirement * _refInputRequirement;
    MTLTextureDescriptor * _refKeypointsInputDescriptor;
    BWInferenceVideoRequirement * _refKeypointsInputRequirement;
    MTLTextureDescriptor * _refOutputDescriptor;
    BWInferenceVideoRequirement * _refOutputRequirement;
    float  _zoomDeltaThreshold;
    struct __CVBuffer { } * _zoomedAux;
}

@property (nonatomic, readonly) unsigned int allowedPixelBufferCompressionDirection;
@property (nonatomic, readonly) NSArray *cloneVideoRequirements;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BWInferenceExecutable> *executable;
@property (nonatomic, readonly) int executionTarget;
@property (nonatomic, readonly) <BWInferenceExtractable> *extractable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputMetadataRequirements;
@property (nonatomic, readonly) NSArray *inputVideoRequirements;
@property (nonatomic, readonly) NSArray *outputMetadataRequirements;
@property (nonatomic, readonly) NSArray *outputVideoRequirements;
@property (nonatomic, readonly, copy) NSSet *preventionReasons;
@property (nonatomic, readonly) <BWInferencePropagatable> *propagatable;
@property (nonatomic, readonly) <BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (unsigned int)allowedPixelBufferCompressionDirection;
- (id)cloneVideoRequirements;
- (void)dealloc;
- (id)executable;
- (int)executionTarget;
- (id)extractable;
- (id)initWithRefInputRequirement:(id)arg1 auxInputRequirement:(id)arg2 refKeypointsInputRequirement:(id)arg3 auxKeypointsInputRequirement:(id)arg4 refOutputRequirement:(id)arg5 auxOutputRequirement:(id)arg6 originalRefRequirement:(id)arg7 originalAuxRequirement:(id)arg8 resourceProvider:(id)arg9 configuration:(id)arg10;
- (id)inputMetadataRequirements;
- (id)inputVideoRequirements;
- (id)newStorage;
- (id)outputMetadataRequirements;
- (id)outputVideoRequirements;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (id)preventionReasons;
- (int)prewarmUsingLimitedMemory:(bool)arg1;
- (id)propagatable;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withSubmissionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 workQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)submittable;
- (int)type;

@end
