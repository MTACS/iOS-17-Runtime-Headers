
@interface SBSystemShellExtendedDisplayControllerPolicy : NSObject <PTSettingsKeyObserver, SBExternalDisplayServiceObserver, SBMousePointerHardwareConnectionObserver, SBSceneHostingDisplayControllerPolicy> {
    double  _contentScale;
    FBScene * _currentScene;
    bool  _didConnectToRequiredDevicesDuringTimerWindow;
    SBSceneHostingDisplayController * _displayController;
    BSAtomicSignal * _displayDisconnectSignal;
    FBSDisplayIdentity * _displayIdentity;
    SBSDisplayModeSettings * _displayModeSettings;
    <BSDefaultObserver> * _displayModeSettingsToken;
    SBDisplayScaleMapping * _displayScaleMapping;
    SBExternalDisplayDefaults * _externalDisplayDefaults;
    <BSDefaultObserver> * _externalDisplayDefaultsToken;
    SBExternalDisplayService * _externalDisplayService;
    FBSceneManager * _fbSceneManager;
    FBSDisplayConfiguration * _lastPresentationUpdateDisplayConfiguration;
    bool  _metRuntimeRequirementsAtLeastOnce;
    SBMousePointerManager * _mousePointerManager;
    unsigned long long  _previouslyReceivedDeactivationReasons;
    SBExternalDisplayRuntimeAvailabilitySettings * _runtimeAvailabilitySettings;
    BSContinuousMachTimer * _timerForAttachedDevicesToAffectDisplayAssertion;
    bool  _userMirroringPreference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_areRuntimeAvailabilityRequirementsMet;
- (long long)_currentRuntimeMask;
- (id)_fetchOrCreateSceneWithDisplayConfiguration:(id)arg1 deactivationReasons:(unsigned long long)arg2 sceneManager:(id)arg3;
- (void)_hardwareAvailabilityChanged;
- (void)_keyboardAvailabilityChanged:(id)arg1;
- (bool)_wantsControlOfDisplay;
- (id)assertionPreferencesForDisplay:(id)arg1 displayConfiguration:(id)arg2;
- (void)connectToDisplayController:(id)arg1 displayConfiguration:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)displayAssertionDeactivationReasons:(id)arg1;
- (unsigned long long)displayAssertionPriorityLevel:(id)arg1;
- (void)displayController:(id)arg1 didBeginTransaction:(id)arg2 sceneManager:(id)arg3 displayConfiguration:(id)arg4 deactivationReasons:(unsigned long long)arg5;
- (void)displayController:(id)arg1 didGainControlOfDisplayWithSceneManager:(id)arg2;
- (void)displayController:(id)arg1 sceneManager:(id)arg2 didLoseControlOfDisplayWithDeactivationReasons:(unsigned long long)arg3;
- (void)displayController:(id)arg1 sceneManager:(id)arg2 didReceiveNewDeactivationReasons:(unsigned long long)arg3;
- (void)displayController:(id)arg1 updatePresentationWithSceneManager:(id)arg2 displayConfiguration:(id)arg3 completion:(id /* block */)arg4;
- (void)displayControllerDidDisconnect:(id)arg1 sceneManager:(id)arg2;
- (void)displayControllerWillDisconnect:(id)arg1 sceneManager:(id)arg2;
- (id)displayPreferencesForDisplayController:(id)arg1;
- (void)externalDisplayServiceDidUpdatePreferredDisplayArrangement:(id)arg1;
- (id)initWithExternalDisplayDefaults:(id)arg1 externalDisplayService:(id)arg2 mousePointerManager:(id)arg3 runtimeAvailabilitySettings:(id)arg4 sceneManager:(id)arg5;
- (void)mousePointerManager:(id)arg1 hardwarePointingDeviceAttachedDidChange:(bool)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
