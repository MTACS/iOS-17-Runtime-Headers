
@interface CAMStillImageCaptureResolvedSettings : NSObject {
    bool  _HDREnabled;
    bool  _captureBeforeResolvingSettingsEnabled;
    bool  _lowLightCaptureHasConstantPreviewFeedbackSensitivity;
    bool  _lowLightCaptureHasInitialPreviewFeedbackSensitivity;
    double  _lowLightCaptureTime;
    struct CGColor { } * _lowLightPreviewColorEstimate;
    bool  _portraitEffectEnabled;
}

@property (getter=isHDREnabled, nonatomic, readonly) bool HDREnabled;
@property (getter=isCaptureBeforeResolvingSettingsEnabled, nonatomic, readonly) bool captureBeforeResolvingSettingsEnabled;
@property (nonatomic, readonly) bool lowLightCaptureHasConstantPreviewFeedbackSensitivity;
@property (nonatomic, readonly) bool lowLightCaptureHasInitialPreviewFeedbackSensitivity;
@property (nonatomic, readonly) double lowLightCaptureTime;
@property (nonatomic, readonly) struct CGColor { }*lowLightPreviewColorEstimate;
@property (getter=isPortraitEffectEnabled, nonatomic, readonly) bool portraitEffectEnabled;

- (void)dealloc;
- (id)initWithHDREnabled:(bool)arg1 portraitEffectEnabled:(bool)arg2 lowLightCaptureTime:(double)arg3 lowLightPreviewColorEstimate:(struct CGColor { }*)arg4 lowLightCaptureHasInitialPreviewFeedbackSensitivity:(bool)arg5 lowLightCaptureHasConstantPreviewFeedbackSensitivity:(bool)arg6 captureBeforeResolvingSettingsEnabled:(bool)arg7;
- (bool)isCaptureBeforeResolvingSettingsEnabled;
- (bool)isHDREnabled;
- (bool)isPortraitEffectEnabled;
- (bool)lowLightCaptureHasConstantPreviewFeedbackSensitivity;
- (bool)lowLightCaptureHasInitialPreviewFeedbackSensitivity;
- (double)lowLightCaptureTime;
- (struct CGColor { }*)lowLightPreviewColorEstimate;

@end
