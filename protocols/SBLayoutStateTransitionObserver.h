
@protocol SBLayoutStateTransitionObserver <NSObject>

@optional

- (void)layoutStateTransitionCoordinator:(SBLayoutStateTransitionCoordinator *)arg1 transitionDidBeginWithTransitionContext:(SBLayoutStateTransitionContext *)arg2;
- (void)layoutStateTransitionCoordinator:(SBLayoutStateTransitionCoordinator *)arg1 transitionDidEndWithTransitionContext:(SBLayoutStateTransitionContext *)arg2;
- (void)layoutStateTransitionCoordinator:(SBLayoutStateTransitionCoordinator *)arg1 transitionWillEndWithTransitionContext:(SBLayoutStateTransitionContext *)arg2;

@end
