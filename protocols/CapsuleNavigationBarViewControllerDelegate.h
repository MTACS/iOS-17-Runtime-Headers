
@protocol CapsuleNavigationBarViewControllerDelegate <NSObject>

@optional

- (void)capsuleNavigationBarViewController:(CapsuleNavigationBarViewController *)arg1 didCreateNavigationBar:(SFCapsuleNavigationBar *)arg2;
- (void)capsuleNavigationBarViewController:(CapsuleNavigationBarViewController *)arg1 selectedItemWillChangeToState:(long long)arg2 options:(long long)arg3 coordinator:(id <SFTransitionCoordinating>)arg4;
- (bool)capsuleNavigationBarViewController:(CapsuleNavigationBarViewController *)arg1 shouldUnminimizeOnScrollForScrollView:(UIScrollView *)arg2;
- (bool)capsuleNavigationBarViewControllerAllowsMinimizationGesture:(CapsuleNavigationBarViewController *)arg1;
- (void)capsuleNavigationBarViewControllerDidChangeCapsuleFocus:(CapsuleNavigationBarViewController *)arg1 options:(long long)arg2;
- (void)capsuleNavigationBarViewControllerDidTapVoiceSearch:(CapsuleNavigationBarViewController *)arg1;
- (bool)capsuleNavigationBarViewControllerIsShowingFindOnPage:(CapsuleNavigationBarViewController *)arg1;
- (bool)capsuleNavigationBarViewControllerIsTrackingDropSession:(CapsuleNavigationBarViewController *)arg1;
- (void)capsuleNavigationBarViewControllerWillHideKeyboard:(CapsuleNavigationBarViewController *)arg1;
- (void)capsuleNavigationController:(CapsuleNavigationBarViewController *)arg1 obscuredInsetsDidChangeWithCoordinator:(id <SFTransitionCoordinating>)arg2;
- (UIToolbar<_SFBarCommon> *)createToolbarForCapsuleNavigationBarViewController:(CapsuleNavigationBarViewController *)arg1;

@end
