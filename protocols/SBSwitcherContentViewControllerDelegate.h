
@protocol SBSwitcherContentViewControllerDelegate <NSObject>

@required

- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 deletedDisplayItem:(SBDisplayItem *)arg2 inAppLayout:(SBAppLayout *)arg3 forReason:(long long)arg4;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 performTransitionWithRequest:(SBSwitcherTransitionRequest *)arg2 gestureInitiated:(bool)arg3;

@optional

- (void)cancelActiveGestureForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 activatedBestAppSuggestion:(SBBestAppSuggestion *)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 bringAppLayoutToFront:(SBAppLayout *)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 layoutStateTransitionDidEndWithTransitionContext:(SBLayoutStateTransitionContext *)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 reopenHiddenAppLayoutsWithBundleIdentifier:(NSString *)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 requestNewWindowForBundleIdentifier:(NSString *)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setCacheAsynchronousRenderingSurfaces:(bool)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setContainerStatusBarHidden:(bool)arg2 partsHidden:(unsigned long long)arg3 animationDuration:(double)arg4;
- (void)switcherContentController:(void *)arg1 setHomeScreenAlpha:(void *)arg2 withAnimationMode:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <SBSwitcherContentViewControlling> *, double, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)switcherContentController:(void *)arg1 setHomeScreenBackdropBlurMaterialRecipeName:(void *)arg2 withAnimationMode:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <SBSwitcherContentViewControlling> *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)switcherContentController:(void *)arg1 setHomeScreenBackdropBlurProgress:(void *)arg2 withAnimationMode:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <SBSwitcherContentViewControlling> *, double, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setHomeScreenBackdropBlurType:(long long)arg2;
- (void)switcherContentController:(void *)arg1 setHomeScreenDimmingAlpha:(void *)arg2 withAnimationMode:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <SBSwitcherContentViewControlling> *, double, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)switcherContentController:(void *)arg1 setHomeScreenScale:(void *)arg2 withAnimationMode:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <SBSwitcherContentViewControlling> *, double, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setInterfaceOrientationFromUserResizing:(long long)arg2 forDisplayItem:(SBDisplayItem *)arg3;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setPointerInteractionsEnabled:(bool)arg2;
- (void)switcherContentController:(void *)arg1 setWallpaperScale:(void *)arg2 withAnimationMode:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <SBSwitcherContentViewControlling> *, double, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setWallpaperStyle:(long long)arg2;
- (bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 shouldResignActiveForStartOfTransition:(SBLayoutStateTransitionContext *)arg2;
- (bool)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 shouldSkipNonAnimatedLayoutPassAfterTransition:(SBWorkspaceApplicationSceneTransitionContext *)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 transformForCardUnderSheetForBoundsSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)switcherContentControllerControlsHomeScreenContents:(id <SBSwitcherContentViewControlling>)arg1;
- (void)updateUserInteractionEnabledForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (void)updateWindowVisibilityForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;

@end
