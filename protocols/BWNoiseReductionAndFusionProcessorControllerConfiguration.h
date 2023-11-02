
@protocol BWNoiseReductionAndFusionProcessorControllerConfiguration <NSObject>

@required

- (bool)alwaysAllowModifyingInputBuffers;
- (bool)deepFusionEnabled;
- (BWVideoFormat *)deepFusionInputFormat;
- (bool)deepFusionWaitForProcessingToFinish;
- (bool)deferredProcessingEnabled;
- (bool)demosaicedRawEnabled;
- (unsigned int)demosaicedRawPixelFormat;
- (bool)depthDataDeliveryEnabled;
- (unsigned int)figThreadPriority;
- (bool)fusionEnabled;
- (float)gainMapMainImageDownscalingFactor;
- (int)greenGhostMitigationVersion;
- (BWVideoFormat *)inputFormat;
- (bool)lowLightFusionEnabled;
- (<MTLCommandQueue> *)metalCommandQueue;
- (BWVideoFormat *)outputFormat;
- (bool)quadraSupportEnabled;
- (NSDictionary *)rawColorCalibrationsByPortType;
- (NSDictionary *)rawLensShadingCorrectionCoefficientsByPortType;
- (NSDictionary *)sensorConfigurationsByPortType;
- (void)setAlwaysAllowModifyingInputBuffers:(bool)arg1;
- (void)setDeepFusionEnabled:(bool)arg1;
- (void)setDeepFusionInputFormat:(BWVideoFormat *)arg1;
- (void)setDeepFusionWaitForProcessingToFinish:(bool)arg1;
- (void)setDeferredProcessingEnabled:(bool)arg1;
- (void)setDemosaicedRawEnabled:(bool)arg1;
- (void)setDemosaicedRawPixelFormat:(unsigned int)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setFigThreadPriority:(unsigned int)arg1;
- (void)setFusionEnabled:(bool)arg1;
- (void)setGainMapMainImageDownscalingFactor:(float)arg1;
- (void)setGreenGhostMitigationVersion:(int)arg1;
- (void)setInputFormat:(BWVideoFormat *)arg1;
- (void)setLowLightFusionEnabled:(bool)arg1;
- (void)setMetalCommandQueue:(id <MTLCommandQueue>)arg1;
- (void)setOutputFormat:(BWVideoFormat *)arg1;
- (void)setQuadraSupportEnabled:(bool)arg1;
- (void)setRawColorCalibrationsByPortType:(NSDictionary *)arg1;
- (void)setRawLensShadingCorrectionCoefficientsByPortType:(NSDictionary *)arg1;
- (void)setSensorConfigurationsByPortType:(NSDictionary *)arg1;
- (void)setSwfrEnabled:(bool)arg1;
- (void)setUltraHighResolutionDimensions:(struct { int x1; int x2; })arg1;
- (bool)swfrEnabled;
- (struct { int x1; int x2; })ultraHighResolutionDimensions;

@end
