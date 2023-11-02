
@interface UIWindowScene : UIScene <UITraitChangeObservable, UITraitChangeObservableInternal, UITraitEnvironment, _UIAssertionControllerSubject, _UIContextBinderContextCreationPolicyHolding, _UIEventDeferringRuleOwning, _UIFallbackEnvironment, _UIOrientationDebugDescriptionProviding, _UISceneUIWindowEventRouting, _UISceneUIWindowHosting, _UITraitEnvironmentInternal, _UITraitOverrideDelegate> {
    bool  __isKeyWindowScene;
    <UIActivityItemsConfigurationProviding> * _activityItemsConfigurationSource;
    _UIAssertionController * _assertionController;
    long long  _avkitRequestedOverscanCompensation;
    NSSet * _componentsWithTraitOverrides;
    _UIContextBinder * _contextBinder;
    <UICoordinateSpace> * _coordinateSpace;
    UISCurrentUserInterfaceStyleValue * _currentUserInterfaceStyleValueForSystemUIServices;
    UIWindow * _delegateWindowNeedingDeferredInitialUpdate;
    <_UIDisplayInfoProviding> * _displayEdgeInfoProvider;
    UIWindowSceneGeometry * _effectiveGeometry;
    bool  _excludedFromWindowsMenu;
    bool  _fullScreen;
    UIWindow * _keyWindow;
    NSPointerArray * _keyWindowHistory;
    _UIEventDeferringOwnershipToken * _keyboardEventDeferringToken;
    UIView * _liveResizeSnapshot;
    <_UISceneMetricsCalculating> * _metricsCalculator;
    UITraitCollection * _overrideParentTraitCollection;
    <UITraitEnvironment> * _overrideParentTraitEnvironment;
    _UIWindowSystemOverlayWindow * _passthroughWindow;
    int  _reachabilitySupportedCounter;
    UIScreen * _screen;
    long long  _screenRequestedOverscanCompensation;
    struct { 
        unsigned int delegateSupportsWindowWillAttach : 1; 
        unsigned int delegateSupportsWindowWillDetach : 1; 
        unsigned int delegateSupportsWindowWillBecomeVisible : 1; 
        unsigned int delegateSupportsWindowDidBecomeVisible : 1; 
        unsigned int delegateSupportsWindowWillBecomeHidden : 1; 
        unsigned int delegateSupportsWindowLevelOverride : 1; 
        unsigned int delegateSupportsWindowSupportedAndPreferredOrientationsChanged : 1; 
        unsigned int delegateSupportsDeprecatedWindowSupportedOrientationsChanged : 1; 
    }  _springBoardDelegateFlags;
    _UITraitChangeRegistry * _traitChangeRegistry;
    UITraitCollection * _traitCollection;
    _UITraitOverrides * _traitOverrides;
    unsigned int  _userInteractionDisabledCount;
    struct { 
        unsigned int delegateSupportsWindow : 1; 
        unsigned int delegateSupportsSetWindow : 1; 
        unsigned int delegateSupportsDidUpdateCoordinateSpace : 1; 
        unsigned int isPerformingSystemSnapshot : 1; 
        unsigned int needsScheduleLiveResizeFinishedActionWhenDoneHoldingSnapshot : 1; 
        unsigned int enhancedWindowingEnabled; 
        unsigned int holdingLiveResizeSnapshot : 1; 
        unsigned int shouldDisableTouchCancellationOnRotation : 1; 
        unsigned int enqueuedEvaluationOfDisablesMirroring : 1; 
    }  _windowSceneFlags;
    NSHashTable * _windowsNeedingDeferredInitialUpdateExecution;
}

