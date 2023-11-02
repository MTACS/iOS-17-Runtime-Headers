
@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer {
    NSObject<OS_dispatch_source> * _delayTimeoutTimer;
    double  _lastTouchTime;
    unsigned char  _systemGestureGateType;
    unsigned int  _systemGesturesRecognitionPossible;
    unsigned int  _waitingForSystemGestureStateNotification;
}

+ (bool)_shouldDefaultToTouches;

- (void).cxx_destruct;
- (void)_cancelTimeoutTimerIfNeeded;
- (id)_gateGestureTypeString;
- (void)_notifyWindowNoLongerAwaitingSystemGestureNotification:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)_systemGestureStateChanged:(id)arg1;
- (void)_timeOut;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithWindow:(id)arg1 type:(unsigned char)arg2;
- (void)setDelaysTouchesBegan:(bool)arg1;
- (void)setDelaysTouchesEnded:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
