
@interface SBDeviceApplicationSceneViewController : SBApplicationSceneViewController <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneOverlayViewProviderDelegate, SBDeviceApplicationSceneStatusBarBreadcrumbProviderObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBDeviceApplicationSceneViewControlling, SBSceneViewDelegate, SBSceneViewStatusBarAssertionObserver, UIStatusBarStyleDelegate_SpringBoardOnly> {
    SBSceneViewStatusBarAssertion * _activeOverlayStatusBarAssertion;
    NSMutableArray * _activeOverlayViewProviders;
    struct { 
        unsigned int styleDelegateWants_statusBar_effectiveStyleOverridesForRequestedStyle_overrides : 1; 
        unsigned int styleDelegateWants_statusBar_effectiveBackgroundActivitiesForBackgroundActiviesWithIdentifiers : 1; 
        unsigned int styleDelegateWants_overriddenRequestedStyleFromStyle : 1; 
    }  _conformanceFlags;
    <SBDeviceApplicationSceneViewControllerDelegate> * _delegate;
    long long  _homeGrabberDisplayMode;
    MTLumaDodgePillSettings * _homeGrabberPillSettings;
    SBFHomeGrabberSettings * _homeGrabberSettings;
    SBSceneViewStatusBarAssertion * _insetForHomeAffordanceStatusBarAssertion;
    bool  _isInsetForHomeAffordance;
    <BSInvalidatable> * _liveContentDisableAssertion;
    NSMutableArray * _overlayViewProviders;
    SBSceneViewStatusBarAssertion * _placeholderStatusBarAssertion;
    <UIStatusBarStyleDelegate_SpringBoardOnly> * _realStatusBarStyleDelegate;
    bool  _rendersWhileLocked;
    UIApplicationSceneDeactivationAssertion * _resignActiveAssertion;
    NSString * _sceneMinificationFilter;
    bool  _sceneRendersAsynchronously;
    UITapGestureRecognizer * _scrollToTopGestureRecognizer;
    bool  _shouldDrawStatusBarInsideSceneView;
    UITapGestureRecognizer * _showDebugGestureRecognizer;
    UIStatusBar * _statusBar;
    NSHashTable * _statusBarAssertions;
    _SBStatusBarChanges * _statusBarChanges;
    SBStatusBarReusePool * _statusBarReusePool;
    BSUIOrientationTransformWrapperView * _statusBarTransformView;
    UIView * _statusBarWrapperView;
    TRAParticipant * _traitsParticipantForOverlayContainer;
}

