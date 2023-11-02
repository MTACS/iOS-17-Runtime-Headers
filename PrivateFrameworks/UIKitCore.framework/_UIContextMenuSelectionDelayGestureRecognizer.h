
@interface _UIContextMenuSelectionDelayGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction * _delayedAction;
}

- (void).cxx_destruct;
- (void)_timerSatisfied;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
