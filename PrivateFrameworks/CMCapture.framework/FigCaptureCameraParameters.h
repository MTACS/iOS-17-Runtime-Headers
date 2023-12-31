
@interface FigCaptureCameraParameters : NSObject {
    NSDictionary * _cameraParameters;
    NSDictionary * _commonDeepZoomParameters;
    NSDictionary * _commonDistortionCorrectionParameters;
    NSDictionary * _commonMattingParameters;
    NSDictionary * _commonNRFParameters;
    NSDictionary * _commonVideoGreenGhostMitigationParameters;
    NSDictionary * _coreImagePortraitFilterParameters;
    NSDictionary * _depthProcessingParameters;
    NSDictionary * _landmarksParameters;
    NSDictionary * _learnedMattingParameters;
    NSDictionary * _meteorParameters;
    NSDictionary * _motionAttachmentsParameters;
    NSDictionary * _personSemanticsParameters;
    NSDictionary * _photoEncoderParameters;
    NSDictionary * _portraitSceneMonitoringParametersByZoomFactor;
    NSDictionary * _stereoDisparityParameters;
    NSDictionary * _temporalNoiseReductionParameters;
    NSDictionary * _videoStabilizationParameters;
}

@property (nonatomic, readonly) NSDictionary *cameraParameters;
@property (nonatomic, readonly) NSDictionary *cameraTuningParameters;
@property (nonatomic, readonly) NSDictionary *commonNRFParameters;
@property (nonatomic, readonly) NSDictionary *commonVideoGreenGhostMitigationParameters;
@property (nonatomic, readonly) int deepZoomVersion;
@property (nonatomic, readonly) int distortionCorrectionVersion;
@property (nonatomic, readonly) int gainMapVersion;
@property (nonatomic, readonly) int meteorHeadroomProcessingType;
@property (nonatomic, readonly) NSDictionary *motionAttachmentsParameters;
@property (nonatomic, readonly) int nrfVersion;
@property (nonatomic, readonly) NSDictionary *photoEncoderParameters;
@property (nonatomic, readonly) NSDictionary *stereoDisparityParameters;
@property (nonatomic, readonly) NSDictionary *temporalNoiseReductionParameters;
@property (nonatomic, readonly) int videoGreenGhostBrightLightMitigationVersion;
@property (nonatomic, readonly) int videoGreenGhostLowLightMitigationVersion;
@property (nonatomic, readonly) NSDictionary *videoStabilizationParameters;
@property (nonatomic, readonly) NSDictionary *videoStabilizationSTFParameters;

+ (void)initialize;
+ (int)movieFileMaxLossyCompressionLevelForPixelFormat:(unsigned int)arg1;
+ (int)previewMaxLossyCompressionLevel;
+ (id)sdofTuningParametersForSensorIDDictionary:(id)arg1 zoomFactor:(float)arg2;
+ (unsigned int)sensorIDFromSensorIDString:(id)arg1;
+ (id)sensorIDStringFromMetadata:(id)arg1;
+ (id)sensorIDStringFromModuleInfo:(id)arg1;
+ (id)sharedInstance;
+ (int)stillImageMaxLossyCompressionLevel;
+ (int)videoDataMaxLossyCompressionLevel;

- (id)actionCameraSceneMonitoringParametersForPortType:(id)arg1 sensorIDString:(id)arg2;
- (id)cameraParameters;
- (id)cameraTuningParameters;
- (bool)chromaticDefringingEnabledForSlomoForPortType:(id)arg1 sensorIDString:(id)arg2;
- (bool)chromaticDefringingEnabledForVideoForPortType:(id)arg1 sensorIDString:(id)arg2;
- (id)chromaticDefringingParametersForPortType:(id)arg1 sensorIDString:(id)arg2;
- (id)commonNRFParameters;
- (id)commonVideoGreenGhostMitigationParameters;
- (bool)complementMatteSuppressionDecisionWithISPDetectedFaces;
- (int)coreImagePortraitFilterVersion;
- (void)dealloc;
- (bool)deepZoomProWithZoomedImageEnabledForPortType:(id)arg1 sensorIDString:(id)arg2;
- (int)deepZoomVersion;
- (int)depthProcessorVersion;
- (int)disparityRefinementTypeForPortType:(id)arg1 sensorIDString:(id)arg2 zoomFactor:(float)arg3;
- (int)disparityVersion;
- (int)disparityVersionForPortType:(id)arg1 sensorIDString:(id)arg2;
- (int)distortionCorrectionVersion;
- (id)focalLengthCharacterizationForStream:(id)arg1;
- (int)focusPixelDisparityVersionForPortType:(id)arg1 sensorIDString:(id)arg2;
- (int)fsdNetStereoImagesAlignmentForPortType:(id)arg1 sensorIDString:(id)arg2;
- (int)gainMapVersion;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithModelSpecificName:(id)arg1;
- (unsigned int)landmarksConstellationPointCountForInferenceType:(int)arg1;
- (struct { unsigned short x1; unsigned short x2; unsigned short x3; })landmarksVersionForInferenceType:(int)arg1;
- (int)learnedMattingVersion;
- (int)mattingVersion;
- (int)mattingVersionForPortType:(id)arg1 sensorIDString:(id)arg2;
- (int)meteorHeadroomProcessingType;
- (id)motionAttachmentsParameters;
- (int)nrfVersion;
- (bool)panoramaRequiresLTMLockingForPortType:(id)arg1 sensorIDString:(id)arg2;
- (int)personSemanticsVersion;
- (id)photoEncoderParameters;
- (bool)portraitPreviewForegroundBlurEnabledForPortType:(id)arg1 sensorIDString:(id)arg2 zoomFactor:(float)arg3;
- (int)portraitSceneMonitorVersionForPortType:(id)arg1 sensorIDString:(id)arg2;
- (id)portraitSceneMonitoringParametersForPortType:(id)arg1 sensorIDString:(id)arg2 zoomFactorRelativeToWidePortType:(float)arg3;
- (id)quadraSubPixelSwitchingParametersForPortType:(id)arg1 sensorIDString:(id)arg2;
- (int)sdofRenderingVersionForPortType:(id)arg1 sensorIDString:(id)arg2 zoomFactor:(float)arg3;
- (id)sensorIDDictionaryForPortType:(id)arg1 sensorIDString:(id)arg2;
- (id)sensorIDDictionaryForStream:(id)arg1;
- (id)stereoDisparityParameters;
- (id)temporalNoiseReductionParameters;
- (int)videoGreenGhostBrightLightMitigationVersion;
- (int)videoGreenGhostLowLightMitigationVersion;
- (id)videoStabilizationParameters;
- (int)videoStabilizationProcessorVersion;
- (id)videoStabilizationSTFParameters;

@end
