
@protocol SBHomeScreenIconTransitionAnimatorDelegate <NSObject>

@required

- (SBHIconAnimationSettings *)animator:(SBHomeScreenIconTransitionAnimator *)arg1 animationSettingsForOperation:(unsigned long long)arg2 childViewController:(SBNestingViewController *)arg3;

@optional

- (bool)animator:(void *)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(void *)arg2; // needs 2 arg types, found 6: SBHomeScreenIconTransitionAnimator *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
