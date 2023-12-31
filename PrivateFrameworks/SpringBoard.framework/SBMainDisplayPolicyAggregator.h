
@interface SBMainDisplayPolicyAggregator : SBPolicyAggregator {
    SBLocalDefaults * _defaults;
    FBSDisplayIdentity * _displayIdentity;
    struct __CFBoolean { } * _hasCameraCapability;
    SBAlertItemsController * _override_alertItemsController;
    SBApplicationController * _override_applicationController;
    SBAssistantController * _override_assistantController;
    SBBannerManager * _override_bannerManager;
    SBCommandTabController * _override_commandTabController;
    SBConferenceManager * _override_conferenceManager;
    SBLockScreenManager * _override_lockScreenManager;
    SBLockStateAggregator * _override_lockStateAggregator;
    SBMainWorkspace * _override_mainWorkspace;
    MCProfileConnection * _override_profileConnection;
    SBRemoteTransientOverlaySessionManager * _override_remoteTransientOverlaySessionManager;
    SBSetupManager * _override_setupManager;
    SBTelephonyManager * _override_telephonyManager;
    bool  _storeDemoAppLockEnabled;
}

@property (getter=_alertItemsController, setter=_setAlertItemsController:, nonatomic, retain) SBAlertItemsController *alertItemsController;
@property (getter=_applicationController, setter=_setApplicationController:, nonatomic, retain) SBApplicationController *applicationController;
@property (getter=_assistantController, setter=_setAssistantController:, nonatomic, retain) SBAssistantController *assistantController;
@property (getter=_bannerManager, setter=_setBannerManager:, nonatomic, retain) SBBannerManager *bannerManager;
@property (getter=_commandTabController, setter=_setCommandTabController:, nonatomic, retain) SBCommandTabController *commandTabController;
@property (getter=_conferenceManager, setter=_setConferenceManager:, nonatomic, retain) SBConferenceManager *conferenceManager;
@property (getter=_lockScreenManager, setter=_setLockScreenManager:, nonatomic, retain) SBLockScreenManager *lockScreenManager;
@property (getter=_lockStateAggregator, setter=_setLockStateAggregator:, nonatomic, retain) SBLockStateAggregator *lockStateAggregator;
@property (getter=_mainWorkspace, setter=_setMainWorkspace:, nonatomic, retain) SBMainWorkspace *mainWorkspace;
@property (getter=_profileConnection, setter=_setProfileConnection:, nonatomic, retain) MCProfileConnection *profileConnection;
@property (getter=_remoteTransientOverlaySessionManager, setter=_setRemoteTransientOverlaySessionManager:, nonatomic, retain) SBRemoteTransientOverlaySessionManager *remoteTransientOverlaySessionManager;
@property (getter=_setupManager, setter=_setSetupManager:, nonatomic, retain) SBSetupManager *setupManager;
@property (getter=_telephonyManager, setter=_setTelephonyManager:, nonatomic, retain) SBTelephonyManager *telephonyManager;

- (void).cxx_destruct;
- (id)_alertItemsController;
- (bool)_allowsCapabilityAssistantEnabledWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityAssistantWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityCommandTabWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityControlCenterWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityCoverSheetSpotlightWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityCoverSheetWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityDismissCoverSheetWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityHomeScreenEditingWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityLiftToWakeWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityLockScreenBulletinWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityLockScreenCameraSupportedWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityLockScreenCameraWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityLockScreenControlCenterWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityLockScreenNotificationCenterWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityLockScreenTodayViewWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityLoginWindowWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityLogoutWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityPosterSwitcherWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityQuickNoteWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityScreenshotWithExplanation:(id*)arg1;
- (bool)_allowsCapabilitySendMediaCommandWithExplanation:(id*)arg1;
- (bool)_allowsCapabilitySpotlightWithExplanation:(id*)arg1;
- (bool)_allowsCapabilitySuggestedApplicationWithExplanation:(id*)arg1;
- (bool)_allowsCapabilitySystemGestureWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityTodayViewWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityUnlockToPluginSpecifiedApplicationWithExplanation:(id*)arg1;
- (bool)_allowsCapabilityVoiceControlWithExplanation:(id*)arg1;
- (bool)_allowsNotificationOrControlCenterWithExplanation:(id*)arg1;
- (id)_applicationController;
- (id)_assistantController;
- (id)_bannerManager;
- (id)_commandTabController;
- (id)_conferenceManager;
- (bool)_dictationInfoOnScreen;
- (bool)_hasFullySetUpUserWithExplanation:(id*)arg1;
- (id)_lockScreenManager;
- (id)_lockStateAggregator;
- (id)_mainWorkspace;
- (id)_profileConnection;
- (id)_remoteTransientOverlaySessionManager;
- (void)_setAlertItemsController:(id)arg1;
- (void)_setApplicationController:(id)arg1;
- (void)_setAssistantController:(id)arg1;
- (void)_setBannerManager:(id)arg1;
- (void)_setCommandTabController:(id)arg1;
- (void)_setConferenceManager:(id)arg1;
- (void)_setLockScreenManager:(id)arg1;
- (void)_setLockStateAggregator:(id)arg1;
- (void)_setMainWorkspace:(id)arg1;
- (void)_setProfileConnection:(id)arg1;
- (void)_setRemoteTransientOverlaySessionManager:(id)arg1;
- (void)_setSetupManager:(id)arg1;
- (void)_setTelephonyManager:(id)arg1;
- (id)_setupManager;
- (id)_telephonyManager;
- (bool)allowsCapability:(long long)arg1;
- (bool)allowsCapability:(long long)arg1 explanation:(id*)arg2;
- (bool)allowsTransitionRequest:(id)arg1;
- (id)initWithDefaults:(id)arg1 displayIdentity:(id)arg2;
- (void)reloadDemoDefaults;

@end
