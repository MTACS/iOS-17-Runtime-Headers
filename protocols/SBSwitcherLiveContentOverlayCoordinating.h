
@protocol SBSwitcherLiveContentOverlayCoordinating <SBLayoutStateTransitionObserver>

@required

- (void)appLayoutDidBecomeHidden:(SBAppLayout *)arg1;
- (SBAppLayout *)appLayoutForKeyboardFocusedScene;
- (void)appLayoutWillBecomeVisible:(SBAppLayout *)arg1;
- (bool)areLiveContentOverlayUpdatesSuspended;
- (void)cleanUpAfterCoordinatedLayoutStateTransitionWithContext:(SBSwitcherCoordinatedLayoutStateTransitionContext *)arg1;
- (long long)containerOrientation;
- (<SBSwitcherLiveContentOverlayCoordinatorDelegate> *)delegate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
- (void)invalidate;
- (void)itemContainerForAppLayout:(SBAppLayout *)arg1 willBeReusedForAppLayout:(SBAppLayout *)arg2;
- (void)noteKeyboardFocusDidChangeToSceneID:(NSString *)arg1;
- (bool)performSwitcherKeyboardShortcutAction:(long long)arg1;
- (void)prepareForCoordinatedLayoutStateTransitionWithContext:(SBSwitcherCoordinatedLayoutStateTransitionContext *)arg1;
- (void)setContainerOrientation:(long long)arg1;
- (void)setDelegate:(id <SBSwitcherLiveContentOverlayCoordinatorDelegate>)arg1;
- (void)setLiveContentOverlayUpdatesSuspended:(bool)arg1;
- (bool)wantsEdgeProtectForHomeGestureForAppLayout:(SBAppLayout *)arg1;
- (bool)wantsHomeAffordanceAutoHideForAppLayout:(SBAppLayout *)arg1;
- (void)willRotateFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 alongsideContainerView:(UIView *)arg3 animated:(bool)arg4;

@end
