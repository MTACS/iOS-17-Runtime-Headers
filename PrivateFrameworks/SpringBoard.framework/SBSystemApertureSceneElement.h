
@interface SBSystemApertureSceneElement : NSObject <FBSceneLayerManagerObserver, FBSceneObserver, SAActivityBehavior, SAAlertBehavior, SAUIContentTransitioning, SAUIElementViewProviding, SBBacklightControllerObserver, SBButtonEventsHandler, SBPresentableElement, SBSystemActionCoordinatedElementPreviewing, SBSystemActionElementPreviewing, SBSystemApertureBackgroundActivitiesRepresenting, SBSystemApertureContextAccepting, SBSystemApertureContextProviding, SBSystemApertureElementAssertionObserving, SBSystemApertureElementVisibilityObserving, SBSystemApertureGestureCustomizing, SBSystemApertureLayoutCustomizing, SBSystemApertureSceneElementPlaceholderWrapperViewDelegate> {
    NSHashTable * __layoutObservers;
    bool  _activated;
    unsigned long long  _activationAttributes;
    <BSInvalidatable> * _activeApplicationElementAssertion;
    <SAActivityHosting> * _activityHost;
    <SAAlertHosting> * _alertHost;
    SBUISystemApertureAlertingAction * _alertingAction;
    <SAAutomaticallyInvalidatable> * _alertingActivityAssertion;
    long long  _alertingSource;
    bool  _alwaysAllowTapToAppForBodyTaps;
    SBApplication * _associatedApplication;
    SBDeviceApplicationSceneHandle * _associatedApplicationSceneHandle;
    bool  _backlightIsOrWillBecomeActive;
    NSString * _clientIdentifier;
    id /* block */  _clientInvalidationRequestHandler;
    SBSystemApertureSceneElementConfiguration * _configuration;
    id /* block */  _deactivationHandler;
    NSMutableArray * _deferredSceneActions;
    SBSystemApertureSceneElementAccessoryView * _detachedMinimalView;
    int  _elementAppearState;
    <SAElementHosting> * _elementHost;
    SAAssertion * _elementHostPrefersSuppressionAssertion;
    bool  _expanding;
    <SBSystemApertureGestureHandling> * _gestureHandler;
    bool  _hasBeenRemoved;
    bool  _hasCompletedInitialPresentation;
    bool  _hasHandledLaunchAction;
    long long  _initialPreferredLayoutMode;
    bool  _invalidatingForMoveToPlaceholderElement;
    <SBSystemApertureSceneElementLaunchActionHandling> * _launchActionHandler;
    unsigned long long  _layoutAxis;
    <SAUILayoutHosting> * _layoutHost;
    long long  _layoutMode;
    SBSystemApertureSceneElementAccessoryView * _leadingView;
    SBSystemApertureSceneElementPlaceholderWrapperView * _leadingWrapperView;
    SBSystemApertureSceneElementAccessoryView * _minimalView;
    SBSystemApertureSceneElementPlaceholderWrapperView * _minimalWrapperView;
    long long  _mostRecentLayoutModeChangeReason;
    unsigned long long  _obstructionEdge;
    <SBSystemApertureSceneElementPlaceholderContentProviding> * _placeholderContentProvider;
    <SBSystemAperturePlatformElementHosting> * _platformElementHost;
    id /* block */  _postSceneActivationPlaceholderElementFoundHandler;
    id /* block */  _postSceneActivationPlaceholderTest;
    <BNPresentable> * _presentable;
    bool  _previewing;
    SBSystemActionElementPreviewingCoordinator * _previewingCoordinator;
    bool  _prominent;
    bool  _readyForPresentation;
    id /* block */  _readyHandler;
    bool  _requiresSuppressionFromSystemAperture;
    FBScene * _scene;
    id /* block */  _sceneInvalidationHandler;
    SBSystemApertureSceneElementScenePresenterView * _sceneView;
    <SAAutomaticallyInvalidatable> * _sessionMonitorAssertion;
    SBSystemApertureSettings * _settings;
    <SBSystemApertureBackgroundActivitiesSuppressing> * _statusBarBackgroundActivitiesSuppresser;
    <BSInvalidatable> * _statusBarStyleOverridesSuppressionAssertion;
    long long  _systemApertureCustomLayout;
    SBSystemApertureSceneElementAccessoryView * _trailingView;
    SBSystemApertureSceneElementPlaceholderWrapperView * _trailingWrapperView;
    id /* block */  _transitionRequestHandler;
    bool  _urgent;
    NSMutableDictionary * _userInfo;
    bool  _wantsLayoutPassForClientUpdate;
    bool  _wantsSpecialFlowerBoundsResizingAnimationForWallet;
}

