
@interface _UIInterruptScrollDecelerationGestureRecognizer : UIGestureRecognizer <_UIHoverEventRespondable, _UIScrollEventRespondable> {
    UIHoverEvent * _currentHoverEvent;
    long long  _previousTrackpadFingerDownCount;
    long long  _trackpadFingerDownCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_affectedByGesture:(id)arg1;
- (void)_hoverCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_hoverEntered:(id)arg1 withEvent:(id)arg2;
- (void)_hoverExited:(id)arg1 withEvent:(id)arg2;
- (void)_hoverMoved:(id)arg1 withEvent:(id)arg2;
- (void)_scrollingChangedWithEvent:(id)arg1;
- (bool)_shouldReceivePress:(id)arg1;
- (bool)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;

@end
