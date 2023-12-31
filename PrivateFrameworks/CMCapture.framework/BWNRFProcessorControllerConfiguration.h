
@interface BWNRFProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration <BWNoiseReductionAndFusionProcessorControllerConfiguration> {
    bool  _alwaysAllowModifyingInputBuffers;
    bool  _cmiResourceEnabled;
    bool  _deepFusionEnabled;
    BWVideoFormat * _deepFusionInputFormat;
    bool  _deepFusionWaitForProcessingToFinish;
    bool  _demosaicedRawEnabled;
    unsigned int  _demosaicedRawPixelFormat;
    bool  _depthDataDeliveryEnabled;
    unsigned int  _figThreadPriority;
    bool  _fusionEnabled;
    float  _gainMapMainImageDownscalingFactor;
    int  _greenGhostMitigationVersion;
    BWVideoFormat * _inputFormat;
    bool  _lowLightFusionEnabled;
    BWVideoFormat * _outputFormat;
    bool  _quadraSupportEnabled;
    NSDictionary * _rawColorCalibrationsByPortType;
    NSDictionary * _rawLensShadingCorrectionCoefficientsByPortType;
    bool  _rawNightModeEnabled;
    BWVideoFormat * _rawNightModeInputFormat;
    int  _semanticRenderingVersion;
    bool  _swfrEnabled;
    struct { 
        int width; 
        int height; 
    }  _ultraHighResolutionDimensions;
}

@property (nonatomic) bool alwaysAllowModifyingInputBuffers;
@property (nonatomic) bool cmiResourceEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deepFusionEnabled;
@property (nonatomic, retain) BWVideoFormat *deepFusionInputFormat;
@property (nonatomic) bool deepFusionWaitForProcessingToFinish;
@property (nonatomic) bool deferredProcessingEnabled;
@property (nonatomic) bool demosaicedRawEnabled;
@property (nonatomic) unsigned int demosaicedRawPixelFormat;
@property (nonatomic) bool depthDataDeliveryEnabled;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int figThreadPriority;
@property (nonatomic) bool fusionEnabled;
@property (nonatomic) float gainMapMainImageDownscalingFactor;
@property (nonatomic) int greenGhostMitigationVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BWVideoFormat *inputFormat;
@property (nonatomic) bool lowLightFusionEnabled;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;
@property (nonatomic, retain) BWVideoFormat *outputFormat;
@property (nonatomic) bool quadraSupportEnabled;
@property (nonatomic, retain) NSDictionary *rawColorCalibrationsByPortType;
@property (nonatomic, retain) NSDictionary *rawLensShadingCorrectionCoefficientsByPortType;
@property (nonatomic) bool rawNightModeEnabled;
@property (nonatomic, retain) BWVideoFormat *rawNightModeInputFormat;
@property (nonatomic) int semanticRenderingVersion;
@property (nonatomic, retain) NSDictionary *sensorConfigurationsByPortType;
@property (readonly) Class superclass;
@property (nonatomic) bool swfrEnabled;
@property (nonatomic) struct { int x1; int x2; } ultraHighResolutionDimensions;

- (bool)alwaysAllowModifyingInputBuffers;
- (bool)cmiResourceEnabled;
- (void)dealloc;
- (bool)deepFusionEnabled;
- (id)deepFusionInputFormat;
- (bool)deepFusionWaitForProcessingToFinish;
- (bool)demosaicedRawEnabled;
- (unsigned int)demosaicedRawPixelFormat;
- (bool)depthDataDeliveryEnabled;
- (unsigned int)figThreadPriority;
- (bool)fusionEnabled;
- (float)gainMapMainImageDownscalingFactor;
- (int)greenGhostMitigationVersion;
- (id)inputFormat;
- (bool)lowLightFusionEnabled;
- (id)outputFormat;
- (bool)quadraSupportEnabled;
- (id)rawColorCalibrationsByPortType;
- (id)rawLensShadingCorrectionCoefficientsByPortType;
- (bool)rawNightModeEnabled;
- (id)rawNightModeInputFormat;
- (int)semanticRenderingVersion;
- (void)setAlwaysAllowModifyingInputBuffers:(bool)arg1;
- (void)setCmiResourceEnabled:(bool)arg1;
- (void)setDeepFusionEnabled:(bool)arg1;
- (void)setDeepFusionInputFormat:(id)arg1;
- (void)setDeepFusionWaitForProcessingToFinish:(bool)arg1;
- (void)setDemosaicedRawEnabled:(bool)arg1;
- (void)setDemosaicedRawPixelFormat:(unsigned int)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setFigThreadPriority:(unsigned int)arg1;
- (void)setFusionEnabled:(bool)arg1;
- (void)setGainMapMainImageDownscalingFactor:(float)arg1;
- (void)setGreenGhostMitigationVersion:(int)arg1;
- (void)setInputFormat:(id)arg1;
- (void)setLowLightFusionEnabled:(bool)arg1;
- (void)setOutputFormat:(id)arg1;
- (void)setQuadraSupportEnabled:(bool)arg1;
- (void)setRawColorCalibrationsByPortType:(id)arg1;
- (void)setRawLensShadingCorrectionCoefficientsByPortType:(id)arg1;
- (void)setRawNightModeEnabled:(bool)arg1;
- (void)setRawNightModeInputFormat:(id)arg1;
- (void)setSemanticRenderingVersion:(int)arg1;
- (void)setSwfrEnabled:(bool)arg1;
- (void)setUltraHighResolutionDimensions:(struct { int x1; int x2; })arg1;
- (bool)swfrEnabled;
- (struct { int x1; int x2; })ultraHighResolutionDimensions;

@end
