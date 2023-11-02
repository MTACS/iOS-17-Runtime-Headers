
@interface SBHIDValueModifyingButtonSetArbiter : NSObject <SBHIDButtonStateDelegate> {
    NSDictionary * _buttonToUsageDictionary;
    SBHIDButtonStateArbiter * _currentDownButton;
    <SBHIDValueModifyingButtonSetArbiterDelegate> * _delegate;
    double  _initialRepeatDelay;
    double  _subsequentRepeatDelay;
    BSAbsoluteMachTimer * _timer;
    NSDictionary * _usageToButtonDictionary;
}

@property (nonatomic) <SBHIDValueModifyingButtonSetArbiterDelegate> *delegate;
@property (nonatomic) double initialRepeatDelay;
@property (nonatomic) double subsequentRepeatDelay;

- (void).cxx_destruct;
- (void)_fireRepeatingActionTimer;
- (void)_invalidateRepeatingActionTimer;
- (void)_performActionForButton:(id)arg1;
- (void)_startRepeatingActionTimer;
- (void)dealloc;
- (id)delegate;
- (id)initWithHIDKeyPressEventUsages:(id)arg1 initialRepeatDelay:(double)arg2 subsequentRepeatDelay:(double)arg3;
- (double)initialRepeatDelay;
- (void)performActionsForButtonDown:(id)arg1;
- (void)performActionsForButtonLongPress:(id)arg1;
- (void)performActionsForButtonUp:(id)arg1;
- (bool)processKeyboardEvent:(struct __IOHIDEvent { }*)arg1;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setInitialRepeatDelay:(double)arg1;
- (void)setSubsequentRepeatDelay:(double)arg1;
- (double)subsequentRepeatDelay;

@end
