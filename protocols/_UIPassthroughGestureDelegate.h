
@protocol _UIPassthroughGestureDelegate <UIGestureRecognizerDelegateInternal>

@required

- (bool)_passthroughGestureRecognizer:(UIGestureRecognizer *)arg1 shouldInteractAtLocation:(struct CGPoint { double x1; double x2; })arg2 withEvent:(UIEvent *)arg3;
- (bool)configuredForInactiveInteractionEventsOnly;
- (void)setConfiguredForInactiveInteractionEventsOnly:(bool)arg1;

@end
