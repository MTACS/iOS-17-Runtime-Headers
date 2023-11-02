
@protocol SBFloatingDockRootViewControllerDelegate <NSObject>

@required

- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 didChangeToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 floatingDockWantsToBePresented:(bool)arg2;
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 willChangeToHeight:(double)arg2 interactive:(bool)arg3;

@optional

- (<BSInvalidatable> *)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 acquireOrderFloatingDockContainerBeforeLibraryAssertionForReason:(NSString *)arg2;
- (void)floatingDockRootViewController:(void *)arg1 modifyProgress:(void *)arg2 interactive:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: SBFloatingDockRootViewController *, double, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 willPerformTransitionWithFolder:(SBFolderController *)arg2 presenting:(bool)arg3 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg4;
- (void)floatingDockRootViewControllerDidEndPresentationTransition:(SBFloatingDockRootViewController *)arg1;
- (bool)floatingDockRootViewControllerShouldHandlePanGestureRecognizer:(SBFloatingDockRootViewController *)arg1;
- (UIViewController *)foregroundLibraryContainerViewControllerForFloatingDockRootViewController:(SBFloatingDockRootViewController *)arg1;
- (bool)isDefaultLibraryContainerViewControllerForegroundForFloatingDockRootViewController:(SBFloatingDockRootViewController *)arg1;
- (UIViewController *)libraryContainerViewControllerForFloatingDockRootViewController:(SBFloatingDockRootViewController *)arg1;
- (double)minimumHomeScreenScaleForFloatingDockRootViewController:(SBFloatingDockRootViewController *)arg1;

@end
