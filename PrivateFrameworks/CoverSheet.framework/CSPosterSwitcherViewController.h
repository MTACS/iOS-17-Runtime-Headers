
@interface CSPosterSwitcherViewController : CSCoverSheetViewControllerBase <CSApplicationHosting, CSDismissableModalViewControllerDelegate, CSTraitAwareAppHostContextProviding, SBDeviceApplicationSceneHandleObserver, SBSceneHandleActionConsuming> {
    NSArray * _activatingTouches;
    <CSTraitAwareAppHostConfiguring> * _appHostConfiguring;
    CSCoverSheetViewControllerBase<SBApplicationHosting> * _applicationHoster;
    unsigned long long  _clientSwitcherLayoutMode;
    UIView * _coverSheetBackgroundView;
    bool  _coverSheetComplicationRowHidden;
    UIView * _coverSheetFloatingView;
    bool  _coverSheetWallpaperFloatingLayerInlined;
    UIView * _coverSheetWallpaperView;
    unsigned long long  _fullscreenTransitionAnimationCount;
    bool  _handledInitialTransition;
    bool  _hasCommittedInContentReadyState;
    bool  _hasTransferredInitialTouches;
    id /* block */  _invalidationHandler;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _leadingTopButtonFrame;
    UIView * _scaleView;
    PRUISwitcherSceneClientSettingsDiffInspector * _sceneClientSettingsDiffInspector;
    UIWindow * _targetWindow;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _trailingTopButtonFrame;
    UIViewController<CSTraitsAwareOrientedAppHosting> * _traitsAwareViewController;
    BSUIVibrancyConfiguration * _vibrancyConfiguration;
}

@property (nonatomic, retain) NSArray *activatingTouches;
@property (nonatomic, retain) <CSTraitAwareAppHostConfiguring> *appHostConfiguring;
@property (nonatomic, readonly) CSCoverSheetViewControllerBase<SBApplicationHosting> *applicationHoster;
@property (nonatomic) unsigned long long clientSwitcherLayoutMode;
@property (nonatomic) UIView *coverSheetBackgroundView;
@property (getter=isCoverSheetComplicationRowHidden, nonatomic) bool coverSheetComplicationRowHidden;
@property (nonatomic) UIView *coverSheetFloatingView;
@property (getter=isCoverSheetWallpaperFloatingLayerInlined, nonatomic) bool coverSheetWallpaperFloatingLayerInlined;
@property (nonatomic) UIView *coverSheetWallpaperView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long fullscreenTransitionAnimationCount;
@property (nonatomic) bool handledInitialTransition;
@property (nonatomic) bool hasCommittedInContentReadyState;
@property (nonatomic) bool hasTransferredInitialTouches;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *hostedAppBundleIdentifier;
@property (nonatomic, readonly) bool hostedAppShouldHideHomeGrabberView;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } leadingTopButtonFrame;
@property (nonatomic, readonly) UIView *scaleView;
@property (nonatomic, readonly) PRUISwitcherSceneClientSettingsDiffInspector *sceneClientSettingsDiffInspector;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *targetWindow;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } trailingTopButtonFrame;
@property (nonatomic, retain) UIViewController<CSTraitsAwareOrientedAppHosting> *traitsAwareViewController;
@property (nonatomic, copy) BSUIVibrancyConfiguration *vibrancyConfiguration;

