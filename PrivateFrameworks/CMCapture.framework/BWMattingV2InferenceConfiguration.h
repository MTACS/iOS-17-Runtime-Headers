
@interface BWMattingV2InferenceConfiguration : BWInferenceConfiguration {
    bool  _appliesFinalCropRect;
    bool  _depthDataDeliveryEnabled;
    unsigned int  _enabledMattes;
    float  _mainImageDownscalingFactor;
    <MTLCommandQueue> * _metalCommandQueue;
    NSDictionary * _sdofRenderingTuningParameters;
    NSDictionary * _sensorConfigurationsByPortType;
    bool  _submitWithoutSynchronization;
    float  _targetAspectRatio;
    int  _tuningConfiguration;
}

@property (nonatomic) bool appliesFinalCropRect;
@property (nonatomic) bool depthDataDeliveryEnabled;
@property (nonatomic) unsigned int enabledMattes;
@property (nonatomic) float mainImageDownscalingFactor;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;
@property (nonatomic, retain) NSDictionary *sdofRenderingTuningParameters;
@property (nonatomic, retain) NSDictionary *sensorConfigurationsByPortType;
@property (nonatomic) bool submitWithoutSynchronization;
@property (nonatomic) float targetAspectRatio;
@property (nonatomic) int tuningConfiguration;

+ (id)inputAttachedMediaKeyForMattingOutputType:(unsigned int)arg1;
+ (bool)isMattingOutputAttachedMediaKey:(id)arg1;
+ (unsigned int)mattingOutputTypeForAttachedMediaKey:(id)arg1;

- (bool)appliesFinalCropRect;
- (void)dealloc;
- (bool)depthDataDeliveryEnabled;
- (unsigned int)enabledMattes;
- (float)mainImageDownscalingFactor;
- (id)metalCommandQueue;
- (id)sdofRenderingTuningParameters;
- (id)sensorConfigurationsByPortType;
- (void)setAppliesFinalCropRect:(bool)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setEnabledMattes:(unsigned int)arg1;
- (void)setMainImageDownscalingFactor:(float)arg1;
- (void)setMetalCommandQueue:(id)arg1;
- (void)setSdofRenderingTuningParameters:(id)arg1;
- (void)setSensorConfigurationsByPortType:(id)arg1;
- (void)setSubmitWithoutSynchronization:(bool)arg1;
- (void)setTargetAspectRatio:(float)arg1;
- (void)setTuningConfiguration:(int)arg1;
- (bool)submitWithoutSynchronization;
- (float)targetAspectRatio;
- (int)tuningConfiguration;

@end
