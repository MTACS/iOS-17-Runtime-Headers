
@protocol SBFolderPresentingViewControllerDelegate <NSObject>

@optional

- (<UIViewControllerAnimatedTransitioning> *)folderPresentationController:(SBFolderPresentingViewController *)arg1 animationControllerForTransitionWithFolder:(SBFolderController *)arg2 presenting:(bool)arg3 animated:(bool)arg4;
- (<UIViewControllerInteractiveTransitioning> *)folderPresentationController:(SBFolderPresentingViewController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;
- (UIView *)folderPresentationController:(SBFolderPresentingViewController *)arg1 sourceViewForPresentingViewController:(SBNestingViewController *)arg2;
- (void)folderPresentationController:(SBFolderPresentingViewController *)arg1 willPerformTransitionWithFolder:(SBFolderController *)arg2 presenting:(bool)arg3 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg4;
- (double)minimumHomeScreenScaleForFolderPresentationController:(SBFolderPresentingViewController *)arg1;

@end
