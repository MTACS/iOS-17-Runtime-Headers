
@interface BLSHLocalOnlySimplePlatformProvider : NSObject <BLSHBacklightEnvironmentSessionProviding, BLSHBacklightPlatformProvider, BLSHServicePlatformProvider> {
    float  _backlightDimmedFactor;
    double  _backlightDimmingDuration;
    double  _backlightFadeInDuration;
    double  _backlightFadeOutDuration;
}

@property (getter=isAlwaysOnEnabled, nonatomic, readonly) bool alwaysOnEnabled;
@property (nonatomic, readonly) float backlightDimmedFactor;
@property (nonatomic, readonly) double backlightDimmingDuration;
@property (nonatomic, readonly) double backlightFadeInDuration;
@property (nonatomic, readonly) double backlightFadeOutDuration;
@property (nonatomic, readonly) <BLSHBacklightPlatformProvider> *backlightPlatformProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BLSHFlipbookSpecification *flipbookSpecification;
@property (nonatomic, readonly) <BLSHFlipbookTelemetry> *flipbookTelemetryDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BLSHBacklightEnvironmentSessionProviding> *sessionProvider;
@property (getter=isShowingBlankingWindow, nonatomic, readonly) bool showingBlankingWindow;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressionSupported;
@property (getter=isUsingAlwaysOnBrightnessCurve, nonatomic, readonly) bool useAlwaysOnBrightnessCurve;

- (void)addObserver:(id)arg1;
- (float)backlightDimmedFactor;
- (double)backlightDimmingDuration;
- (double)backlightFadeInDuration;
- (double)backlightFadeOutDuration;
- (id)backlightPlatformProvider;
- (id)createInactiveEnvironmentSession;
- (id)initWithConfiguration:(id)arg1;
- (bool)isShowingBlankingWindow;
- (void)removeObserver:(id)arg1;
- (id)sessionProvider;
- (void)showBlankingWindow:(bool)arg1 withFadeDuration:(double)arg2;

@end
