
@interface SBAlwaysOnTelemetryEmitter : NSObject <BLSBacklightStateObserving, BLSHAssertionServiceObserving, BLSHBacklightHostTelemetryDelegate, BLSHFlipbookTelemetry, SBBacklightEnvironmentSessionProviderObserver> {
    SBAlwaysOnDefaults * _alwaysOnDefaults;
    <BSDefaultObserver> * _alwaysOnDefaultsObserverToken;
    SBAlwaysOnPolicyCoordinator * _alwaysOnPolicyCoordinator;
    BLSBacklight * _backlight;
    SBBacklightEnvironmentSessionProvider * _backlightEnvironmentSessionProvider;
    NSObject<OS_dispatch_queue> * _biomeWriterQueue;
    NSDictionary * _lastAlwaysOnEnabledPayload;
    BMDisplayAlwaysOn * _lastBiomeEvent;
    NSObject<OS_dispatch_queue> * _metricsQueue;
    NSTimer * _mq_deferredLoggingTimer;
    SBAlwaysOnTelemetryMetrics * _mq_metrics;
    NSObject<OS_dispatch_queue> * _powerlogSendQueue;
}

@property (nonatomic) SBAlwaysOnPolicyCoordinator *alwaysOnPolicyCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (void)_significantTimeChange:(id)arg1;
- (id)alwaysOnPolicyCoordinator;
- (void)backlight:(id)arg1 didChangeAlwaysOnEnabled:(bool)arg2;
- (void)backlightEnvironmentSessionsProvider:(id)arg1 didUpdatePresentation:(id)arg2 withBundleIdentifiers:(id)arg3;
- (void)backlightTelemetrySource:(id)arg1 didAcquireSystemActivityWithError:(id)arg2 isActive:(bool)arg3 details:(id)arg4 forEvent:(id)arg5;
- (void)backlightTelemetrySource:(id)arg1 didCompleteUpdateToFlipbookState:(long long)arg2 forEvent:(id)arg3;
- (void)backlightTelemetrySource:(id)arg1 didCompleteUpdateToState:(long long)arg2 forEvent:(id)arg3;
- (void)backlightTelemetrySource:(id)arg1 didUpdateDisplayForState:(long long)arg2 forEvent:(id)arg3;
- (void)backlightTelemetrySource:(id)arg1 didUpdateVisualContentsToBeginTransitionToState:(long long)arg2 forEvent:(id)arg3;
- (void)backlightTelemetrySource:(id)arg1 hadExistingSystemActivityForEvent:(id)arg2;
- (void)backlightTelemetrySource:(id)arg1 willTransitionToState:(long long)arg2 forEvent:(id)arg3;
- (void)backlightTelemetrySource:(id)arg1 willUpdateDisplayForState:(long long)arg2 forEvent:(id)arg3;
- (void)completeIntializationAfterBLSStartup;
- (void)dealloc;
- (id)init;
- (id)initWithBacklightEnvironmentSessionProvider:(id)arg1;
- (void)logTelemetryForInvalidation:(id)arg1;
- (void)logTelemetryForRenderSession:(id)arg1;
- (void)logTelemetryForRequestDates:(id)arg1;
- (void)service:(id)arg1 didAcquireAssertion:(id)arg2;
- (void)service:(id)arg1 didCancelAssertion:(id)arg2 withError:(id)arg3;
- (void)service:(id)arg1 didPauseAssertion:(id)arg2;
- (void)service:(id)arg1 didResumeAssertion:(id)arg2;
- (void)setAlwaysOnPolicyCoordinator:(id)arg1;

@end
