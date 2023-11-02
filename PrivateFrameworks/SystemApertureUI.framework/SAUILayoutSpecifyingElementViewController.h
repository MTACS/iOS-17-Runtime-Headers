
@interface SAUILayoutSpecifyingElementViewController : UIViewController <SAActivityHosting, SAActivityHostingPrivate, SAAlertHosting, SAElementHosting, SAUIContentTransitioning, SAUIElementViewControlling, SAUIElementViewPreferencesAccepting, SAUILayoutHosting, SAUILayoutSpecifying, SAUILayoutSpecifyingOverridingParticipant, SAUILayoutSpecifyingPrivate, SAUITransitionTracking> {
    <SAAutomaticallyInvalidatable> * _alertAssertion;
    <SAAutomaticallyInvalidatable> * _alertingActivityAssertion;
    double  _blurProgress;
    UIImageView * _contentsTransitionShadowView;
    SAAutomaticallyInvalidatingAssertion * _cooldownAssertion;
    <SAElementViewProviding> * _elementViewProvider;
    <SAUILayoutHosting> * _layoutHost;
    long long  _layoutMode;
    NSHashTable * _observers;
    SAUIPreferredLayoutModeAssertion * _preferredLayoutModeAssertion;
    NSPointerArray * _preferredLayoutModeAssertions;
    long long  _previousLayoutMode;
    NSMapTable * _reasonsToAlertingActivityAssertions;
    double  _sensorObscuringShadowProgress;
    NSMutableDictionary * _transitionIDsToReasons;
}

