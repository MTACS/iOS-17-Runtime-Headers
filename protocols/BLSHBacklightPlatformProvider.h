
@protocol BLSHBacklightPlatformProvider <NSObject>

@required

- (void)addObserver:(id <BLSHBacklightPlatformProviderObserver>)arg1;
- (double)backlightFadeInDuration;
- (double)backlightFadeOutDuration;
- (bool)isShowingBlankingWindow;
- (void)removeObserver:(id <BLSHBacklightPlatformProviderObserver>)arg1;
- (<BLSHBacklightEnvironmentSessionProviding> *)sessionProvider;
- (void)showBlankingWindow:(bool)arg1 withFadeDuration:(double)arg2;

@optional

- (float)backlightDimmedFactor;
- (double)backlightDimmingDuration;
- (BLSHFlipbookSpecification *)flipbookSpecification;
- (<BLSHFlipbookTelemetry> *)flipbookTelemetryDelegate;
- (bool)isAlwaysOnEnabled;
- (bool)isUsingAlwaysOnBrightnessCurve;
- (bool)suppressionSupported;
- (void)useAlwaysOnBrightnessCurve:(bool)arg1 withRampDuration:(double)arg2;

@end
