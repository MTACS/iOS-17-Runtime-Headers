
@interface ARParentImageSensorSettings : NSObject <NSCopying> {
    bool  _allowCameraInMultipleForegroundAppLayout;
    bool  _audioCaptureEnabled;
    NSArray * _settings;
}

@property (nonatomic) bool allowCameraInMultipleForegroundAppLayout;
@property (nonatomic) bool audioCaptureEnabled;
@property (nonatomic, copy) NSArray *settings;

- (void).cxx_destruct;
- (bool)allowCameraInMultipleForegroundAppLayout;
- (bool)audioCaptureEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setAllowCameraInMultipleForegroundAppLayout:(bool)arg1;
- (void)setAudioCaptureEnabled:(bool)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
