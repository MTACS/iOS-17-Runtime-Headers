
@protocol SBSwitcherAnimatedTransitioning <NSObject>

@required

- (bool)canInterruptActiveTransition;
- (BSAnimationSettings *)defaultTransitionAnimationSettings;
- (void)performTransitionWithContext:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SBWorkspaceApplicationSceneTransitionContext *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
