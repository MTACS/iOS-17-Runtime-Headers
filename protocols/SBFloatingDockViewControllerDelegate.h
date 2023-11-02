
@protocol SBFloatingDockViewControllerDelegate <NSObject>

@required

- (<BSInvalidatable> *)floatingDockViewController:(SBFloatingDockViewController *)arg1 acquireOrderFloatingDockContainerBeforeLibraryAssertionForReason:(NSString *)arg2;
- (void)floatingDockViewController:(SBFloatingDockViewController *)arg1 didChangeContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)floatingDockViewController:(SBFloatingDockViewController *)arg1 didChangeContentHeight:(double)arg2;
- (void)floatingDockViewController:(SBFloatingDockViewController *)arg1 wantsToBePresented:(bool)arg2;
- (void)floatingDockViewController:(SBFloatingDockViewController *)arg1 willPerformTransitionWithFolder:(SBFolderController *)arg2 presenting:(bool)arg3 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg4;
- (void)floatingDockViewController:(SBFloatingDockViewController *)arg1 willUseAnimator:(id <UIViewControllerAnimatedTransitioning>)arg2 forTransitioningWithFolder:(SBFolderController *)arg3 presenting:(bool)arg4;
- (UIViewController *)foregroundLibraryContainerViewControllerForFloatingDockViewController:(SBFloatingDockViewController *)arg1;
- (bool)isDefaultLibraryContainerViewControllerForegroundForFloatingDockViewController:(SBFloatingDockViewController *)arg1;
- (bool)isFloatingDockViewControllerPresentedOnExternalDisplay:(SBFloatingDockViewController *)arg1;
- (bool)isFloatingDockViewControllerPresentedOverApplication:(SBFloatingDockViewController *)arg1;
- (bool)isFloatingDockViewControllerPresentedOverTransitioningAppToAppContent:(SBFloatingDockViewController *)arg1;
- (bool)isFloatingDockViewControllerPresentedOverTransitioningSwitcherContent:(SBFloatingDockViewController *)arg1;
- (UIViewController *)libraryContainerViewControllerForFloatingDockViewController:(SBFloatingDockViewController *)arg1;
- (double)minimumHomeScreenScaleForFloatingDockViewController:(SBFloatingDockViewController *)arg1;

@end
