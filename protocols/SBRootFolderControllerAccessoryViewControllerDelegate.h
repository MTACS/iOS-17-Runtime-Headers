
@protocol SBRootFolderControllerAccessoryViewControllerDelegate

@required

- (SBViewControllerTransitionContext *)rootFolderController:(SBRootFolderController *)arg1 transitionContextForTransitioningToState:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4;
- (void)rootFolderController:(SBRootFolderController *)arg1 transitionDidFinish:(SBViewControllerTransitionContext *)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 transitionWillBegin:(SBViewControllerTransitionContext *)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 transitionWillFinish:(SBViewControllerTransitionContext *)arg2;
- (void)rootFolderController:(SBRootFolderController *)arg1 transitionWillReverse:(SBViewControllerTransitionContext *)arg2;

@end
