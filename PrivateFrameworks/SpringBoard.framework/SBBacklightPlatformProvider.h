
@interface SBBacklightPlatformProvider : NSObject <BLSHBacklightPlatformProvider, BLSHFlipbookTelemetry, SBBacklightSignificantUserInteractionMonitorObserver> {
    SBAlwaysOnDefaults * _alwaysOnDefaults;
    SBAlwaysOnPolicyCoordinator * _alwaysOnPolicyCoordinator;
    SBAveragePixelLuminanceLimitController * _aplLimitController;
    SBBacklightBlankingWindow * _blankingWindow;
    SBAlwaysOnBrightnessCurveController * _brightnessCurveController;
    BLSHFlipbookSpecification * _flipbookSpecification;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_alwaysOnEnabled;
    NSHashTable * _lock_alwaysOnObservers;
    bool  _lock_showingBlankingWindow;
    SBBacklightEnvironmentSessionProvider * _sessionProvider;
    SBBacklightSignificantUserInteractionMonitor * _significantUserInteractionMonitor;
    <BLSHFlipbookTelemetry> * _telemetryEmitter;
    SBFWakeAnimationSettings * _wakeAnimationSettings;
    UIWindowScene * _windowScene;
}

@property (getter=isAlwaysOnEnabled, nonatomic, readonly) bool alwaysOnEnabled;
@property (nonatomic, readonly) SBAlwaysOnPolicyCoordinator *alwaysOnPolicyCoordinator;
@property (nonatomic, readonly) float backlightDimmedFactor;
@property (nonatomic, readonly) double backlightDimmingDuration;
@property (nonatomic, readonly) double backlightFadeInDuration;
@property (nonatomic, readonly) double backlightFadeOutDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BLSHFlipbookSpecification *flipbookSpecification;
@property (nonatomic, readonly) <BLSHFlipbookTelemetry> *flipbookTelemetryDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BLSHBacklightEnvironmentSessionProviding> *sessionProvider;
@property (getter=isShowingBlankingWindow, nonatomic, readonly) bool showingBlankingWindow;
@property (nonatomic, retain) SBBacklightSignificantUserInteractionMonitor *significantUserInteractionMonitor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressionSupported;
@property (getter=isUsingAlwaysOnBrightnessCurve, nonatomic, readonly) bool useAlwaysOnBrightnessCurve;
@property (nonatomic) UIWindowScene *windowScene;

+ (bool)deviceSupportsAlwaysOn;

- (void).cxx_destruct;
- (void)_notifyObserversOfSignificantUserInteraction;
- (void)_setBlankingWindowVisible:(bool)arg1 fadeDuration:(double)arg2;
- (void)_updateAlwaysOnEnabled;
- (void)addObserver:(id)arg1;
- (id)alwaysOnPolicyCoordinator;
- (float)backlightDimmedFactor;
- (double)backlightDimmingDuration;
- (double)backlightFadeInDuration;
- (double)backlightFadeOutDuration;
- (void)completeInitializationAfterBLSStartup;
- (void)criticalAssertDidFail:(id)arg1 resetFailure:(id /* block */)arg2;
- (id)flipbookSpecification;
- (id)flipbookTelemetryDelegate;
- (id)init;
- (id)initWithBacklightEnvironmentSessionProvider:(id)arg1;
- (bool)isAlwaysOnEnabled;
- (bool)isShowingBlankingWindow;
- (bool)isUsingAlwaysOnBrightnessCurve;
- (void)logTelemetryForInvalidation:(id)arg1;
- (void)logTelemetryForRenderSession:(id)arg1;
- (void)logTelemetryForRequestDates:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)sessionProvider;
- (void)setSignificantUserInteractionMonitor:(id)arg1;
- (void)setWindowScene:(id)arg1;
- (void)showBlankingWindow:(bool)arg1 withFadeDuration:(double)arg2;
- (id)significantUserInteractionMonitor;
- (void)significantUserInteractionMonitorDetectedSignificantUserInteraction:(id)arg1;
- (bool)suppressionSupported;
- (void)useAlwaysOnBrightnessCurve:(bool)arg1 withRampDuration:(double)arg2;
- (id)windowScene;

@end
