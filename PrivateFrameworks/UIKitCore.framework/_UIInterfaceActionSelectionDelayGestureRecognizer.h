
@interface _UIInterfaceActionSelectionDelayGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction * _delayedAction;
}

@property (nonatomic, readonly) UIDelayedAction *delayedAction;

- (void).cxx_destruct;
- (void)_timerSatisfied;
- (id)delayedAction;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