@property (nonatomic, readonly) <SAAutomaticallyInvalidatable> *alertAssertion;
@property (nonatomic, readonly) <SAAutomaticallyInvalidatable> *alertingActivityAssertion;
@property (nonatomic, readonly) long long behaviorOverridingRole;
@property (getter=_containerView, nonatomic, readonly) UIView *containerView;
@property (getter=_contentView, nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SAElementViewProviding> *elementViewProvider;
@property (readonly) unsigned long long hash;
@property (getter=isInteractiveDismissalEnabled, nonatomic, readonly) bool interactiveDismissalEnabled;
@property (nonatomic) <SAUILayoutHosting> *layoutHost;
@property (nonatomic, readonly) long long layoutMode;
@property (nonatomic, readonly) <SAUILayoutModePreferring> *layoutModePreference;
@property (nonatomic, readonly) long long maximumSupportedLayoutMode;
@property (getter=isMinimalPresentationPossible, nonatomic, readonly) bool minimalPresentationPossible;
@property (nonatomic, readonly) long long minimumSupportedLayoutMode;
@property (getter=_isNotInCustomLayoutOrTransitionFromCustomLayout, nonatomic, readonly) bool notInCustomLayoutOrTransitionFromCustomLayout;
@property (getter=_isObstructedBySensorRegion, nonatomic, readonly) bool obstructedBySensorRegion;
@property (getter=_obstructedRegionSize, nonatomic, readonly) struct CGSize { double x1; double x2; } obstructedRegionSize;
@property (nonatomic, readonly) long long preferredLayoutMode;
@property (nonatomic, readonly) SAUIPreferredLayoutModeAssertion *preferredLayoutModeAssertion;
@property (nonatomic, readonly, copy) NSArray *preferredLayoutModeAssertions;
@property (getter=_previousLayoutMode, nonatomic, readonly) long long previousLayoutMode;
@property (getter=isRequestingMenuPresentation, nonatomic, readonly) bool requestingMenuPresentation;
@property (nonatomic) double sensorObscuringShadowProgress;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *temporallyOrderedAlertingActivityAssertions;
@property (getter=isTrackingTransition, nonatomic, readonly) bool trackingTransition;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_alertingActivityAssertionWithReason:(id)arg1 withPreferredLayoutMode:(long long)arg2;
- (bool)_axCollapseIfExpandedByUserInteraction;
- (void)_axRequestDiminishment;
- (bool)_canShowWhileLocked;
- (void)_configureAlertAssertionIfNecessary;
- (void)_configureTransitionShadowViewIfNecessary;
- (id)_containerView;
- (id)_contentView;
- (double)_defaultAlertingDuration;
- (id)_elementHost;
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(id /* block */)arg2;
- (bool)_expandToCustomLayoutModeFromUserActionIfPossible;
- (void)_insertSnapshotView:(id)arg1;
- (void)_invalidateElementPromotionPreferences;
- (void)_invalidatePreferredLayoutModeAssertionWithReason:(long long)arg1;
- (bool)_isNotInCustomLayoutOrTransitionFromCustomLayout;
- (bool)_isObstructedBySensorRegion;
- (void)_layoutTransitionShadowView;
- (struct CGSize { double x1; double x2; })_obstructedRegionSize;
- (id)_overrideWithPreference:(id)arg1;
- (long long)_previousLayoutMode;
- (void)_setBlurProgress:(double)arg1 forView:(id)arg2;
- (void)_setPreviousLayoutMode:(long long)arg1;
- (id /* block */)_updatePreferredLayoutModeAssertionWithPreference:(id)arg1;
- (void)addElementViewControllingObserver:(id)arg1;
- (id)alertAssertion;
- (id)alertWithReason:(id)arg1;
- (id)alertingActivityAssertion;
- (void)beginTrackingTransitionWithUniqueIdentifier:(id)arg1 reason:(id)arg2;
- (long long)behaviorOverridingRole;
- (double)concentricPaddingForProvidedView:(id)arg1 fromViewProvider:(id)arg2;
- (void)contentProviderWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 inContainerView:(id)arg2 transitionCoordinator:(id)arg3;
- (id)description;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })edgeOutsetsForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)elementRequestsNegativeResponse:(id)arg1;
- (void)elementRequestsSignificantUpdateTransition:(id)arg1;
- (id)elementViewProvider;
- (void)endTrackingTransitionWithUniqueIdentifier:(id)arg1;
- (bool)handleLongPress:(id)arg1;
- (bool)handleTap:(id)arg1;
- (id)initWithElementViewProvider:(id)arg1;
- (bool)isInteractiveDismissalEnabled;
- (bool)isInteractiveDismissalEnabledForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (bool)isMinimalPresentationPossible;
- (bool)isMinimalPresentationPossibleForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (bool)isRequestingMenuPresentation;
- (bool)isTrackingTransition;
- (bool)isTrackingTransitionWithReason:(id)arg1;
- (id)layoutHost;
- (long long)layoutMode;
- (long long)layoutModeForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (id)layoutModePreference;
- (id)layoutModePreferenceForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (long long)maximumSupportedLayoutMode;
- (long long)maximumSupportedLayoutModeForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (void)menuPresentationRequestDidChangeForLayoutSpecifier:(id)arg1;
- (long long)minimumSupportedLayoutMode;
- (long long)minimumSupportedLayoutModeForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (void)preferredEdgeOutsetsDidInvalidateForLayoutSpecifier:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeOutsetsForLayoutMode:(long long)arg1 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 maximumOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeOutsetsForLayoutMode:(long long)arg1 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 maximumOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3 forTargetWithOverrider:(id)arg4 isDefaultValue:(bool*)arg5;
- (long long)preferredLayoutMode;
- (id)preferredLayoutModeAssertion;
- (id)preferredLayoutModeAssertionForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (void)preferredLayoutModeDidInvalidateForLayoutSpecifier:(id)arg1;
- (void)preferredPromotionDidInvalidateForLayoutSpecifier:(id)arg1;
- (void)removeElementViewControllingObserver:(id)arg1;
- (double)sensorObscuringShadowProgress;
- (void)setLayoutHost:(id)arg1;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2 forTargetWithOverrider:(id)arg3;
- (void)setPreferredLayoutMode:(long long)arg1 reason:(long long)arg2;
- (void)setPreferredLayoutMode:(long long)arg1 reason:(long long)arg2 forTargetWithOverrider:(id)arg3;
- (void)setSensorObscuringShadowProgress:(double)arg1;
- (id)systemManagedAlertingActivityAssertionWithReason:(id)arg1;
- (id)systemManagedAlertingActivityAssertionWithReason:(id)arg1 preferredLayoutMode:(long long)arg2;
- (id)temporallyOrderedAlertingActivityAssertions;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end