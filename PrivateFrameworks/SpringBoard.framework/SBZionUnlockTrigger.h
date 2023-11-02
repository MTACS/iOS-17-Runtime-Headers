
@interface SBZionUnlockTrigger : SBMesaUnlockTrigger {
    <SBBiometricUnlockBehaviorConfigurationDelegate> * _behaviorConfigurationDelegate;
    bool  _fingerOffSinceWake;
    bool  _fingerOn;
    bool  _hasVisibleContentToReveal;
    BSAbsoluteMachTimer * _minTouchIDTimer;
    BSAbsoluteMachTimer * _restToOpenTimer;
}

- (void).cxx_destruct;
- (void)_cancelMinTouchIDTimer;
- (void)_cancelRestToOpenTimer;
- (void)_evaluateRestToOpenTimer;
- (bool)_isRestToOpenAvailable;
- (void)_startRestToOpenTimer;
- (void)_startRestToOpenTimerWithDuration:(double)arg1;
- (bool)bioUnlock;
- (void)dealloc;
- (id)description;
- (void)fingerOff;
- (void)fingerOn;
- (id)initWithUnlockBehaviorConfigurationDelegate:(id)arg1;
- (void)lockButtonDown;
- (void)screenOff;
- (void)screenOn;
- (id)succinctDescriptionBuilder;

@end
