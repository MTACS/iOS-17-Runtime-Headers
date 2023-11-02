
@protocol SBSwitcherContentViewControllerDataSource <NSObject>

@required

- (NSArray *)appLayoutsForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (long long)sbActiveInterfaceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 frameForItemWithRole:(long long)arg2 inMainAppLayout:(SBAppLayout *)arg3 interfaceOrientation:(long long)arg4;
- (SBTransitionSwitcherModifierEvent *)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 transitionEventForContext:(SBWorkspaceApplicationSceneTransitionContext *)arg2 identifier:(NSUUID *)arg3 phase:(unsigned long long)arg4 animated:(bool)arg5;
- (SBTransitionSwitcherModifierEvent *)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 transitionEventForLayoutState:(SBMainDisplayLayoutState *)arg2 identifier:(NSUUID *)arg3 phase:(unsigned long long)arg4 animated:(bool)arg5;
- (long long)switcherInterfaceOrientationForContentController:(id <SBSwitcherContentViewControlling>)arg1;

@optional

- (SBAppLayout *)activeTransientOverlayPresentedAppLayoutForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (SBAppLayout *)appLayoutForWorkspaceTransientOverlay:(SBWorkspaceTransientOverlay *)arg1;
- (long long)backdropInterfaceStyleForContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (SBWorkspaceTransientOverlay *)createWorkspaceTransientOverlayForAppLayout:(SBAppLayout *)arg1;
- (long long)homeScreenInterfaceOrientationForContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (bool)isInAppStatusBarRequestedHiddenForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (UIWindow *)mainSwitcherWindow;
- (SBIconView *)matchingIconViewForIconView:(SBIconView *)arg1;
- (SBDeviceApplicationSceneHandle *)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 deviceApplicationSceneHandleForDisplayItem:(SBDisplayItem *)arg2;
- (bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 displayItemSupportsCenterRole:(SBDisplayItem *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 frameForCenterItemWithConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 frameForFloatingAppLayoutInInterfaceOrientation:(long long)arg2 floatingConfiguration:(long long)arg3;
- (NSArray *)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 hiddenAppLayoutsForBundleIdentifier:(NSString *)arg2;
- (bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 shouldMorphFromPIPForTransitionContext:(SBWorkspaceApplicationSceneTransitionContext *)arg2;
- (bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 shouldMorphToPIPForTransitionContext:(SBWorkspaceApplicationSceneTransitionContext *)arg2;
- (bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 supportsKillingOfAppLayout:(SBAppLayout *)arg2;
- (bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 supportsTitleItemsForAppLayout:(SBAppLayout *)arg2;
- (NSArray *)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 visibleAppLayoutsForBundleIdentifier:(NSString *)arg2;
- (NSOrderedSet *)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 visibleDisplayItemsForBundleIdentifier:(NSString *)arg2;
- (bool)switcherContentControllerIsKeyboardHomeAffordanceAssertionCurrentlyBeingTaken:(id <SBSwitcherContentViewControlling>)arg1;
- (bool)switcherContentControllerReloadsSnapshotsForActiveInterfaceOrientationChange:(id <SBSwitcherContentViewControlling>)arg1;
- (SBTransientOverlayViewController *)viewControllerForTransientOverlayAppLayout:(SBAppLayout *)arg1;

@end
