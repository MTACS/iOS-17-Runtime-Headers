
@interface CSHomeButtonShowPasscodeRecognizer : NSObject <SBHomeButtonShowPasscodeRecognizer> {
    <SBHomeButtonShowPasscodeRecognizerDelegate> * _delegate;
    bool  _fingerHasLifted;
    bool  _fingerWasOnInitially;
    BSAbsoluteMachTimer * _minimumTimer;
    NSString * _simplePublicDescription;
    unsigned long long  _state;
    NSString * _terminalStateReasoning;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHomeButtonShowPasscodeRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateMinimumTimer;
- (void)_minimumTimerFired;
- (void)_reallySetState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)_simulateTimerFiring;
- (unsigned long long)_state;
- (void)_switchedFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (id)initWithFingerOn:(bool)arg1;
- (void)noteAuthenticated:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
