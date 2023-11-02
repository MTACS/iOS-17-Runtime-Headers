
@interface SBFullScreenAlwaysLiveLiveContentOverlay : NSObject <BSInvalidatable, SBDeviceApplicationSceneHandleObserver, SBFullScreenSwitcherSceneLiveContentOverlay, SBSceneViewPresentationConfiguring> {
    bool  _asyncRenderingEnabled;
    long long  _containerOrientation;
    <SBSwitcherLiveContentOverlayDelegate> * _delegate;
    bool  _isInsetForHomeAffordance;
    bool  _resizesHostedContext;
    SBDeviceApplicationSceneHandle * _sceneHandle;
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsInspector;
    SBDeviceApplicationSceneView * _sceneView;
    BSUIOrientationTransformWrapperView * _transformWrapperView;
    bool  _wantsEnhancedWindowingEnabled;
}

@property (getter=isAsyncRenderingEnabled, nonatomic, readonly) bool asyncRenderingEnabled;
@property (nonatomic) long long containerOrientation;
@property (nonatomic, readonly) UIView *contentOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSwitcherLiveContentOverlayDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayLayoutElementActive, nonatomic) bool displayLayoutElementActive;
@property (readonly) unsigned long long hash;
@property (getter=isInsetForHomeAffordance, nonatomic) bool insetForHomeAffordance;
@property (nonatomic, readonly) bool requiresLegacyRotationSupport;
@property (nonatomic) bool resizesHostedContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long touchBehavior;
@property (nonatomic) bool wantsEnhancedWindowingEnabled;

- (void).cxx_destruct;
- (id)backgroundActivitiesToSuppress;
- (void)configureWithWorkspaceEntity:(id)arg1 referenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentOrientation:(long long)arg3 containerOrientation:(long long)arg4 layoutRole:(long long)arg5 sbsDisplayLayoutRole:(long long)arg6 spaceConfiguration:(long long)arg7 floatingConfiguration:(long long)arg8 hasClassicAppOrientationMismatch:(bool)arg9 sizingPolicy:(long long)arg10;
- (long long)containerOrientation;
- (id)contentOverlayView;
- (id)contentViewController;
- (double)currentStatusBarHeight;
- (id)delegate;
- (void)disableAsynchronousRenderingForNextCommit;
- (id)initWithSceneHandle:(id)arg1 referenceSize:(struct CGSize { double x1; double x2; })arg2 containerOrientation:(long long)arg3;
- (void)invalidate;
- (bool)isAsyncRenderingEnabled;
- (bool)isContentUpdating;
- (bool)isDisplayLayoutElementActive;
- (bool)isInsetForHomeAffordance;
- (long long)leadingStatusBarStyle;
- (id)liveSceneIdentityToken;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (id)overlaySceneHandle;
- (long long)overlayType;
- (long long)preferredInterfaceOrientation;
- (id)prepareOverlayForContentRotation;
- (bool)requiresLegacyRotationSupport;
- (bool)resizesHostedContext;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (id)sceneViewPresentationIdentifier:(id)arg1;
- (long long)sceneViewPresentationPriority:(id)arg1;
- (void)setAsyncRenderingEnabled:(bool)arg1 withMinificationFilterEnabled:(bool)arg2;
- (void)setBlurViewIconScale:(double)arg1;
- (void)setContainerOrientation:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setDisplayLayoutElementActive:(bool)arg1;
- (void)setInsetForHomeAffordance:(bool)arg1;
- (void)setLiveContentBlurEnabled:(bool)arg1 duration:(double)arg2 blurDelay:(double)arg3 iconViewScale:(double)arg4 began:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)setMatchMovedToScene:(bool)arg1;
- (void)setResizesHostedContext:(bool)arg1;
- (void)setStatusBarHidden:(bool)arg1 nubViewHidden:(bool)arg2 animator:(id /* block */)arg3;
- (void)setTouchBehavior:(long long)arg1;
- (void)setUsesBrightSceneViewBackgroundMaterial:(bool)arg1;
- (void)setWantsEnhancedWindowingEnabled:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)touchBehavior;
- (long long)trailingStatusBarStyle;
- (void)updateDisplayLayoutElementWithBuilder:(id /* block */)arg1;
- (bool)wantsEnhancedWindowingEnabled;

@end
