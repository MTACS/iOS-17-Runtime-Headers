
@interface SBDeviceApplicationSceneView : SBApplicationSceneView <PTSettingsKeyObserver, SBAppSwitcherPageContentView, SBDeviceApplicationSceneClassicAccessoryViewDelegate, SBDeviceApplicationSceneOverlayViewObserver> {
    bool  _active;
    SBDeviceApplicationSceneClassicAccessoryView * _classicAccessoryView;
    SBDeviceApplicationSceneClassicWrapperView * _classicWrapperView;
    UIApplicationSceneClientSettingsDiffInspector * _clientSettingsInspector;
    bool  _counterRotationViewTransformUpdatesPaused;
    UIView<UIScenePresentation> * _currentHostView;
    bool  _grabberLivesInCounterRotationView;
    SBHomeGrabberRotationView * _grabberRotationView;
    SBFHomeGrabberSettings * _grabberSettings;
    _UIDirectionalRotationView * _hostCounterRotationView;
    bool  _isInsetForHomeAffordance;
    long long  _lastStableOverlayOrientation;
    SBMedusaSettings * _medusaSettings;
    NSMutableArray * _multitaskingExclusionRectDebugViews;
    long long  _overlayOrientationAtStartOfRotation;
    NSMutableDictionary * _overlayViewsByPriority;
    SBSceneHandleBlockObserver * _sceneHandleObserver;
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsInspector;
    <BSInvalidatable> * _snapshottingInfoAssertion;
    double  _statusBarAlpha;
    SBApplicationSceneViewStatusBarDescriptor * _statusBarDescriptor;
    <UISceneLayerTarget> * _statusBarLayerTarget;
    bool  _visible;
    bool  _waitingForBoundsUpdateDuringRotation;
    unsigned long long  maskedCorners;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) UIView<SBApplicationSceneBackgroundView> *backgroundView;
@property (nonatomic, readonly) bool contentRequiresGroupOpacity;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forcesStatusBarHidden;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBHomeGrabberView *homeGrabberView;
@property (getter=isInsetForHomeAffordance, nonatomic) bool insetForHomeAffordance;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *sceneHandle;
@property (nonatomic) double statusBarAlpha;
@property (nonatomic, retain) SBApplicationSceneViewStatusBarDescriptor *statusBarDescriptor;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (bool)_anyOverlayViewNeedsCounterRotation;
- (void)_configureSceneLiveHostView:(id)arg1;
- (void)_configureSceneLiveSnapshotView:(id)arg1;
- (void)_configureSceneSnapshotContext:(id)arg1;
- (double)_contentContainerCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentContainerEdgeInsets;
- (bool)_contentPrefersToDisableClipping;
- (void)_createClassicWrapperViewIfNecessaryForHostView:(id)arg1;
- (void)_createHostCounterRotationViewIfNecessary;
- (void)_invalidateSceneLiveHostView:(id)arg1;
- (void)_layoutLiveHostView:(id)arg1;
- (void)_layoutLiveSnapshotView:(id)arg1;
- (void)_maybeStartTrackingRotationForOverlayFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)_refresh;
- (bool)_representsTranslucentContent;
- (bool)_sceneDrivesOwnRotation;
- (void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2;
- (void)_sceneHandleDidUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2;
- (void)_setCounterRotationViewTransformUpdatesPaused:(bool)arg1;
- (void)_setOrientation:(long long)arg1;
- (void)_tearDownHostCounterRotationViewIfNecessary;
- (id)_transitionViewForHostView;
- (void)_updateDragAndDropExclusionDebugViewsIfNecessary;
- (void)_updateEdgeProtectAndAutoHideOnHomeGrabberView;
- (void)_updateReferenceSize:(struct CGSize { double x1; double x2; })arg1 andOrientation:(long long)arg2;
- (void)_updateStatusBarVisibilityForHostView;
- (bool)_useClassicWrapperView;
- (long long)_wallpaperStyle;
- (bool)_wantsBlackBackground;
- (void)_windowManagementStyleDidChange:(id)arg1;
- (void)addOverlayView:(id)arg1 withPriority:(long long)arg2;
- (void)applicationSceneCompatibilityModeAnimatingChangeTo:(long long)arg1;
- (void)containerViewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)contentRequiresGroupOpacity;
- (double)cornerRadius;
- (void)createClassicAccessoryViewIfNecessary;
- (void)createHomeGrabberViewIfNecessaryWithSettings:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceApplicationSceneView;
- (void)didMoveToWindow;
- (bool)forcesStatusBarHidden;
- (id)homeGrabberView;
- (id)initWithSceneHandle:(id)arg1 referenceSize:(struct CGSize { double x1; double x2; })arg2 contentOrientation:(long long)arg3 containerOrientation:(long long)arg4 hostRequester:(id)arg5;
- (void)invalidate;
- (bool)isActive;
- (bool)isInsetForHomeAffordance;
- (bool)isVisible;
- (void)layoutSubviews;
- (unsigned long long)maskedCorners;
- (void)noteApplicationClassicPhoneSceneOrientationPreferenceChangingForUserAction:(bool)arg1;
- (void)overlayViewDidRotate:(id)arg1 toInterfaceOrientation:(long long)arg2;
- (id)prepareForContentRotation;
- (void)removeOverlayView:(id)arg1 withPriority:(long long)arg2;
- (void)sceneHandle:(id)arg1 didChangeContentPrefersToDisableClipping:(bool)arg2;
- (void)setActive:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setForcesStatusBarHidden:(bool)arg1;
- (void)setInsetForHomeAffordance:(bool)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setStatusBarAlpha:(double)arg1;
- (void)setStatusBarDescriptor:(id)arg1;
- (void)setVisible:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (double)statusBarAlpha;
- (id)statusBarDescriptor;
- (void)tearDownHomeGrabberView;
- (void)teardownClassicAccessoryViewIfNecessary;
- (void)willRotateFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 alongsideContainerView:(id)arg3 animated:(bool)arg4;

@end