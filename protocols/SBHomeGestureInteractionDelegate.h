
@protocol SBHomeGestureInteractionDelegate <SBSystemGestureRecognizerDelegate>

@required

- (unsigned long long)homeGestureInteraction:(SBHomeGestureInteraction *)arg1 systemGestureTypeForType:(long long)arg2;

@optional

- (SBHomeGesturePanGestureRecognizer *)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(SBHomeGestureInteraction *)arg1;
- (bool)homeGestureInteraction:(SBHomeGestureInteraction *)arg1 shouldBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer *)arg2;
- (bool)homeGestureInteraction:(SBHomeGestureInteraction *)arg1 shouldBeginGestureRecognizerOfType:(long long)arg2;
- (bool)homeGestureInteraction:(SBHomeGestureInteraction *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (bool)homeGestureInteraction:(SBHomeGestureInteraction *)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (bool)homeGestureInteraction:(SBHomeGestureInteraction *)arg1 shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)homeGestureInteractionBegan:(SBHomeGestureInteraction *)arg1;
- (void)homeGestureInteractionCancelled:(SBHomeGestureInteraction *)arg1;
- (void)homeGestureInteractionChanged:(SBHomeGestureInteraction *)arg1;
- (void)homeGestureInteractionEnded:(SBHomeGestureInteraction *)arg1;

@end
