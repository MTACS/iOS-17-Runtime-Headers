
@interface _UIRepeatingGestureClock : NSObject {
    unsigned long long  _delayIndex;
    <_UIRepeatingGestureClockDelegate> * _delegate;
    bool  _timerOn;
}

@property (nonatomic) <_UIRepeatingGestureClockDelegate> *delegate;

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_createTick:(id)arg1;
- (void)_performTick:(id)arg1;
- (void)_scheduleTimer;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)startClock;
- (void)stopClock;

@end
