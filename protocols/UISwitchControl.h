
@protocol UISwitchControl

@required

- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1;
- (void)visualElement:(UISwitchVisualElement *)arg1 transitionedToOn:(bool)arg2;
- (void)visualElementHadTouchUpInside:(UISwitchVisualElement *)arg1;

@end
