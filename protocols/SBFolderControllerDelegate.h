
@protocol SBFolderControllerDelegate <SBFolderControllerDragDelegate, NSObject>

@required

- (Class)controllerClassForFolder:(SBFolder *)arg1;
- (bool)folderController:(SBFolderController *)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2;
- (void)folderControllerDidEndScrolling:(SBFolderController *)arg1;
- (void)folderControllerShouldBeginEditing:(SBFolderController *)arg1 withHaptic:(bool)arg2;
- (bool)folderControllerShouldClose:(SBFolderController *)arg1 withPinchGesture:(UIPinchGestureRecognizer *)arg2;
- (void)folderControllerShouldEndEditing:(SBFolderController *)arg1;
- (void)folderControllerWillBeginScrolling:(SBFolderController *)arg1;

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentOverlayInsetsFromParentIfAvailableForFolderController:(SBFolderController *)arg1;
- (<SBFolderControllerDragDelegate> *)draggingDelegateForFolderController:(SBFolderController *)arg1;
- (UIStatusBar *)fakeStatusBarForFolderController:(SBFolderController *)arg1;
- (UIColor *)folderController:(SBFolderController *)arg1 accessibilityTintColorForScreenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)folderController:(SBFolderController *)arg1 didBeginEditingTitle:(UITextField *)arg2;
- (void)folderController:(SBFolderController *)arg1 didEndEditingTitle:(UITextField *)arg2;
- (SBIconAnimator *)folderController:(SBFolderController *)arg1 iconAnimatorForOperation:(long long)arg2 onViewController:(SBNestingViewController *)arg3 animated:(bool)arg4 initialDelay:(double*)arg5;
- (void)folderController:(SBFolderController *)arg1 willCreateInnerFolderControllerWithConfiguration:(SBFolderControllerConfiguration *)arg2;
- (void)folderController:(SBFolderController *)arg1 willRemoveFakeStatusBar:(UIStatusBar *)arg2;
- (void)folderController:(SBFolderController *)arg1 willUseIconTransitionAnimator:(SBHomeScreenIconTransitionAnimator *)arg2 forOperation:(long long)arg3 onViewController:(SBNestingViewController *)arg4 animated:(bool)arg5;
- (void)folderControllerDidClose:(SBFolderController *)arg1;
- (void)folderControllerDidOpen:(SBFolderController *)arg1;
- (<BSInvalidatable> *)folderControllerWantsToHideStatusBar:(SBFolderController *)arg1 animated:(bool)arg2;
- (void)folderControllerWillClose:(SBFolderController *)arg1;
- (void)folderControllerWillOpen:(SBFolderController *)arg1;
- (double)minimumHomeScreenScaleForFolderController:(SBFolderController *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })statusBarEdgeInsetsForFolderController:(SBFolderController *)arg1;
- (UIStatusBarStyleRequest *)statusBarStyleRequestForFolderController:(SBFolderController *)arg1;

@end
