
@protocol SBSwitcherContentViewControlling <SBButtonEventsHandler, SBLayoutStateTransitionObserver, SBSwitcherAnimatedTransitioning>

@required

- (void)acquiredViewController:(SBTransientOverlayViewController *)arg1 forTransientOverlayAppLayout:(SBAppLayout *)arg2;
- (BOOL)activityModeForAppLayout:(SBAppLayout *)arg1;
- (SBFluidSwitcherAnimationController *)animationControllerForTransitionRequest:(SBMainWorkspaceTransitionRequest *)arg1;
- (SBBestAppSuggestion *)bestAppSuggestion;
- (bool)canPerformKeyboardShortcutAction:(long long)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)clickReceivedForHomeGrabberView:(SBHomeGrabberView *)arg1;
- (double)contentAspectRatio;
- (long long)contentOrientation;
- (<SBSwitcherContentViewControllerDataSource> *)dataSource;
- (<SBSwitcherContentViewControllerDelegate> *)delegate;
- (NSSet *)foregroundAppLayouts;
- (void)handleFluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 didBeginGesture:(SBFluidSwitcherGesture *)arg2;
- (void)handleFluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 didEndGesture:(SBFluidSwitcherGesture *)arg2;
- (void)handleFluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 didUpdateGesture:(SBFluidSwitcherGesture *)arg2;
- (SBIcon *)iconForAppLayout:(SBAppLayout *)arg1;
- (void)invalidate;
- (bool)isAsyncRenderingDisabled;
- (bool)isShowingModifierTimeline;
- (bool)isStatusBarHiddenForAppLayout:(SBAppLayout *)arg1;
- (bool)isUserInteractionEnabled;
- (bool)isWindowVisible;
- (BOOL)jetsamModeForAppLayout:(SBAppLayout *)arg1;
- (UIStatusBarStyleRequest *)leadingStatusBarStyleRequest;
- (<SBSwitcherLiveContentOverlay> *)liveContentOverlayForAppLayout:(SBAppLayout *)arg1;
- (<SBSwitcherLiveContentOverlay> *)liveOverlayForSceneHandle:(SBSceneHandle *)arg1;
- (<SBSwitcherLiveContentOverlay> *)liveOverlayForSceneIdentityToken:(FBSSceneIdentityToken *)arg1;
- (NSArray *)liveScenesIdentityTokens;
- (double)minimumHomeScreenScale;
- (void)noteAppLayoutsDidChange;
- (void)noteKeyboardFocusDidChangeToSceneID:(NSString *)arg1;
- (void)noteModelDidMutateForInsertionOfAppLayouts:(NSArray *)arg1 atIndexes:(NSArray *)arg2 willAnimate:(bool)arg3;
- (void)noteWindowSceneCountDidChange;
- (void)performAnimatedInsertionOfAppLayouts:(void *)arg1 atIndexes:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)performKeyboardShortcutAction:(long long)arg1;
- (void)prepareAnimatedInsertionOfAppLayouts:(NSArray *)arg1 atIndexes:(NSArray *)arg2;
- (void)relinquishTransientOverlayViewController:(SBTransientOverlayViewController *)arg1;
- (void)removeLayoutRole:(void *)arg1 inSpace:(void *)arg2 mutationBlock:(void *)arg3 reason:(void *)arg4; // needs 4 arg types, found 8: long long, SBAppLayout *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, long long
- (void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(bool)arg1;
- (void)sceneLayoutTransitionWillStartWithTransitionContext:(SBWorkspaceApplicationSceneTransitionContext *)arg1;
- (void)setAsyncRenderingDisabled:(bool)arg1;
- (void)setBestAppSuggestion:(SBBestAppSuggestion *)arg1;
- (void)setContentOrientation:(long long)arg1;
- (void)setDataSource:(id <SBSwitcherContentViewControllerDataSource>)arg1;
- (void)setDelegate:(id <SBSwitcherContentViewControllerDelegate>)arg1;
- (void)setShowModifierTimeline:(bool)arg1;
- (bool)shouldAcceleratedHomeButtonPressBegin;
- (bool)shouldAddAppLayoutToFront:(SBAppLayout *)arg1 forTransitionWithContext:(SBWorkspaceApplicationSceneTransitionContext *)arg2 transitionCompleted:(bool)arg3;
- (bool)shouldAnimateInsertionOfAppLayouts:(NSArray *)arg1 atIndexes:(NSArray *)arg2;
- (bool)shouldRubberbandFullScreenHomeGrabberView;
- (double)snapshotScaleForSceneHandle:(SBApplicationSceneHandle *)arg1;
- (void)tapReceivedForGrabberTongueAtEdge:(unsigned long long)arg1;
- (UIStatusBarStyleRequest *)trailingStatusBarStyleRequest;

@end
