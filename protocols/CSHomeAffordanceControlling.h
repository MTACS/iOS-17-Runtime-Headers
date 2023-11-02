
@protocol CSHomeAffordanceControlling <NSObject>

@required

- (BSAnimationSettings *)hideHomeAffordanceAnimationSettings;
- (<PLKeyboardHomeAffordanceAssertion> *)keyboardAssertionForGestureWindow:(UIWindow *)arg1;
- (void)registerHomeGestureParticipant:(id <CSHomeGestureParticipating>)arg1 withIdentifier:(long long)arg2;
- (UIPanGestureRecognizer *)screenEdgePanGesture;
- (<UIViewSpringAnimationBehaviorDescribing> *)settleHomeAffordanceAnimationBehaviorDescription;
- (BSAnimationSettings *)unhideHomeAffordanceAnimationSettings;
- (void)unregisterHomeGestureParticipant:(id <CSHomeGestureParticipating>)arg1 withIdentifier:(long long)arg2;

@end
