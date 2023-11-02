
@interface ARBodyTrackingConfiguration : ARConfiguration {
    bool  _alwaysUsePrimaryCameraForTracking;
    bool  _appClipCodeTrackingEnabled;
    bool  _automaticImageScaleEstimationEnabled;
    bool  _automaticSkeletonScaleEstimationEnabled;
    NSSet * _detectionImages;
    long long  _environmentTexturing;
    bool  _ignoreAppClipCodeURLLimitation;
    ARWorldMap * _initialWorldMap;
    bool  _lowQosSchedulingEnabled;
    long long  _maximumNumberOfTrackedImages;
    unsigned long long  _planeDetection;
    bool  _wantsHDREnvironmentTextures;
}

@property (nonatomic) bool alwaysUsePrimaryCameraForTracking;
@property (nonatomic) bool appClipCodeTrackingEnabled;
@property (getter=isAutoFocusEnabled, nonatomic) bool autoFocusEnabled;
@property (nonatomic) bool automaticImageScaleEstimationEnabled;
@property (nonatomic) bool automaticSkeletonScaleEstimationEnabled;
@property (nonatomic, copy) NSSet *detectionImages;
@property (nonatomic) long long environmentTexturing;
@property (nonatomic) bool ignoreAppClipCodeURLLimitation;
@property (nonatomic, readonly) ARImageSensorSettings *imageSensorSettingsForUltraWide;
@property (nonatomic, retain) ARWorldMap *initialWorldMap;
@property (getter=isLowQosSchedulingEnabled, nonatomic) bool lowQosSchedulingEnabled;
@property (nonatomic) long long maximumNumberOfTrackedImages;
@property (nonatomic) unsigned long long planeDetection;
@property (nonatomic) bool wantsHDREnvironmentTextures;

+ (id)_querySupportedVideoFormatsForUltraWide;
+ (bool)allowsParallelPersonOcclusion;
+ (bool)isSupported;
+ (id)new;
+ (id)recommendedVideoFormatFor4KResolution;
+ (id)recommendedVideoFormatForHighResolutionFrameCapturing;
+ (void)setAllowsParallelPersonOcclusion:(bool)arg1;
+ (id)supportedVideoFormats;
+ (id)supportedVideoFormatsForUltraWide;
+ (bool)supportsAppClipCodeTracking;
+ (bool)supportsFrameSemantics:(unsigned long long)arg1;
+ (bool)supportsUserFaceTracking;

- (void).cxx_destruct;
- (id)_trackingOptions;
- (bool)alwaysUsePrimaryCameraForTracking;
- (bool)appClipCodeTrackingEnabled;
- (bool)automaticImageScaleEstimationEnabled;
- (bool)automaticSkeletonScaleEstimationEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createTechniques:(id)arg1;
- (id)description;
- (id)detectionImages;
- (long long)environmentTexturing;
- (bool)ignoreAppClipCodeURLLimitation;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForUltraWide;
- (id)imageSensorSettingsForUserFaceTracking;
- (id)init;
- (id)initialWorldMap;
- (bool)isEqual:(id)arg1;
- (bool)isLowQosSchedulingEnabled;
- (long long)maximumNumberOfTrackedImages;
- (id)parentImageSensorSettings;
- (unsigned long long)planeDetection;
- (void)setAlwaysUsePrimaryCameraForTracking:(bool)arg1;
- (void)setAppClipCodeTrackingEnabled:(bool)arg1;
- (void)setAutomaticImageScaleEstimationEnabled:(bool)arg1;
- (void)setAutomaticSkeletonScaleEstimationEnabled:(bool)arg1;
- (void)setDetectionImages:(id)arg1;
- (void)setEnvironmentTexturing:(long long)arg1;
- (void)setIgnoreAppClipCodeURLLimitation:(bool)arg1;
- (void)setInitialWorldMap:(id)arg1;
- (void)setLowQosSchedulingEnabled:(bool)arg1;
- (void)setMaximumNumberOfTrackedImages:(long long)arg1;
- (void)setPlaneDetection:(unsigned long long)arg1;
- (void)setVideoFormat:(id)arg1;
- (void)setWantsHDREnvironmentTextures:(bool)arg1;
- (bool)shouldEnableVisionDataForImageSensorSettings:(id)arg1;
- (bool)shouldUseJasper;
- (bool)shouldUseUltraWide;
- (bool)wantsHDREnvironmentTextures;

@end
