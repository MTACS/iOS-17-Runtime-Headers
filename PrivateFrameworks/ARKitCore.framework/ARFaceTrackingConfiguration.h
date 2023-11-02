
@interface ARFaceTrackingConfiguration : ARConfiguration {
    bool  _lowPower;
    long long  _maximumNumberOfTrackedFaces;
    bool  _worldTrackingEnabled;
}

@property (nonatomic) bool lowPower;
@property (nonatomic) long long maximumNumberOfTrackedFaces;
@property (getter=isWorldTrackingEnabled, nonatomic) bool worldTrackingEnabled;

+ (id)_querySupportedVideoFormats;
+ (id)_querySupportedVideoFormatsForWorldTracking;
+ (id)fallbackVideoFormat;
+ (id)fallbackVideoFormatWithCaptureDeviceType:(id)arg1;
+ (bool)isSupported;
+ (id)new;
+ (long long)supportedNumberOfTrackedFaces;
+ (id)supportedVideoFormats;
+ (id)supportedVideoFormatsForWorldTracking;
+ (bool)supportsFrameSemantics:(unsigned long long)arg1;
+ (bool)supportsWorldTracking;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createTechniques:(id)arg1;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForLowPower;
- (id)imageSensorSettingsForWorldTracking;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isWorldTrackingEnabled;
- (bool)lowPower;
- (long long)maximumNumberOfTrackedFaces;
- (id)parentImageSensorSettings;
- (id)secondaryTechniques;
- (void)setCameraPosition:(long long)arg1;
- (void)setLightEstimationEnabled:(bool)arg1;
- (void)setLowPower:(bool)arg1;
- (void)setMaximumNumberOfTrackedFaces:(long long)arg1;
- (void)setWorldTrackingEnabled:(bool)arg1;

@end