@property (nonatomic) <SBApplicationSceneViewControllingStatusBarDelegate> *applicationSceneStatusBarDelegate;
@property (nonatomic, retain) UIView<SBApplicationSceneBackgroundView> *backgroundView;
@property (nonatomic, readonly) long long containerOrientation;
@property (nonatomic, readonly) long long contentOrientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentReferenceSize;
@property (nonatomic, retain) UIView *customContentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBDeviceApplicationSceneViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long homeGrabberDisplayMode;
@property (nonatomic, retain) MTLumaDodgePillSettings *homeGrabberPillSettings;
@property (nonatomic, readonly) SBHomeGrabberView *homeGrabberView;
@property (getter=isInsetForHomeAffordance, nonatomic) bool insetForHomeAffordance;
@property (nonatomic, readonly) long long overrideStatusBarStyle;
@property (nonatomic, retain) <SBScenePlaceholderContentContext> *placeholderContentContext;
@property (nonatomic) bool rendersWhileLocked;
@property (nonatomic, readonly) UIView *sceneContentView;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *sceneHandle;
@property (nonatomic, copy) NSString *sceneMinificationFilter;
@property (nonatomic) bool sceneRendersAsynchronously;
@property (nonatomic) bool sceneResizesHostedContext;
@property (getter=_sceneView, nonatomic, readonly) SBDeviceApplicationSceneView *sceneView;
@property (nonatomic) bool shouldDrawStatusBarInsideSceneView;
@property (nonatomic, readonly) double statusBarAlpha;
@property (getter=_statusBarAssertions, setter=_setStatusBarAssertions:, nonatomic, retain) NSHashTable *statusBarAssertions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)SB_conformsToSceneLayoutStatusBarAssertionProviding;
- (bool)_activeOverlaysWantResignActiveAssertion;
- (void)_addStatusBarMatchMoveAnimationForView:(id)arg1;
- (void)_applyBackgroundActivitiesToSuppress:(id)arg1 toSceneWithIdentifier:(id)arg2;
- (bool)_canShowWhileLocked;
- (void)_configureForCurrentSecureDisplayState;
- (void)_configureForSecureDisplay:(bool)arg1;
- (void)_configureStatusBarWithCurrentStyleRequest;
- (void)_createSceneOverlayViewProvidersIfNecessary;
- (void)_createStatusBar;
- (long long)_currentStatusBarStyle;
- (long long)_currentStatusBarStyleForPartWithIdentifier:(id)arg1;
- (void)_deactivateOverlayForViewProvider:(id)arg1;
- (void)_destroySceneOverlayViewProviders;
- (void)_didDisableSecureDisplay;
- (long long)_effectiveStyleForPartIdentifier:(id)arg1;
- (bool)_isApplicationStatusBarHidden;
- (void)_layoutStatusBar;
- (void)_recalculateResignActiveAssertionForActiveOverlays;
- (void)_relinquishResignActiveAssertion;
- (void)_removeStatusBar;
- (void)_removeStatusBarMatchMoveAnimation;
- (void)_setRealStatusBarStyleDelegate:(id)arg1;
- (void)_setStatusBarAssertions:(id)arg1;
- (void)_setStatusBarStyle:(long long)arg1;
- (void)_setStatusBarStyle:(long long)arg1 forPartWithIdentifier:(id)arg2;
- (void)_setupStatusBarStylesFromSceneHandle:(id)arg1;
- (bool)_shouldSuppressHomeGrabber;
- (id)_statusBarAssertions;
- (bool)_statusBarHasMatchMoveAnimation;
- (void)_statusBarScrollToTop:(id)arg1;
- (void)_statusBarShowDebug:(id)arg1;
- (void)_statusBarTapped:(id)arg1 type:(long long)arg2;
- (id)_underlyingStatusBarViewIfAvailable;
- (void)_updateStatusBarState;
- (void)_willEnableSecureDisplay;
- (void)activateOverlayForViewProvider:(id)arg1;
- (id)animationFactoryForImplicitTransitionFromMode:(long long)arg1 toMode:(long long)arg2 defaultFactory:(id)arg3;
- (id)backgroundActivitiesToSuppress;
- (id)backgroundView;
- (long long)bestHomeAffordanceOrientationForOrientation:(long long)arg1;
- (void)conformsToProtocolSBDeviceApplicationSceneViewControlling;
- (void)containerDidUpdateTraitsParticipant:(id)arg1;
- (double)currentStatusBarHeight;
- (void)deactivateOverlayForViewProvider:(id)arg1;
- (void)dealloc;
- (bool)definesPresentationContext;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
- (long long)homeGrabberDisplayMode;
- (id)homeGrabberPillSettings;
- (id)homeGrabberView;
- (id)initWithSceneHandle:(id)arg1;
- (id)initialTraitsParticipantForOverlayViewProvider:(id)arg1;
- (void)invalidate;
- (bool)isInsetForHomeAffordance;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (long long)leadingStatusBarStyle;
- (bool)overlayViewProviderIsHostedInNonrotatingWindow:(id)arg1;
- (bool)overlayViewProviderIsHostedInSecureWindow:(id)arg1;
- (bool)overlayViewProviderRendersWhileLocked:(id)arg1;
- (long long)overriddenRequestedStyleFromStyle:(long long)arg1;
- (id)prepareForContentRotation;
- (bool)rendersWhileLocked;
- (id)sceneContentView;
- (void)sceneHandle:(id)arg1 didChangeStatusBarAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)sceneHandle:(id)arg1 didChangeStatusBarParts:(long long)arg2;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (id)sceneMinificationFilter;
- (bool)sceneRendersAsynchronously;
- (bool)sceneResizesHostedContext;
- (void)sceneView:(id)arg1 changedPreferredStatusBarStyleTo:(long long)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeBackgroundActivitiesToSuppressTo:(id)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(bool)arg2 withAnimation:(long long)arg3;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 forPartWithIdentifier:(id)arg3;
- (void)setBackgroundView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(id /* block */)arg3;
- (void)setHomeGrabberDisplayMode:(long long)arg1;
- (void)setHomeGrabberPillSettings:(id)arg1;
- (void)setInsetForHomeAffordance:(bool)arg1;
- (void)setRendersWhileLocked:(bool)arg1;
- (void)setSceneMinificationFilter:(id)arg1;
- (void)setSceneRendersAsynchronously:(bool)arg1;
- (void)setSceneResizesHostedContext:(bool)arg1;
- (void)setShouldDrawStatusBarInsideSceneView:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldDrawStatusBarInsideSceneView;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;
- (id)statusBar:(id)arg1 effectiveBackgroundActivitiesForBackgroundActiviesWithIdentifiers:(id)arg2;
- (unsigned long long)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(unsigned long long)arg3;
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(unsigned long long)arg3;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;
- (void)statusBarAssertionDidInvalidate:(id)arg1;
- (void)statusBarAssertionDidUpdate:(id)arg1;
- (id)statusBarAssertionWithStatusBarHidden:(bool)arg1 atLevel:(unsigned long long)arg2;
- (id)statusBarAssertionWithStatusBarSettings:(id)arg1 atLevel:(unsigned long long)arg2;
- (void)statusBarBreadcrumbProviderDidUpdateDisplayProperties:(id)arg1;
- (long long)trailingStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willRotateFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 alongsideContainerView:(id)arg3 animated:(bool)arg4;
- (id)windowSceneForOverlayViewProvider:(id)arg1;

@end
