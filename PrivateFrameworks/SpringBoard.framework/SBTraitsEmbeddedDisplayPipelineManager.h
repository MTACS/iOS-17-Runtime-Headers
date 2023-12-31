
@interface SBTraitsEmbeddedDisplayPipelineManager : SBTraitsPipelineManager <BKSAccelerometerDelegate, SBAmbientPresentationObserver, SBBacklightControllerObserver, SBLayoutStateTransitionObserver, SBTraitsParticipantDelegate, TRAArbiterInputsDataSource, TRAArbiterObserver> {
    BKSAccelerometer * _accelerometer;
    TRAParticipant * _activeOrientationParticipant;
    SBAmbientFollowsRawDeviceOrientationPolicySpecifier * _ambientFollowsRawDeviceOrientationSpecifier;
    TRAArbitrationAmbientPresentationInputs * _ambientPresentationInputs;
    unsigned long long  _arbiterRunningUpdatesCount;
    bool  _backlightIsOn;
    SBTraitsControlCenterInIsolationPolicySpecifier * _controlCenterIsolationSpecifier;
    SBTraitsCoverSheetFollowsDeviceOrientationPolicySpecifier * _coverSheetFollowsDeviceOrientationSpecifier;
    SBTraitsCoverSheetFollowsSecureAppOrientationPolicySpecifier * _coverSheetFollowsSecureAppOrientationSpecifier;
    SBTraitsCoverSheetInIsolationPolicySpecifier * _coverSheetIsolationSpecifier;
    TRAArbitrationInterfaceIdiomInputs * _deviceIdiomInputs;
    SBDeviceOrientationUpdateDeferralAssertion * _deviceUpdateDeferralAssertion;
    SBTraitsDockFollowsHomePolicySpecifier * _dockFollowsHomeSpecifier;
    SBTraitsHomeFollowsSwitcherRawPolicySpecifier * _homeFollowsSwitcherSpecifier;
    SBTraitsHomeInIsolationPolicySpecifier * _homeIsolationSpecifier;
    TRAArbitrationInputs * _inputs;
    bool  _isCoversheetPresented;
    SBTraitsInputsKeyboardFocusValidator * _keyboardFocusInputsValidator;
    TRAArbitrationKeyboardInputs * _keyboardInputs;
    long long  _lastNonFlatOrientation;
    SBTraitsInputsOrientationNonFlatOverrideValidator * _lastNonFlatOverrideInputsValidator;
    SBMedusa1oSettings * _medusaSettings;
    TRAArbitrationDeviceOrientationInputs * _orientationInputs;
    SBTraitsInputsOrientationLockValidator * _orientationLockInputsValidator;
    SBTraitsEmbeddedDisplayRolesAndDefaultPoliciesProvider * _rolesAndDefaultPoliciesProvider;
    <BSInvalidatable> * _stateCaptureInvalidatable;
    SBDeviceOrientationUpdateManager * _systemOrientationLockManager;
    BSContinuousMachTimer * _uiLockedTimer;
    TRAArbitrationUserInterfaceStyleInputs * _userInterfaceStyleInputs;
    SBOrientationLockManager * _userOrientationLockManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TRAArbitrationInputs *inputs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addLastNonFlatOverrideInputsValidatorIfNeeded;
- (long long)_bootOrientation;
- (void)_controlCenterDidDismiss:(id)arg1;
- (void)_controlCenterWillDismiss:(id)arg1;
- (void)_evaluateNonFlatOverrideNecessityForCurrentDeviceOrientation:(long long)arg1;
- (bool)_isBacklightOn;
- (id)_layoutCoordinator;
- (void)_noteCoverSheetDidDismiss;
- (void)_noteCoverSheetDidPresent;
- (void)_noteCoverSheetWillDismiss;
- (void)_noteCoverSheetWillPresent;
- (void)_noteInputsNeedUpdateAnimated:(bool)arg1 reason:(id)arg2;
- (void)_noteInputsNeedUpdateWithAnimationSettings:(id)arg1 fence:(id)arg2 reason:(id)arg3;
- (id)_orientationInputsForDeviceOrientation:(long long)arg1;
- (id)_orientationStateDescription;
- (void)_systemOrientationLockChanged:(id)arg1;
- (void)_updateInputs;
- (void)_updateOrientationEventsEnabledState;
- (void)_updateOrientationInputsDeferralAnimated:(bool)arg1;
- (void)_userOrientationLockChanged:(id)arg1;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;
- (void)ambientPresentationController:(id)arg1 didUpdateAmbientDisplayStyle:(long long)arg2;
- (void)ambientPresentationController:(id)arg1 didUpdatePresented:(bool)arg2;
- (void)ambientPresentationController:(id)arg1 willUpdatePresented:(bool)arg2;
- (id)ambientPresentationStageRoles;
- (void)arbiter:(id)arg1 didCompleteUpdateWithContext:(id)arg2;
- (void)arbiter:(id)arg1 willBeginUpdateWithContext:(id)arg2;
- (void)backlightController:(id)arg1 willAnimateBacklightToFactor:(float)arg2 source:(long long)arg3;
- (void)dealloc;
- (id)defaultOrientationAnimationSettingsAnimatable:(bool)arg1;
- (void)didChangeSettingsForParticipant:(id)arg1 context:(id)arg2;
- (id)initWithArbiter:(id)arg1 sceneDelegate:(id)arg2;
- (id)inputs;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (id)orientationStageRoles;
- (void)setKeyboardFocusContext:(id)arg1;
- (void)setupDefaultPipelineForArbiter:(id)arg1;
- (void)startListeningForLockScreenUIPresentations;
- (void)startObservingAmbientPresentation;
- (void)startObservingLayoutStateTransitions;
- (void)updatePreferencesForParticipant:(id)arg1 updater:(id)arg2;
- (void)userInterfaceStyleDidUpdateWithAnimationSettings:(id)arg1 fence:(id)arg2;
- (id)userInterfaceStyleStageRoles;
- (id)zOrderStageRoles;

@end
