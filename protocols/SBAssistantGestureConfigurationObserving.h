
@protocol SBAssistantGestureConfigurationObserving <NSObject>

@required

- (void)assistantGestureConfiguration:(SBAssistantGestureConfiguration *)arg1 didUpdateHomeAffordanceSuppression:(long long)arg2;
- (void)assistantGestureConfiguration:(SBAssistantGestureConfiguration *)arg1 didUpdateHomeGestureSharing:(bool)arg2;
- (void)assistantGestureConfiguration:(SBAssistantGestureConfiguration *)arg1 didUpdateShouldDismissForSwipesOutsideContent:(bool)arg2;
- (void)assistantGestureConfiguration:(SBAssistantGestureConfiguration *)arg1 didUpdateShouldDismissForTapsOutsideContent:(bool)arg2;
- (void)assistantGestureConfiguration:(SBAssistantGestureConfiguration *)arg1 didUpdateShouldPassTouchesThroughToSpringBoard:(bool)arg2;
- (void)assistantGestureConfiguration:(SBAssistantGestureConfiguration *)arg1 didUpdateShouldShowHomeAffordance:(bool)arg2;

@end
