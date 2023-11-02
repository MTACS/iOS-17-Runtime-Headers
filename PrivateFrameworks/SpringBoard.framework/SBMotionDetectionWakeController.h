
@interface SBMotionDetectionWakeController : NSObject <AMMotionDetectionTriggerManagerObserver, SBBacklightControllerObserver> {
    SBBacklightController * _backlightController;
    <SBMotionDetectionWakeControllerDelegate> * _delegate;
    bool  _enabled;
    BSCompoundAssertion * _enablementAssertions;
    bool  _motionDetected;
    bool  _requested;
    bool  _requireScreenOff;
    AMMotionDetectionTriggerManager * _triggerManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBMotionDetectionWakeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_isEnabled, setter=_setEnabled:, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=isMotionDetected, setter=_setMotionDetected:, nonatomic) bool motionDetected;
@property (getter=_isRequested, setter=_setRequested:, nonatomic) bool requested;
@property (nonatomic) bool requireScreenOff;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_evaluateEnablement;
- (bool)_isEnabled;
- (bool)_isRequested;
- (void)_setEnabled:(bool)arg1;
- (void)_setMotionDetected:(bool)arg1;
- (void)_setRequested:(bool)arg1;
- (id)acquireMotionDetectionWakeAssertionForReason:(id)arg1;
- (void)backlightController:(id)arg1 didTransitionToBacklightState:(long long)arg2 source:(long long)arg3;
- (void)dealloc;
- (id)delegate;
- (bool)isMotionDetected;
- (void)motionDetectionManager:(id)arg1 didUpdateMotionDetectionTriggerState:(unsigned long long)arg2;
- (bool)requireScreenOff;
- (void)setDelegate:(id)arg1;
- (void)setRequireScreenOff:(bool)arg1;

@end
