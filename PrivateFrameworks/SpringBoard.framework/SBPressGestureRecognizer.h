
@interface SBPressGestureRecognizer : UIGestureRecognizer {
    NSSet * _delayablePressTypes;
    NSMutableArray * _delayedPressesInfo;
    long long  _internalGestureState;
    bool  _isDispatchingPresses;
    long long  _latestDispatchedPressPhase;
    double  _latestDispatchedPressTimestamp;
    long long  _latestDispatchedPressType;
    NSSet * _precedencePressTypes;
    double  _precedencePressesTime;
    NSMutableArray * _unbalancedPressBeganTypes;
    double  _waitForPreemptionTimeInterval;
    BSAbsoluteMachTimer * _waitingForPreemptionTimer;
    BSAbsoluteMachTimer * _waitingGestureStateExpirationTimer;
}

@property (nonatomic, retain) NSArray *pressTypesWithPrecedence;

- (void).cxx_destruct;
- (void)_addDelayedPress:(id)arg1;
- (id)_allowedPressTypes;
- (void)_applyGestureStateInfo:(id)arg1;
- (void)_cancelGesture;
- (long long)_delayedPressesCount;
- (bool)_didGestureBegin;
- (id)_gestureStateInfoForPressInfo:(id)arg1;
- (bool)_isDispatchingDelayedPresses;
- (bool)_isGestureFailedOrCancelled;
- (void)_processDelayablePresses:(id)arg1;
- (void)_processPrecedencePresses:(id)arg1;
- (void)_reallyStartDispatchingDelayedPresses;
- (void)_resetDelayedPresses;
- (void)_resetPublishedPressInfo;
- (void)_resetState;
- (bool)_shouldStopDispatching;
- (void)_startDispatchingDelayedPresses;
- (void)_stopWaitingGestureStateExpiration;
- (void)_updatePublicPressInfo:(id)arg1;
- (void)_updateUnbalancedPressBeganTypesWithCurrentPressType:(long long)arg1 andPhase:(long long)arg2 result:(long long*)arg3;
- (void)_waitGestureStateExpirationWithFireInterval:(double)arg1 timerExpiredActionBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)gestureStateInfoForUnbalancedPressBeganCount:(long long)arg1 previousCount:(long long)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (long long)latestPressPhase;
- (double)latestPressTimestamp;
- (long long)latestPressType;
- (id)name;
- (id)pressTypesWithPrecedence;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)processPresses:(id)arg1;
- (long long)requiredPressTypesCount;
- (void)reset;
- (void)setAllowedPressTypes:(id)arg1;
- (void)setPressTypesWithPrecedence:(id)arg1;
- (void)setWaitForPreemptionTimeInterval:(double)arg1;
- (double)waitForPreemptionTimeInterval;

@end
