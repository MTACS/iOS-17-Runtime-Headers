
@interface PanoramaRegistrationStage : NSObject <MetalImageBufferProcessor, PanoRegistrationProvider> {
    <MTLTexture> * _RegistrationMask;
    int  _direction;
    int  _flowUpperMostScale;
    bool  _hasRetrogradeMotion;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _homography;
    bool  _homographyFailure;
    struct __CVBuffer { } * _lastSlice;
    LKTFlowGPU * _lkt;
    FigMetalContext * _metal;
    <MTLTexture> * _registrationWeights;
    struct __CVBuffer { } * _residualFlow;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _roi;
    PanoramaRegistrationShaders * _shaders;
    int  _slicesProcessed;
    float  _translationsMagnitude;
    NSDictionary * cameraInfoByPortType;
    <MTLCommandQueue> * metalCommandQueue;
}

@property (nonatomic, readonly) <MTLTexture> *RegistrationMask;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } _homography;
@property (nonatomic, retain) NSDictionary *cameraInfoByPortType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasRetrogradeMotion;
@property (readonly) unsigned long long hash;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } homography;
@property bool homographyFailure;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;
@property (retain) <MTLTexture> *registrationWeights;
@property struct __CVBuffer { }*residualFlow;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } roi;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *tuningParameters;

- (void).cxx_destruct;
- (id)RegistrationMask;
- (bool)_checkForNaNs:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (int)_computeRegistration:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 initTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg3;
- (int)_getICPDecimationFactor;
- (int)_getLKTFlowUpperMostScale;
- (bool)_isRetrogradeMotion:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 tolerance:(float)arg2;
- (bool)_isTranslationOutlier:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)_logTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 metadata:(id)arg2 message:(char *)arg3 error:(bool)arg4;
- (void)_resetHomographyFailureFlagToFalse;
- (void)_resetRetrogradeMotionFlagToFalse;
- (void)_setHomographyFailureFlag;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })_setRegistrationParams:(id)arg1 initTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2;
- (void)_setRetrogradeMotionFlag;
- (id)cameraInfoByPortType;
- (void)dealloc;
- (bool)hasHomographyFailureFlag;
- (bool)hasRetrogradeMotion;
- (bool)hasRetrogradeMotionFlag;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })homography;
- (bool)homographyFailure;
- (id)initWithContext:(id)arg1;
- (id)metalCommandQueue;
- (int)prepareRegistrationWithDevice:(id)arg1 library:(id)arg2 commandQueue:(id)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })registerNewSlice:(struct opaqueCMSampleBuffer { }*)arg1 withHFromGyro:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2 registrationCallback:(id /* block */)arg3;
- (id)registrationWeights;
- (void)replacePreviousSlice:(struct __CVBuffer { }*)arg1;
- (int)resetState;
- (struct __CVBuffer { }*)residualFlow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })roi;
- (void)setCameraInfoByPortType:(id)arg1;
- (int)setDirection:(int)arg1;
- (void)setHasRetrogradeMotion:(bool)arg1;
- (void)setHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setHomographyFailure:(bool)arg1;
- (void)setMetalCommandQueue:(id)arg1;
- (void)setRegistrationWeights:(id)arg1;
- (void)setResidualFlow:(struct __CVBuffer { }*)arg1;

@end
