
@interface SBDoubleClickSleepWakeHardwareButtonInteraction : SBSleepWakeHardwareButtonInteraction {
    <BSInvalidatable> * _proxLockAssertion;
    SBProximitySensorManager * _proximitySensorManager;
}

@property (nonatomic, retain) <BSInvalidatable> *proxLockAssertion;
@property (nonatomic, retain) SBProximitySensorManager *proximitySensorManager;

- (void).cxx_destruct;
- (void)_cancelPreviousResumeProxRequests;
- (void)_performSleep;
- (void)_performWake;
- (void)_resumeProxAfterMultiplePressIntervalForReason:(id)arg1;
- (void)_resumeProxForReason:(id)arg1;
- (void)_suspendProx;
- (bool)consumeInitialPressDown;
- (bool)consumeInitialPressUp;
- (bool)consumeSecondPressDown;
- (id)initWithProximitySensorManager:(id)arg1;
- (void)observeFinalPressUp;
- (void)observeSinglePressDidFail;
- (id)proxLockAssertion;
- (id)proximitySensorManager;
- (void)setProxLockAssertion:(id)arg1;
- (void)setProximitySensorManager:(id)arg1;

@end
