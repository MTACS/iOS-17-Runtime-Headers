
@interface AVCapturePhotoInitiationSettings : NSObject {
    AVCapturePhotoInitiationSettingsInternal * _internal;
}

@property (nonatomic) long long HDRMode;
@property (getter=isAutoStillImageStabilizationEnabled, nonatomic) bool autoStillImageStabilizationEnabled;
@property (nonatomic) bool burstQualityCaptureEnabled;
@property (nonatomic) long long flashMode;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) long long uniqueID;

+ (id)photoInitiationSettingsWithUserInitiatedRequestTimestamp:(unsigned long long)arg1;

- (long long)HDRMode;
- (id)_initWithTimestamp:(unsigned long long)arg1;
- (bool)burstQualityCaptureEnabled;
- (void)dealloc;
- (long long)flashMode;
- (bool)isAutoStillImageStabilizationEnabled;
- (void)setAutoStillImageStabilizationEnabled:(bool)arg1;
- (void)setBurstQualityCaptureEnabled:(bool)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setHDRMode:(long long)arg1;
- (unsigned long long)timestamp;
- (long long)uniqueID;

@end