@property (getter=SBUI_isHostedBySystemAperture, nonatomic, readonly) bool SBUI_hostedBySystemAperture;
@property (nonatomic, readonly) <UIActivityItemsConfigurationReading> *_activityItemsConfiguration;
@property (setter=_setActivityItemsConfigurationSource:, nonatomic) <UIActivityItemsConfigurationProviding> *_activityItemsConfigurationSource;
@property (nonatomic, readonly) UIAlertControllerStackManager *_alertControllerStackManager;
@property (nonatomic, readonly) bool _allowsEventUIWindowRouting;
@property (nonatomic, readonly) ASOOverlayManager *_aso_appOverlayManager;
@property (getter=_avkitRequestedOverscanCompensation, setter=_setAVKitRequestedOverscanCompensation:, nonatomic) long long _avkitRequestedOverscanCompensation;
@property (setter=_setBackgroundStyle:, nonatomic) long long _backgroundStyle;
@property (getter=_bannerManager, nonatomic, readonly) _UIBannerManager *_bannerManager;
@property (nonatomic, readonly) bool _canDynamicallySpecifySupportedInterfaceOrientations;
@property (nonatomic, readonly) bool _canReceiveDeviceOrientationEvents;
@property (nonatomic, readonly) _UIContextBinder *_contextBinder;
@property (nonatomic, readonly) <UICoordinateSpace> *_coordinateSpace;
@property (nonatomic, readonly) _UICanvasDefinition *_definition;
@property (getter=_displayConfigurationRequest, setter=_setDisplayConfigurationRequest:, nonatomic, retain) FBSDisplayConfigurationRequest *_displayConfigurationRequest;
@property (nonatomic, readonly) <_UIDisplayInfoProviding> *_displayInfoProvider;
@property (nonatomic, readonly) bool _enhancedWindowingEnabled;
@property (getter=_isInLiveResize, nonatomic, readonly) bool _inLiveResize;
@property (nonatomic, readonly) long long _interfaceOrientation;
@property (nonatomic) bool _isKeyWindowScene;
@property (nonatomic, readonly) bool _isPerformingSystemSnapshot;
@property (setter=_setOverrideParentTraitEnvironment:, nonatomic) <UITraitEnvironment> *_overrideParentTraitEnvironment;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _peripheryInsets;
@property (nonatomic, readonly) UIScene<_UISceneUIWindowEventRouting> *_sceneForKeyboardDisplay;
@property (nonatomic, readonly) UIScreen *_screen;
@property (getter=_screenRequestedDisplayNativePixelSize, setter=_setScreenRequestedDisplayNativePixelSize:, nonatomic) struct CGSize { double x1; double x2; } _screenRequestedDisplayNativePixelSize;
@property (getter=_screenRequestedOverscanCompensation, setter=_setScreenRequestedOverscanCompensation:, nonatomic) long long _screenRequestedOverscanCompensation;
@property (nonatomic, readonly) _UISearchActivityManager *_searchActivityManager;
@property (nonatomic, readonly) UIStatusBarManager *_statusBarManager;
@property (nonatomic, readonly) _UISystemAppearanceManager *_systemAppearanceManager;
@property (nonatomic, readonly) UITraitCollection *_traitCollection;
@property (getter=_isUserInteractionEnabled, nonatomic, readonly) bool _userInteractionEnabled;
@property (nonatomic, readonly) id /* block */ _windowOrientationPreferencesObserver;
@property (nonatomic) <UIActivityItemsConfigurationProviding> *activityItemsConfigurationSource;
@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) UIWindowSceneGeometry *effectiveGeometry;
@property (getter=isExcludedFromWindowsMenu, nonatomic) bool excludedFromWindowsMenu;
@property (getter=_fbsDisplayConfiguration, nonatomic, readonly) FBSDisplayConfiguration *fbsDisplayConfiguration;
@property (getter=_fbsDisplayIdentity, nonatomic, readonly) FBSDisplayIdentity *fbsDisplayIdentity;
@property (nonatomic, readonly) UIFocusSystem *focusSystem;
@property (getter=isFullScreen, nonatomic, readonly) bool fullScreen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIInputResponderController *inputResponderController;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (getter=_keepContextAssociationInBackground, setter=_setKeepContextAssociationInBackground:, nonatomic) bool keepContextAssociationInBackground;
@property (getter=isKeyCanvas, nonatomic, readonly) bool keyCanvas;
@property (nonatomic, readonly) UIWindow *keyWindow;
@property (nonatomic, readonly) UIKeyboardSceneDelegate *keyboardSceneDelegate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } previewMaximumSize;
@property (nonatomic, readonly) NSString *previewSceneIdentifier;
@property (getter=_sbDisplayConfiguration, nonatomic, readonly) FBSDisplayConfiguration *sbDisplayConfiguration;
@property (getter=_sbWindowScene, nonatomic, readonly) SBWindowScene *sbWindowScene;
@property (getter=_scene, nonatomic, readonly) FBSScene *scene;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) UIScreenshotService *screenshotService;
@property (nonatomic, readonly) UISceneSizeRestrictions *sizeRestrictions;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) UIStatusBarManager *statusBarManager;
@property (readonly) Class superclass;
@property (nonatomic) <SBUISystemApertureElementProviding> *systemApertureElementViewControllerProvider;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) <UITraitOverrides> *traitOverrides;
@property (nonatomic, readonly) UISceneWindowingBehaviors *windowingBehaviors;
@property (nonatomic, readonly) NSArray *windows;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_canvasForScene:(id)arg1;
+ (bool)_hostsWindows;
+ (id)_keyboardWindowSceneForScreen:(id)arg1 create:(bool)arg2;
+ (id)_placeholderWindowSceneForScreen:(id)arg1 create:(bool)arg2;
+ (bool)_supportsEventUIWindowRouting;
+ (id)_unassociatedWindowSceneForScreen:(id)arg1 create:(bool)arg2;
+ (void)_updateVisibleSceneAndWindowOrderWithTest:(id /* block */)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_activityItemsConfiguration;
- (id)_activityItemsConfigurationSource;
- (double)_adjustedLevelForWindow:(id)arg1 preferredLevel:(double)arg2;
- (id)_alertControllerStackManager;
- (id)_allWindows;
- (id)_allWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2;
- (bool)_allowsEventUIWindowRouting;
- (id)_alwaysOnEnvironment;
- (void)_applySnapshotSettings:(id)arg1 forActions:(id /* block */)arg2;
- (void)_attachWindow:(id)arg1;
- (long long)_avkitRequestedOverscanCompensation;
- (long long)_backgroundStyle;
- (id)_bannerManager;
- (void)_beginIgnoringInteractionEventsForReason:(id)arg1;
- (bool)_canReceiveDeviceOrientationEvents;
- (void)_completeGeometryUpdatesWithTransitionContext:(id)arg1;
- (void)_componentDidUpdateTraitOverrides:(id)arg1;
- (void)_computeMetrics:(bool)arg1;
- (void)_computeMetrics:(bool)arg1 withTransitionContext:(id)arg2;
- (void)_computeMetricsAndCrossFadeInLiveResize:(bool)arg1 withTransitionContext:(id)arg2;
- (void)_computeMetricsForWindows:(id)arg1 animated:(bool)arg2;
- (void)_computeTraitCollectionAndCoordinateSpaceForcingDelegateCallback:(bool)arg1 withAction:(id /* block */)arg2;
- (id)_contextBinder;
- (id)_contextMenuSceneComponent;
- (id)_coordinateSpace;
- (unsigned long long)_currentlySupportedInterfaceOrientations;
- (id)_definition;
- (void)_delegate_windowDidBecomeVisible:(id)arg1;
- (void)_delegate_windowWillAttach:(id)arg1;
- (void)_delegate_windowWillBecomeHidden:(id)arg1;
- (void)_delegate_windowWillBecomeVisible:(id)arg1;
- (void)_delegate_windowWillDetach:(id)arg1;
- (void)_detachWindow:(id)arg1;
- (id)_disableTouchCancellationOnRotation;
- (id)_displayConfigurationRequest;
- (id)_displayInfoProvider;
- (id)_editMenuSceneComponent;
- (void)_endIgnoringInteractionEventsForReason:(id)arg1;
- (bool)_enhancedWindowingEnabled;
- (void)_enumerateWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2 asCopy:(bool)arg3 stopped:(bool*)arg4 withBlock:(id /* block */)arg5;
- (void*)_fallbackTraitCollection;
- (id)_fbsSceneLayerForWindow:(id)arg1;
- (void)_finishSceneConnection;
- (id)_holdLiveResizeSnapshotForReason:(id)arg1;
- (id)_inheritingWindowsIncludingInvisible:(bool)arg1;
- (long long)_interfaceOrientation;
- (long long)_interfaceOrientationForSupportedOrientations:(unsigned long long)arg1 preferredOrientation:(long long)arg2;
- (void)_invalidate;
- (bool)_isInLiveResize;
- (bool)_isKeyWindowScene;
- (bool)_isPerformingSystemSnapshot;
- (bool)_isUserInteractionEnabled;
- (bool)_keepContextAssociationInBackground;
- (id)_keyCommands;
- (void)_loadWindowWithStoryboardIfNeeded:(id)arg1;
- (void)_noteDisplayIdentityDidChangeWithConfiguration:(id)arg1;
- (id)_orientationDebugDescription;
- (id)_orientationDebugDescriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_orientationDebugDescriptionWithMultilinePrefix:(id)arg1;
- (id)_overrideParentTraitEnvironment;
- (id)_parentTraitEnvironment;
- (void)_performAfterSystemSnapshotsComplete:(id /* block */)arg1;
- (void)_performClose:(id)arg1;
- (void)_performDeferredInitialWindowUpdateForConnection;
- (void)_performIOSGeometryRequestWithPreferences:(id)arg1 errorHandler:(id /* block */)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_peripheryInsets;
- (bool)_permitContextCreationForBindingDescription:(struct { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; })arg1;
- (id)_playbackControlsStateManager;
- (void)_prepareForResume;
- (void)_prepareForSuspend;
- (void)_readySceneForConnection;
- (void)_recycleAttachmentForWindow:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceBoundsForOrientation:(long long)arg1;
- (id)_registerForTraitTokenChanges:(id)arg1 withHandler:(id /* block */)arg2;
- (id)_registerForTraitTokenChanges:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
- (void)_registerSceneComponent:(id)arg1 forKey:(id)arg2;
- (long long)_resolvedOverscanCompensation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsetsForInterfaceOrientation:(long long)arg1;
- (id)_scene;
- (id)_sceneForKeyboardDisplay;
- (void)_scheduleResizeFinishedActionAndFadeOutSnapshot;
- (id)_screen;
- (void)_screenDidChangeFromScreen:(id)arg1 toScreen:(id)arg2;
- (struct CGSize { double x1; double x2; })_screenRequestedDisplayNativePixelSize;
- (long long)_screenRequestedOverscanCompensation;
- (id)_screenshotServiceIfPresent;
- (id)_searchActivityManager;
- (void)_setAVKitRequestedOverscanCompensation:(long long)arg1;
- (void)_setAVKitRequestedRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;
- (void)_setActivityItemsConfigurationSource:(id)arg1;
- (void)_setBackgroundStyle:(long long)arg1;
- (void)_setDisplayConfigurationRequest:(id)arg1;
- (void)_setEnhancedWindowingEnabled:(bool)arg1;
- (void)_setKeepContextAssociationInBackground:(bool)arg1;
- (void)_setOverrideParentTraitEnvironment:(id)arg1;
- (void)_setReachabilitySupported:(bool)arg1 forReason:(id)arg2;
- (void)_setScreenRequestedDisplayNativePixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setScreenRequestedOverscanCompensation:(long long)arg1;
- (void)_setShouldDisableTouchCancellationOnRotation:(bool)arg1;
- (void)_setSystemVolumeHUDEnabled:(bool)arg1;
- (void)_setSystemVolumeHUDEnabled:(bool)arg1 forAudioCategory:(id)arg2;
- (bool)_shouldDeferInitialWindowUpdateBeforeConnection:(id)arg1;
- (bool)_shouldDeferInitialWindowUpdateBeforeConnectionAndTrackIfNeeded:(id)arg1;
- (bool)_shouldLoadStoryboard;
- (bool)_shouldRotateSafeAreaInsetsToInterfaceOrientation;
- (void)_showProgressWhenFetchingUserActivityForTypes:(id)arg1;
- (id)_statusBarManager;
- (bool)_subclassTracksWindowsNeedingDeferredInitialUpdates;
- (bool)_supportsPassthroughInteractions;
- (id)_systemAppearanceManager;
- (id)_systemInputActivityManager;
- (double)_systemMinimumMargin;
- (id)_topVisibleWindowEnumeratingAsCopy:(bool)arg1 passingTest:(id /* block */)arg2;
- (id)_topVisibleWindowPassingTest:(id /* block */)arg1;
- (bool)_tracksWindowsNeedingDeferredInitialUpdates;
- (id)_traitCollection;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_traitOverridesDidChange:(id)arg1;
- (id)_traitTrace;
- (id)_traitTrace:(id)arg1;
- (id)_trueEffectiveGeometry;
- (void)_unlockPointerLockState:(id)arg1;
- (void)_updateAllDelegateFlags;
- (void)_updateClientSettingsToInterfaceOrientation:(long long)arg1 withAnimationDuration:(double)arg2;
- (void)_updateEffectiveGeometryIfNeeded;
- (void)_updateSceneTraitsAndPushTraitsToScreen:(bool)arg1 callParentWillTransitionToTraitCollection:(bool)arg2;
- (void)_updateSpringBoardDelegateFlags;
- (void)_updateVisibleWindowOrderWithTest:(id /* block */)arg1;
- (void)_updateWindowSceneDelegateFlags;
- (bool)_usesMinimumSafeAreaInsets;
- (id)_visibleWindows;
- (void)_willRestoreInteractionStateForUserActivityManager:(id)arg1;
- (void)_windowDidCreateRootPresentationController:(id)arg1;
- (bool)_windowIsFront:(id)arg1;
- (id /* block */)_windowOrientationPreferencesObserver;
- (id)_windowSceneDelegate;
- (void)_windowUpdatedProperties:(id)arg1;
- (void)_windowUpdatedVisibility:(id)arg1;
- (id)_windowingBehaviorsNotInstantiating;
- (bool)_windowsIgnoreSceneClientOrientation;
- (id)activityItemsConfigurationSource;
- (void)assertionActivationStateChangedToState:(bool)arg1 forType:(unsigned long long)arg2;
- (bool)assertionActivationStateForType:(unsigned long long)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)canvasToolbar;
- (id)coordinateSpace;
- (id)effectiveGeometry;
- (id)focusSystem;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;
- (id)inputResponderController;
- (long long)interfaceElementCategory;
- (long long)interfaceOrientation;
- (bool)isExcludedFromWindowsMenu;
- (bool)isFullScreen;
- (bool)isKeyCanvas;
- (id)keyWindow;
- (id)keyboardSceneDelegate;
- (id)registerForTraitChanges:(id)arg1 withAction:(SEL)arg2;
- (id)registerForTraitChanges:(id)arg1 withHandler:(id /* block */)arg2;
- (id)registerForTraitChanges:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
- (void)requestGeometryUpdateWithPreferences:(id)arg1 errorHandler:(id /* block */)arg2;
- (id)screen;
- (id)screenshotService;
- (void)setActivityItemsConfigurationSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExcludedFromWindowsMenu:(bool)arg1;
- (void)set_isKeyWindowScene:(bool)arg1;
- (id)sizeRestrictions;
- (long long)state;
- (id)statusBarManager;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitOverrides;
- (void)unregisterForTraitChanges:(id)arg1;
- (id)windowingBehaviors;
- (id)windows;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (bool)avkit_supportsInteractiveCounterRotationDismissals;

