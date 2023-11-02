
@interface SBCoverSheetSecureAppEnvironmentViewController : UIViewController <BLSBacklightStateObserving, CSApplicationHosting, SBCoverSheetSlidingViewControllerContentViewController, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBSecureAppObserver, SBSystemApertureZStackPolicyAssistantDelegate, SBTraitsParticipantDelegate, SBTraitsSceneSettingsUpdater> {
    <BSInvalidatable> * _biometricMatchingAssertion;
    unsigned long long  _currentOrientationMask;
    <SBCoverSheetSecureAppEnvironmentViewControllerDelegate> * _delegate;
    TRAParticipant * _secureAppTraitsParticipant;
    SBTraitsSceneParticipantDelegate * _secureAppTraitsParticipantDelegateHelper;
    SBDashBoardHostedAppViewController * _secureAppViewController;
    SBSystemApertureZStackPolicyAssistant * _systemApertureZStackPolicyAssistant;
    SBFZStackParticipant * _zStackParticipant;
}

@property (nonatomic, readonly) bool contentOccludesBackground;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBCoverSheetSecureAppEnvironmentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBDashBoardHostedAppViewController *secureAppViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBFZStackParticipant *zStackParticipant;

- (void).cxx_destruct;
- (void)_acquireSecureAppTraitsParticipantIfNeeded;
- (void)_actuateTraitsParticipantResolution;
- (bool)_canShowWhileLocked;
- (id)_currentSecureAppAction;
- (void)_invalidateTraitsParticipantAndDelegateHelper;
- (id)_traitsArbiter;
- (void)_updateIdleWarnModeForAlwaysOnEnabled:(bool)arg1;
- (void)_updateSupportedOrientationsMaskForSecureAppAction;
- (void)_updateSystemApertureZStackPolicyAssistant;
- (void)appendDescriptionForParticipant:(id)arg1 withBuilder:(id)arg2 multilinePrefix:(id)arg3;
- (void)backlight:(id)arg1 didChangeAlwaysOnEnabled:(bool)arg2;
- (bool)canHostAnApp;
- (void)conformsToCSApplicationHosting;
- (void)conformsToSBApplicationHosting;
- (void)conformsToSBCoverSheetSlidingViewControllerContentViewController;
- (bool)contentOccludesBackground;
- (void)dealloc;
- (id)delegate;
- (void)didChangeSettingsForParticipant:(id)arg1 context:(id)arg2;
- (bool)handlesRotationIndependentOfCoverSheet;
- (void)homeGrabberViewDidReceiveClick:(id)arg1;
- (id)hostedAppSceneHandle;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)initWithSecureAppViewController:(id)arg1;
- (bool)isHostingAnApp;
- (bool)needsActuationForUpdateReasons:(long long)arg1;
- (id)participantAssociatedSceneIdentityTokens:(id)arg1;
- (id)participantAssociatedWindows:(id)arg1;
- (void)relinquishHiddenAssertionForHomeGrabber:(id)arg1 animated:(bool)arg2;
- (void)relinquishHomeGesture;
- (void)requestHomeGestureOwnership;
- (void)secureAppOfTypeDidBegin:(unsigned long long)arg1;
- (void)secureAppOfTypeDidTakeNewAssertion:(unsigned long long)arg1;
- (id)secureAppViewController;
- (void)setDelegate:(id)arg1;
- (void)setZStackParticipant:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)systemApertureZStackPolicyAssistantDidChange:(id)arg1;
- (void)takeHiddenAssertionForHomeGrabber:(id)arg1 animated:(bool)arg2;
- (id)traitsParticipantForSceneHandle:(id)arg1;
- (void)updateHomeGrabberHiddenAssertion:(bool)arg1;
- (void)updateOrientationSceneSettingsForParticipant:(id)arg1;
- (void)updatePreferencesForParticipant:(id)arg1 updater:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)zStackParticipant;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