@property (nonatomic, readonly) NSHashTable *_layoutObservers;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _obstructedAreaFrame;
@property (getter=isActivated, nonatomic) bool activated;
@property (nonatomic, readonly) unsigned long long activationAttributes;
@property (nonatomic, retain) <BSInvalidatable> *activeApplicationElementAssertion;
@property (nonatomic) <SAActivityHosting> *activityHost;
@property (getter=isAffiliatedWithSessionMonitor, nonatomic, readonly) bool affiliatedWithSessionMonitor;
@property (nonatomic) <SAAlertHosting> *alertHost;
@property (getter=isAlerting, nonatomic) bool alerting;
@property (getter=_alertingAction, setter=_setAlertingAction:, nonatomic, retain) SBUISystemApertureAlertingAction *alertingAction;
@property (getter=_alertingActivityAssertion, nonatomic, readonly) <SAAutomaticallyInvalidatable> *alertingActivityAssertion;
@property (nonatomic, readonly) long long alertingSource;
@property (nonatomic) bool alwaysAllowTapToAppForBodyTaps;
@property (nonatomic, retain) SBApplication *associatedApplication;
@property (nonatomic, retain) SBDeviceApplicationSceneHandle *associatedApplicationSceneHandle;
@property (nonatomic) bool backlightIsOrWillBecomeActive;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, copy) id /* block */ clientInvalidationRequestHandler;
@property (nonatomic, copy) SBSystemApertureSceneElementConfiguration *configuration;
@property (nonatomic, readonly) long long customLayoutRequestingSpecialFlowerBoundsResizingAnimation;
@property (getter=isDeactivating, nonatomic, readonly) bool deactivating;
@property (nonatomic, copy) id /* block */ deactivationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *deferredSceneActions;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBSystemApertureSceneElementAccessoryView *detachedMinimalView;
@property (nonatomic, readonly) <SAElement> *element;
@property (nonatomic) int elementAppearState;
@property (nonatomic) <SAElementHosting> *elementHost;
@property (nonatomic, retain) SAAssertion *elementHostPrefersSuppressionAssertion;
@property (nonatomic, readonly, copy) NSString *elementIdentifier;
@property (nonatomic) bool elementProviderPrefersSuppression;
@property (getter=isExpanding, nonatomic, readonly) bool expanding;
@property (nonatomic) <SBSystemApertureGestureHandling> *gestureHandler;
@property (nonatomic) bool hasBeenRemoved;
@property (nonatomic) bool hasCompletedInitialPresentation;
@property (nonatomic) bool hasHandledLaunchAction;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long initialPreferredLayoutMode;
@property (getter=isInteractiveDismissalEnabled, nonatomic, readonly) bool interactiveDismissalEnabled;
@property (nonatomic) bool invalidatingForMoveToPlaceholderElement;
@property (nonatomic, readonly) UIColor *keyColor;
@property (nonatomic) <SBSystemApertureSceneElementLaunchActionHandling> *launchActionHandler;
@property (nonatomic) unsigned long long layoutAxis;
@property (nonatomic) <SAUILayoutHosting> *layoutHost;
@property (nonatomic, readonly) long long layoutMode;
@property (nonatomic, retain) SBSystemApertureSceneElementAccessoryView *leadingView;
@property (nonatomic, retain) SBSystemApertureSceneElementPlaceholderWrapperView *leadingWrapperView;
@property (nonatomic, readonly) long long maximumSupportedLayoutMode;
@property (getter=isMinimalPresentationPossible, nonatomic, readonly) bool minimalPresentationPossible;
@property (nonatomic, retain) SBSystemApertureSceneElementAccessoryView *minimalView;
@property (nonatomic, retain) SBSystemApertureSceneElementPlaceholderWrapperView *minimalWrapperView;
@property (nonatomic, readonly) long long minimumSupportedLayoutMode;
@property (nonatomic) long long mostRecentLayoutModeChangeReason;
@property (nonatomic) unsigned long long obstructionEdge;
@property (nonatomic) <SBSystemApertureSceneElementPlaceholderContentProviding> *placeholderContentProvider;
@property (nonatomic) <SBSystemAperturePlatformElementHosting> *platformElementHost;
@property (nonatomic, copy) id /* block */ postSceneActivationPlaceholderElementFoundHandler;
@property (nonatomic, copy) id /* block */ postSceneActivationPlaceholderTest;
@property (nonatomic, readonly) long long preferredLayoutMode;
@property (nonatomic, retain) <BNPresentable> *presentable;
@property (nonatomic, readonly) bool preventsSwipeToHide;
@property (getter=isPreviewing, nonatomic, readonly) bool previewing;
@property (nonatomic, readonly) SBSystemActionElementPreviewingCoordinator *previewingCoordinator;
@property (getter=isProminent, nonatomic) bool prominent;
@property (getter=isReadyForPresentation, nonatomic) bool readyForPresentation;
@property (nonatomic, readonly) id /* block */ readyHandler;
@property (nonatomic, readonly, copy) NSSet *representedBackgroundActivityIdentifiers;
@property (getter=isRequestingMenuPresentation, nonatomic, readonly) bool requestingMenuPresentation;
@property (nonatomic) bool requiresSuppressionFromSystemAperture;
@property (nonatomic, retain) FBScene *scene;
@property (nonatomic, copy) id /* block */ sceneInvalidationHandler;
@property (nonatomic, retain) SBSystemApertureSceneElementScenePresenterView *sceneView;
@property (getter=_sessionMonitorAssertion, nonatomic, readonly) <SAAutomaticallyInvalidatable> *sessionMonitorAssertion;
@property (nonatomic, readonly) SBSystemApertureSettings *settings;
@property (nonatomic) <SBSystemApertureBackgroundActivitiesSuppressing> *statusBarBackgroundActivitiesSuppresser;
@property (nonatomic, retain) <BSInvalidatable> *statusBarStyleOverridesSuppressionAssertion;
@property (readonly) Class superclass;
@property (getter=isSuppressed, nonatomic) bool suppressed;
@property (nonatomic, readonly) long long systemApertureCustomLayout;
@property (nonatomic, readonly) long long systemApertureLayoutCustomizingOptions;
@property (nonatomic, retain) SBSystemApertureSceneElementAccessoryView *trailingView;
@property (nonatomic, retain) SBSystemApertureSceneElementPlaceholderWrapperView *trailingWrapperView;
@property (nonatomic, readonly) id /* block */ transitionRequestHandler;
@property (getter=isUrgent, nonatomic, readonly) bool urgent;
@property (nonatomic, readonly) NSMutableDictionary *userInfo;
@property (nonatomic) bool wantsLayoutPassForClientUpdate;
@property (nonatomic) bool wantsSpecialFlowerBoundsResizingAnimationForWallet;