- (void)_avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;
- (id)avkit_asWindowScene;
- (void)avkit_disableTouchCancellation:(bool)arg1 forRotationActions:(id /* block */)arg2;
- (bool)avkit_screenHasWindowsExcludingWindow:(id)arg1;
- (long long)avkit_screenType;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void)_sf_openFaceTimeMultiWayURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_sf_openTelURL:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays

- (id)_aso_appOverlayManager;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (void)pr_updatePreferences:(id)arg1 withTransition:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PreviewsInjection.framework/PreviewsInjection

- (id)displayName;
- (double)displayScale;
- (struct CGSize { double x1; double x2; })previewMaximumSize;
- (id)previewSceneIdentifier;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)_fbsDisplayConfiguration;
- (id)_fbsDisplayIdentity;
- (id)_sbDisplayConfiguration;
- (id)_sbWindowScene;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (bool)SBUI_isHostedBySystemAperture;
- (void)setSystemApertureElementViewControllerProvider:(id)arg1;
- (id)systemApertureElementContext;
- (id)systemApertureElementContextPrivate;
- (id)systemApertureElementSource;
- (id)systemApertureElementViewControllerProvider;
- (id)systemApertureHostedElementContext;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)_accessibilityTraversalWindows;
- (id)_accessibilityTraversalWindowsWithOptions:(id)arg1;
- (id)_accessibilityViewChildrenWithOptions:(id)arg1;

@end
