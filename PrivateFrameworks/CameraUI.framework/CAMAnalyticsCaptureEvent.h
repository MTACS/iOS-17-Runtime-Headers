
@interface CAMAnalyticsCaptureEvent : CAMAnalyticsEvent {
    long long  __captureDevice;
    long long  __captureDevicePosition;
    long long  __captureMode;
    long long  __captureVideoConfiguration;
    long long  __colorSpace;
    bool  __isStillDuringVideo;
    long long  __lightingEffectType;
    long long  __mediaType;
    bool  __outputToExternalStorage;
    long long  __videoStabilizationStrength;
}

@property (nonatomic, readonly) long long _captureDevice;
@property (nonatomic, readonly) long long _captureDevicePosition;
@property (nonatomic, readonly) long long _captureMode;
@property (nonatomic, readonly) long long _captureVideoConfiguration;
@property (nonatomic, readonly) long long _colorSpace;
@property (nonatomic) bool _isStillDuringVideo;
@property (nonatomic) long long _lightingEffectType;
@property (nonatomic) long long _mediaType;
@property (nonatomic) bool _outputToExternalStorage;
@property (nonatomic, readonly) long long _videoStabilizationStrength;

- (long long)_captureDevice;
- (long long)_captureDevicePosition;
- (long long)_captureMode;
- (long long)_captureVideoConfiguration;
- (long long)_colorSpace;
- (id)_defaultRangeStringForValue:(float)arg1 lowerBound:(float)arg2 upperBound:(float)arg3 defaultValue:(float)arg4;
- (bool)_isStillDuringVideo;
- (long long)_lightingEffectType;
- (long long)_mediaType;
- (bool)_outputToExternalStorage;
- (void)_populateFromCaptureRequest:(id)arg1;
- (long long)_videoStabilizationStrength;
- (id)_zoomRangeStringForDisplayZoomValue:(double)arg1 zoomPoints:(id)arg2 mode:(long long)arg3 device:(long long)arg4;
- (id)eventName;
- (id)initWithEvent:(id)arg1;
- (id)initWithGraphConfiguration:(id)arg1 outputToExternalStorage:(bool)arg2;
- (void)populateAEAFLocked:(bool)arg1;
- (void)populateBurstLength:(long long)arg1;
- (void)populateDesiredFlashMode:(long long)arg1 desiredLivePhotoMode:(long long)arg2 desiredHDRMode:(long long)arg3 timerDuration:(long long)arg4;
- (void)populateDesiredMacroMode:(long long)arg1 isMacroCapture:(bool)arg2 isMacroSuggested:(bool)arg3;
- (void)populateDesiredNightModeControlMode:(unsigned long long)arg1 resolvedNightModeControlMode:(unsigned long long)arg2 resolvedNightModeMode:(long long)arg3 nightModeStatus:(long long)arg4;
- (void)populateDesiredTorchMode:(long long)arg1;
- (void)populateDeviceOrientation:(long long)arg1 isDeviceOrientationLocked:(bool)arg2;
- (void)populateDuration:(double)arg1;
- (void)populateExposureSliderBias:(float)arg1 exposureTapAndBias:(float)arg2 totalExposureBias:(float)arg3;
- (void)populateForTimelapseCaptureOrientation:(long long)arg1 captureMirrored:(bool)arg2 origin:(long long)arg3 pressType:(long long)arg4 startDate:(id)arg5;
- (void)populateFromPanoramaCaptureNotification:(long long)arg1;
- (void)populateFromPanoramaCaptureRequest:(id)arg1;
- (void)populateFromStillImageCaptureRequest:(id)arg1 burst:(bool)arg2 preferences:(id)arg3;
- (void)populateFromStillImageCaptureResponse:(id)arg1;
- (void)populateFromVideoCaptureRequest:(id)arg1 preferences:(id)arg2;
- (void)populateFromVideoCaptureResponse:(id)arg1;
- (void)populateObjectResultsWithNumberOfFaces:(unsigned long long)arg1 numberOfCats:(unsigned long long)arg2 numberOfDogs:(unsigned long long)arg3;
- (void)populatePanoramaDirection:(long long)arg1;
- (void)populatePanoramaInstruction:(long long)arg1;
- (void)populatePortraitStatus:(long long)arg1 lightingEffectIntensity:(double)arg2 apertureValue:(double)arg3 zoomFactor:(double)arg4 isDepthSuggestionAllowed:(bool)arg5 request:(id)arg6;
- (void)populateSharedLibraryMode:(long long)arg1;
- (void)populateZoomFromDisplayZoomValue:(double)arg1 zoomPoints:(id)arg2 zoomInteractionType:(long long)arg3;
- (void)populateZoomFromZoomButtonSymbol:(long long)arg1 zoomInteractionType:(long long)arg2;
- (void)set_isStillDuringVideo:(bool)arg1;
- (void)set_lightingEffectType:(long long)arg1;
- (void)set_mediaType:(long long)arg1;
- (void)set_outputToExternalStorage:(bool)arg1;

@end
