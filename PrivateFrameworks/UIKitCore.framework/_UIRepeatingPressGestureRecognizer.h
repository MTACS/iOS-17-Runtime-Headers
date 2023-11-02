
@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer <_UIRepeatingGestureClockDelegate> {
    unsigned long long  _changeCount;
    _UIRepeatingGestureClock * _clock;
    double  _force;
    unsigned long long  _numberOfTouchesRequired;
}

@property (setter=_setButtonType:, nonatomic) long long _buttonType;
@property (nonatomic, readonly) double _force;
@property (nonatomic) unsigned long long changeCount;
@property (nonatomic, retain) _UIRepeatingGestureClock *clock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_buttonType;
- (double)_force;
- (bool)_isGestureType:(long long)arg1;
- (void)_resetGestureRecognizer;
- (void)_setButtonType:(long long)arg1;
- (bool)_shouldReceivePress:(id)arg1;
- (unsigned long long)changeCount;
- (id)clock;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (unsigned long long)numberOfTouchesRequired;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)repeatingGestureClockDidTick:(id)arg1;
- (void)setChangeCount:(unsigned long long)arg1;
- (void)setClock:(id)arg1;
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;
- (void)setView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
