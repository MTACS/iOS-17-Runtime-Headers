
@interface _UIFocusMovementPressGestureRecognizer : UIGestureRecognizer <_UIRepeatingGestureClockDelegate> {
    unsigned long long  _focusHeading;
    long long  _repeatCount;
    _UIRepeatingGestureClock * _repeatingClock;
    bool  _shouldRepeat;
    NSMutableOrderedSet * _trackedPresses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long focusHeading;
@property (readonly) unsigned long long hash;
@property (getter=_isRecognizing, nonatomic, readonly) bool isRecognizing;
@property (nonatomic) long long repeatCount;
@property (nonatomic, retain) _UIRepeatingGestureClock *repeatingClock;
@property (nonatomic) bool shouldRepeat;
@property (readonly) Class superclass;
@property (getter=_trackedPresses, setter=_setTrackedPresses:, nonatomic, retain) NSMutableOrderedSet *trackedPresses;

- (void).cxx_destruct;
- (bool)_isRecognizing;
- (void)_setTrackedPresses:(id)arg1;
- (void)_startTrackingPresses:(id)arg1;
- (void)_stopTrackingPresses:(id)arg1;
- (id)_trackedPresses;
- (void)_updateForPresses:(id)arg1 action:(unsigned long long)arg2;
- (void)_verifyTrackingPresses:(id)arg1;
- (void)configureDefaults;
- (unsigned long long)focusHeading;
- (unsigned long long)focusHeadingForPresses:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (long long)repeatCount;
- (id)repeatingClock;
- (void)repeatingGestureClockDidTick:(id)arg1;
- (void)reset;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setFocusHeading:(unsigned long long)arg1;
- (void)setFocusHeading:(unsigned long long)arg1 omitStateUpdate:(bool)arg2;
- (void)setRepeatCount:(long long)arg1;
- (void)setRepeatingClock:(id)arg1;
- (void)setShouldRepeat:(bool)arg1;
- (bool)shouldReceiveEvent:(id)arg1;
- (bool)shouldRepeat;

@end
