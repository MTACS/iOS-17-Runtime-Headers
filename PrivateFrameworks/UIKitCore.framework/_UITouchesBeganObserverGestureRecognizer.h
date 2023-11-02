
@interface _UITouchesBeganObserverGestureRecognizer : UIGestureRecognizer

- (bool)_affectedByGesture:(id)arg1;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (bool)shouldReceiveEvent:(id)arg1;
- (bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