- (void).cxx_destruct;
- (void)_applicationHosterDidInvalidate;
- (bool)_canShowWhileLocked;
- (void)_dismissEntirely;
- (void)_dismissTier:(bool)arg1;
- (unsigned long long)_effectiveSceneClientLayoutMode;
- (void)_evaluateInitialTouchTransferActuation;
- (void)_evaluateInitialTransitionActivation;
- (id)_sceneIfExists;
- (void)_sendDismissEntirelyActionToScene;
- (void)_transitionScene:(id)arg1 toLayoutMode:(unsigned long long)arg2 animated:(bool)arg3;
- (void)_updateAppearanceWithClientLayoutMode:(unsigned long long)arg1 previousLayoutMode:(unsigned long long)arg2 transitionContext:(id)arg3;
- (void)_updateAppearanceWithoutAnimation;
- (void)_updateComplicationRowHiddenForSceneSettings:(id)arg1;
- (void)_updateFloatingLayerInlinedForSceneSettings:(id)arg1;
- (void)_updateLiveContentViewSpecificationForSceneSettings:(id)arg1;
- (void)_updateLiveFloatingViewSpecificationForSceneSettings:(id)arg1;
- (void)_updateLockVibrancyConfigurationForSceneSettings:(id)arg1;
- (void)_updateOverlayViewSpecificationForSceneSettings:(id)arg1;
- (void)_updateTopButtonLayoutForSceneSettings:(id)arg1;
- (id)activatingTouches;
- (void)addGrabberView:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (id)appHostConfiguring;
- (void)appendToHostedAppSceneSettings:(id)arg1;
- (id)applicationHoster;
- (bool)canHostAnApp;
- (unsigned long long)clientSwitcherLayoutMode;
- (void)conformsToCSApplicationHosting;
- (void)conformsToSBApplicationHosting;
- (id)coverSheetBackgroundView;
- (id)coverSheetFloatingView;
- (id)coverSheetWallpaperView;
- (void)dismissForHomeButton;
- (unsigned long long)fullscreenTransitionAnimationCount;
- (void)handleBottomEdgeGestureBegan:(id)arg1;
- (void)handleBottomEdgeGestureChanged:(id)arg1;
- (void)handleBottomEdgeGestureEnded:(id)arg1;
- (bool)handleEvent:(id)arg1;
- (bool)handledInitialTransition;
- (bool)handlesRotationIndependentOfCoverSheet;
- (bool)hasCommittedInContentReadyState;
- (bool)hasTransferredInitialTouches;
- (id)hostedAppBundleIdentifier;
- (id)hostedAppSceneHandle;
- (id)hostedAppSceneHandles;
- (bool)hostedAppShouldDeactivateAfterDisappearance;
- (bool)hostedAppShouldHideHomeGrabberView;
- (bool)hostedAppShouldInvalidateUponDeactivation;
- (bool)hostedAppShouldReactivateUponDestruction;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id /* block */)invalidationHandler;
- (bool)isCoverSheetComplicationRowHidden;
- (bool)isCoverSheetWallpaperFloatingLayerInlined;
- (bool)isHostingAnApp;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leadingTopButtonFrame;
- (void)loadView;
- (id)scaleView;
- (id)sceneClientSettingsDiffInspector;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (bool)sceneHandle:(id)arg1 didReceiveAction:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)setActivatingTouches:(id)arg1;
- (void)setAppHostConfiguring:(id)arg1;
- (void)setClientSwitcherLayoutMode:(unsigned long long)arg1;
- (void)setCoverSheetBackgroundView:(id)arg1;
- (void)setCoverSheetComplicationRowHidden:(bool)arg1;
- (void)setCoverSheetFloatingView:(id)arg1;
- (void)setCoverSheetWallpaperFloatingLayerInlined:(bool)arg1;
- (void)setCoverSheetWallpaperView:(id)arg1;
- (void)setFullscreenTransitionAnimationCount:(unsigned long long)arg1;
- (void)setHandledInitialTransition:(bool)arg1;
- (void)setHasCommittedInContentReadyState:(bool)arg1;
- (void)setHasTransferredInitialTouches:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLeadingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trailingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setTargetWindow:(id)arg1;
- (void)setTraitsAwareViewController:(id)arg1;
- (void)setVibrancyConfiguration:(id)arg1;
- (id)targetWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trailingTopButtonFrame;
- (id)traitsAwareViewController;
- (id)vibrancyConfiguration;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