+ (id)activeElements;
+ (id)activePlaceholderElementPassingTest:(id /* block */)arg1;
+ (void)addActiveElement:(id)arg1;
+ (void)addElementReadyForPresentation:(id)arg1;
+ (id)defaultAnimationParameters;
+ (id)elementsReadyForPresentation;
+ (void)hostedScenesDidChange;
+ (void)removeActiveElement:(id)arg1;
+ (void)removeElementReadyForPresentation:(id)arg1;
+ (id)sceneWorkspace;
+ (id)sceneWorkspaceIdentifier;
+ (id)scenesForBacklightSession;

- (void).cxx_destruct;
- (void)_acquireOrUpdateAppStatusBarSessionsAssertionIfNeeded;
- (bool)_activateCorrespondingAppSceneIfPossible;
- (void)_activateSceneWithInitialOtherSettings:(id)arg1 clientSettings:(id)arg2 initialLayoutMode:(long long)arg3;
- (void)_addActivationAttribute:(unsigned long long)arg1;
- (id)_alertingAction;
- (id)_alertingActivityAssertion;
- (void)_applyTransitionParameters:(id)arg1;
- (id)_bundleIdForLaunchTarget;
- (bool)_calculateRequiresSuppressionFromSystemAperture;
- (bool)_canShowWhileLocked;
- (long long)_clientLayoutModeForLayoutMode:(long long)arg1;
- (void)_commonInitWithScene:(id)arg1 placeholderContentProvider:(id)arg2 statusBarBackgroundActivitiesSuppresser:(id)arg3 readyForPresentationHandler:(id /* block */)arg4;
- (unsigned long long)_effectivePresentationBehaviors;
- (id)_existingAlertingAssertion;
- (void)_finishDeactivationIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSceneViewInContainerView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameInSceneContainerForView:(id)arg1;
- (bool)_handleAction:(id)arg1;
- (void)_handleAlertingAssertionRequest;
- (bool)_handleLaunchAction;
- (bool)_hasActivationAttribute:(unsigned long long)arg1;
- (bool)_hasPresentationBehavior:(unsigned long long)arg1;
- (id)_inferredElementIdentifier;
- (bool)_isAssociatedWithBundleIdentifier:(id)arg1;
- (bool)_isAssociatedWithSceneWithPersistenceIdentifier:(id)arg1;
- (bool)_isValidAlertingSource:(long long)arg1;
- (void)_layoutHostMayNotPerformLayoutUpdate;
- (long long)_layoutModeForClientLayoutMode:(long long)arg1;
- (id)_layoutObservers;
- (void)_layoutSceneViewInContainerView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_obstructedAreaFrame;
- (bool)_ownsScene;
- (id)_proposeTransitionParametersForTransitionToFrameInSceneView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludingParametersAssociatedWithReasons:(unsigned long long)arg2 usingCurrentAnimationParameters:(bool)arg3;
- (bool)_requiresForegroundScene;
- (id)_sessionMonitorAssertion;
- (void)_setAlertingAction:(id)arg1;
- (void)_setupSceneViewInContainerView:(id)arg1;
- (bool)_shouldHandleLaunchAction;
- (struct CGSize { double x1; double x2; })_sizeForSceneView;
- (bool)_supportsMenuPresentations;
- (bool)_tryMovingToPlaceholderElementWithClientSettingsDiff:(id)arg1 forScene:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_updateActiveElementsAndAssociatedApplication;
- (void)_updateAlertAssertionIfNecessary;
- (void)_updateMutableSceneSettings:(id)arg1 withParameters:(id)arg2;
- (void)_updatePortalViews;
- (void)_updateReadyForPresentationIfNeeded;
- (unsigned long long)_updateReasonsForTransitionWithProposedParameters:(id)arg1;
- (unsigned long long)_updateReasonsForTransitionWithProposedParameters:(id)arg1 excludingReasons:(unsigned long long)arg2;
- (bool)_updateRequiresSuppressionFromSystemAperture;
- (void)_updateScene:(id)arg1 activatingIfNeeded:(bool)arg2 settingsWithTransitionBlock:(id /* block */)arg3;
- (void)_updateSceneBackgroundStateIfNeeded;
- (void)_updateSceneWithTransitionParameters:(id)arg1;
- (bool)acceptsFullScreenTransitionFromSceneWithIdentifier:(id)arg1 ofBundleId:(id)arg2;
- (void)activate;
- (void)activateWithInitialOtherClientSettings:(id)arg1;
- (void)activateWithInitialOtherSceneSettings:(id)arg1;
- (void)activateWithInitialOtherSceneSettings:(id)arg1 clientSettings:(id)arg2 transitionRequestHandler:(id /* block */)arg3;
- (void)activateWithPostActivationPlaceholderTest:(id /* block */)arg1 foundPlaceholderHandler:(id /* block */)arg2;
- (unsigned long long)activationAttributes;
- (id)activeApplicationElementAssertion;
- (id)activityHost;
- (void)addElementLayoutSpecifierObserver:(id)arg1;
- (id)alertHost;
- (long long)alertingSource;
- (bool)alwaysAllowTapToAppForBodyTaps;
- (id)associatedApplication;
- (id)associatedApplicationSceneHandle;
- (void)backlightController:(id)arg1 didTransitionToBacklightState:(long long)arg2 source:(long long)arg3;
- (void)backlightController:(id)arg1 willTransitionToBacklightState:(long long)arg2 source:(long long)arg3;
- (bool)backlightIsOrWillBecomeActive;
- (id)clientIdentifier;
- (id /* block */)clientInvalidationRequestHandler;
- (double)concentricPaddingOverrideForView:(id)arg1 inLayoutMode:(long long)arg2;
- (id)configuration;
- (void)contentProviderWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 inContainerView:(id)arg2 transitionCoordinator:(id)arg3;
- (long long)customLayoutRequestingSpecialFlowerBoundsResizingAnimation;
- (void)deactivateWhenRemovedWithHandler:(id /* block */)arg1;
- (id /* block */)deactivationHandler;
- (void)dealloc;
- (id)deferredSceneActions;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)detachedMinimalView;
- (id)element;
- (void)element:(id)arg1 visibilityDidChange:(bool)arg2;
- (void)element:(id)arg1 visibilityWillChange:(bool)arg2;
- (int)elementAppearState;
- (id)elementHost;
- (id)elementHostPrefersSuppressionAssertion;
- (id)elementIdentifier;
- (id)gestureHandler;
- (bool)handleElementViewEvent:(long long)arg1;
- (bool)handleHeadsetButtonPress:(bool)arg1;
- (bool)handleHomeButtonDoublePress;
- (bool)handleHomeButtonLongPress;
- (bool)handleHomeButtonPress;
- (bool)handleLockButtonPress;
- (bool)handleVoiceCommandButtonPress;
- (bool)handleVolumeDownButtonPress;
- (bool)handleVolumeUpButtonPress;
- (bool)hasActivityBehavior;
- (bool)hasAlertBehavior;
- (bool)hasBeenRemoved;
- (bool)hasCompletedInitialPresentation;
- (bool)hasHandledLaunchAction;
- (id)initWithScene:(id)arg1 placeholderContentProvider:(id)arg2 statusBarBackgroundActivitiesSuppresser:(id)arg3 readyForPresentationHandler:(id /* block */)arg4;
- (id)initWithScene:(id)arg1 statusBarBackgroundActivitiesSuppresser:(id)arg2 readyForPresentationHandler:(id /* block */)arg3;
- (id)initWithSceneSpecification:(id)arg1 sceneClientIdentity:(id)arg2 statusBarBackgroundActivitiesSuppresser:(id)arg3 readyForPresentationHandler:(id /* block */)arg4;
- (long long)initialPreferredLayoutMode;
- (void)invalidate;
- (bool)invalidatingForMoveToPlaceholderElement;
- (bool)isActivated;
- (bool)isAffiliatedWithSessionMonitor;
- (bool)isAlerting;
- (bool)isBiometricKit;
- (bool)isDeactivating;
- (bool)isExpanding;
- (bool)isFixedInOrientation;
- (bool)isInteractiveDismissalEnabled;
- (bool)isMinimalPresentationPossible;
- (bool)isPreviewing;
- (bool)isProminent;
- (bool)isReadyForPresentation;
- (bool)isRequestingLayoutUpdateForHostedClient;
- (bool)isRequestingMenuPresentation;
- (bool)isUrgent;
- (id)keyColor;
- (id)launchActionHandler;
- (unsigned long long)layoutAxis;
- (id)layoutHost;
- (long long)layoutMode;
- (id)leadingView;
- (id)leadingWrapperView;
- (long long)maximumSupportedLayoutMode;
- (id)minimalView;
- (id)minimalWrapperView;
- (long long)minimumSupportedLayoutMode;
- (long long)mostRecentLayoutModeChangeReason;
- (unsigned long long)obstructionEdge;
- (bool)overridesConcentricPaddingForView:(id)arg1 inLayoutMode:(long long)arg2;
- (id)placeholderContentProvider;
- (void)placeholderWrapperViewDidChangeContentView:(id)arg1;
- (id)platformElementHost;
- (void)pop;
- (id /* block */)postSceneActivationPlaceholderElementFoundHandler;
- (id /* block */)postSceneActivationPlaceholderTest;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeOutsetsForLayoutMode:(long long)arg1 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 maximumOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (long long)preferredLayoutMode;
- (id)presentable;
- (id)previewingCoordinator;
- (id /* block */)readyHandler;
- (void)removeElementLayoutSpecifierObserver:(id)arg1;
- (id)representedBackgroundActivityIdentifiers;
- (id)requestAlertingAssertion;
- (bool)requiresSuppressionFromSystemAperture;
- (id)scene;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (id)sceneClientSettings;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (id /* block */)sceneInvalidationHandler;
- (void)sceneLayerManagerDidStartTrackingLayers:(id)arg1;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)arg1;
- (void)sceneLayerManagerDidUpdateLayers:(id)arg1;
- (id)sceneSettings;
- (id)sceneView;
- (void)setActivated:(bool)arg1;
- (void)setActiveApplicationElementAssertion:(id)arg1;
- (void)setActivityHost:(id)arg1;
- (void)setAffiliatedWithSessionMonitor:(bool)arg1;
- (void)setAlertHost:(id)arg1;
- (void)setAlerting:(bool)arg1;
- (void)setAlwaysAllowTapToAppForBodyTaps:(bool)arg1;
- (void)setAssociatedApplication:(id)arg1;
- (void)setAssociatedApplicationSceneHandle:(id)arg1;
- (void)setBacklightIsOrWillBecomeActive:(bool)arg1;
- (void)setClientInvalidationRequestHandler:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDeactivationHandler:(id /* block */)arg1;
- (void)setDeferredSceneActions:(id)arg1;
- (void)setDetachedMinimalView:(id)arg1;
- (void)setElementAppearState:(int)arg1;
- (void)setElementHost:(id)arg1;
- (void)setElementHostPrefersSuppressionAssertion:(id)arg1;
- (void)setElementProviderPrefersSuppression:(bool)arg1;
- (void)setExpanding:(bool)arg1;
- (void)setGestureHandler:(id)arg1;
- (void)setHasBeenRemoved:(bool)arg1;
- (void)setHasCompletedInitialPresentation:(bool)arg1;
- (void)setHasHandledLaunchAction:(bool)arg1;
- (void)setInitialPreferredLayoutMode:(long long)arg1;
- (void)setInvalidatingForMoveToPlaceholderElement:(bool)arg1;
- (void)setLaunchActionHandler:(id)arg1;
- (void)setLayoutAxis:(unsigned long long)arg1;
- (void)setLayoutHost:(id)arg1;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2;
- (void)setLeadingView:(id)arg1;
- (void)setLeadingWrapperView:(id)arg1;
- (void)setMinimalView:(id)arg1;
- (void)setMinimalWrapperView:(id)arg1;
- (void)setMostRecentLayoutModeChangeReason:(long long)arg1;
- (void)setObstructionEdge:(unsigned long long)arg1;
- (void)setPlaceholderContentProvider:(id)arg1;
- (void)setPlatformElementHost:(id)arg1;
- (void)setPostSceneActivationPlaceholderElementFoundHandler:(id /* block */)arg1;
- (void)setPostSceneActivationPlaceholderTest:(id /* block */)arg1;
- (void)setPresentable:(id)arg1;
- (void)setPreviewing:(bool)arg1;
- (void)setProminent:(bool)arg1;
- (void)setReadyForPresentation:(bool)arg1;
- (void)setRequiresSuppressionFromSystemAperture:(bool)arg1;
- (void)setScene:(id)arg1;
- (void)setSceneInvalidationHandler:(id /* block */)arg1;
- (void)setSceneView:(id)arg1;
- (void)setStatusBarBackgroundActivitiesSuppresser:(id)arg1;
- (void)setStatusBarStyleOverridesSuppressionAssertion:(id)arg1;
- (void)setTrailingView:(id)arg1;
- (void)setTrailingWrapperView:(id)arg1;
- (void)setUrgent:(bool)arg1;
- (void)setWantsLayoutPassForClientUpdate:(bool)arg1;
- (void)setWantsSpecialFlowerBoundsResizingAnimationForWallet:(bool)arg1;
- (id)settings;
- (bool)shouldSuppressElementWhileOnCoversheet;
- (bool)shouldSuppressElementWhilePresentingAppWithBundleId:(id)arg1;
- (bool)shouldSuppressElementWhilePresentingNoAppsOrScenes;
- (bool)shouldSuppressElementWhilePresentingSceneWithIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsSize:(struct CGSize { double x1; double x2; })arg1 forProvidedView:(id)arg2 inLayoutMode:(long long)arg3;
- (id)statusBarBackgroundActivitiesSuppresser;
- (id)statusBarStyleOverridesSuppressionAssertion;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)systemApertureCustomLayout;
- (void)systemApertureElementAssertionAcquired;
- (void)systemApertureElementAssertionInvalidated;
- (long long)systemApertureLayoutCustomizingOptions;
- (id)trailingView;
- (id)trailingWrapperView;
- (id /* block */)transitionRequestHandler;
- (void)updateWithConnectedScene:(id)arg1 configuration:(id)arg2 elementAssertionAcquisitionHandler:(id /* block */)arg3;
- (id)userInfo;
- (id)viewProvider;
- (bool)wantsLayoutPassForClientUpdate;
- (bool)wantsSpecialFlowerBoundsResizingAnimationForWallet;

@end
