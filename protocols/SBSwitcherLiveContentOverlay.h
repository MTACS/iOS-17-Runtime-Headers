
@protocol SBSwitcherLiveContentOverlay <SBSDisplayLayoutElementProviding>

@required

- (NSSet *)backgroundActivitiesToSuppress;
- (UIView *)contentOverlayView;
- (double)currentStatusBarHeight;
- (<SBSwitcherLiveContentOverlayDelegate> *)delegate;
- (void)disableAsynchronousRenderingForNextCommit;
- (bool)isAsyncRenderingEnabled;
- (bool)isContentUpdating;
- (bool)isInsetForHomeAffordance;
- (long long)leadingStatusBarStyle;
- (FBSSceneIdentityToken *)liveSceneIdentityToken;
- (void)noteKeyboardFocusDidChangeToSceneID:(NSString *)arg1;
- (SBSceneHandle *)overlaySceneHandle;
- (long long)preferredInterfaceOrientation;
- (SBUIAnimationController *)prepareOverlayForContentRotation;
- (bool)requiresLegacyRotationSupport;
- (bool)resizesHostedContext;
- (void)setAsyncRenderingEnabled:(bool)arg1 withMinificationFilterEnabled:(bool)arg2;
- (void)setBlurViewIconScale:(double)arg1;
- (void)setDelegate:(id <SBSwitcherLiveContentOverlayDelegate>)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setInsetForHomeAffordance:(bool)arg1;
- (void)setLiveContentBlurEnabled:(void *)arg1 duration:(void *)arg2 blurDelay:(void *)arg3 iconViewScale:(void *)arg4 began:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 14: bool, double, double, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (void)setMatchMovedToScene:(bool)arg1;
- (void)setResizesHostedContext:(bool)arg1;
- (void)setStatusBarHidden:(void *)arg1 nubViewHidden:(void *)arg2 animator:(void *)arg3; // needs 3 arg types, found 19: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, bool, bool, void*, void*
- (void)setTouchBehavior:(long long)arg1;
- (void)setUsesBrightSceneViewBackgroundMaterial:(bool)arg1;
- (void)setWantsEnhancedWindowingEnabled:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)touchBehavior;
- (long long)trailingStatusBarStyle;
- (bool)wantsEnhancedWindowingEnabled;

@optional

- (long long)bestHomeAffordanceOrientationForOrientation:(long long)arg1;
- (bool)hitTestedToTopAffordance:(struct CGPoint { double x1; double x2; })arg1 window:(UIWindow *)arg2;
- (UIView *)newPortaledLiveContentOverlayView;
- (void)setContentReferenceSize:(struct CGSize { double x1; double x2; })arg1 interfaceOrientation:(long long)arg2;
- (void)updateTopAffordanceContextMenu;

@end
