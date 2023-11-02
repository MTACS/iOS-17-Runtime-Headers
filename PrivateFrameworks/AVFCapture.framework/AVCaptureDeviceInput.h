
@interface AVCaptureDeviceInput : AVCaptureInput {
    AVCaptureDeviceInputInternal * _internal;
}

@property (nonatomic, readonly) AVCaptureDevice *device;
@property (nonatomic) bool unifiedAutoExposureDefaultsEnabled;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } videoMinFrameDurationOverride;

+ (id)deviceInputWithDevice:(id)arg1 error:(id*)arg2;
+ (void)initialize;

- (void)_applyVideoMinFrameDurationOverride;
- (bool)_authorizedToUseDeviceAndRequestIfNecessary:(id)arg1;
- (void)_bumpChangeSeedForFirstPortWithMediaType:(id)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_resetPortraitLightingEffectStrength;
- (void)_resetSimulatedAperture;
- (void)_resetVideoMinFrameDurationOverride;
- (void)_sourceFormatDidChange:(struct opaqueCMFormatDescription { }*)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (long long)audioCaptureMode;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (id)description;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)device;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (id)init;
- (id)initWithDevice:(id)arg1 error:(id*)arg2;
- (bool)isAudioCaptureModeSupported:(long long)arg1;
- (bool)isBackgroundBlurAllowed;
- (bool)isBuiltInMicrophoneStereoAudioCaptureEnabled;
- (bool)isBuiltInMicrophoneStereoAudioCaptureSupported;
- (bool)isCameraCalibrationDataDeliveryEnabled;
- (bool)isCenterStageAllowed;
- (bool)isMaxGainOverrideSupported;
- (bool)isStudioLightingAllowed;
- (bool)isVisionDataDeliveryEnabled;
- (float)maxGainOverride;
- (id)multiCamPorts;
- (id)notReadyError;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (float)portraitLightingEffectStrength;
- (id)ports;
- (id)portsWithMediaType:(id)arg1 sourceDeviceType:(id)arg2 sourceDevicePosition:(long long)arg3;
- (bool)reactionEffectsAllowed;
- (void)setAudioCaptureMode:(long long)arg1;
- (void)setBackgroundBlurAllowed:(bool)arg1;
- (void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(bool)arg1;
- (void)setCameraCalibrationDataDeliveryEnabled:(bool)arg1;
- (void)setCenterStageAllowed:(bool)arg1;
- (void)setMaxGainOverride:(float)arg1;
- (void)setPortraitLightingEffectStrength:(float)arg1;
- (void)setReactionEffectsAllowed:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setSimulatedAperture:(float)arg1;
- (void)setStudioLightingAllowed:(bool)arg1;
- (void)setUnifiedAutoExposureDefaultsEnabled:(bool)arg1;
- (void)setVideoMinFrameDurationOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVisionDataDeliveryEnabled:(bool)arg1;
- (float)simulatedAperture;
- (bool)unifiedAutoExposureDefaultsEnabled;
- (id)videoDevice;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMinFrameDurationOverride;

@end
