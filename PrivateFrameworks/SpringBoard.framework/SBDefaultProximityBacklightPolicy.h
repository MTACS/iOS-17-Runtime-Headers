
@interface SBDefaultProximityBacklightPolicy : NSObject <SBProximityBacklightPolicy> {
    SBBacklightController * _backlightController;
    <BSInvalidatable> * _idleTimerDisableAssertion;
    SBIdleTimerGlobalCoordinator * _idleTimerGlobalCoordinator;
    bool  _scheduled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBIdleTimerGlobalCoordinator *idleTimerGlobalCoordinator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_backlightWillUndim:(id)arg1;
- (void)_cancelScheduledBacklightFactorToZero;
- (void)_restoreBacklightFactor;
- (void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)arg1;
- (void)_scheduleBacklightFactorToZeroAfterDefaultDuration;
- (void)_turnBacklightOff;
- (void)dealloc;
- (id)idleTimerGlobalCoordinator;
- (id)initWithConfiguration:(id)arg1;
- (void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(bool)arg2;
- (void)setIdleTimerGlobalCoordinator:(id)arg1;
- (void)windowSceneDidConnect:(id)arg1;

@end
