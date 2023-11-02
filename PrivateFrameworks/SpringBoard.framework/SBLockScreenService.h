
@interface SBLockScreenService : NSObject <BSServiceConnectionListenerDelegate, SBAlwaysOnPolicy, SBPasscodeEntryTransientOverlayViewControllerDelegate, SBSLockScreenServiceServerInterface> {
    <SBFAuthenticationAssertionProviding> * _authenticationAssertionProvider;
    NSMutableSet * _connections;
    NSMutableSet * _connectionsPreventingPasscodeLock;
    NSMutableSet * _connectionsPreventingSpuriousScreenUndim;
    BSServiceConnectionListener * _listener;
    <SBFLockOutStatusProvider> * _lockOutController;
    SBLockScreenManager * _lockScreenManager;
    SBMainWorkspace * _mainWorkspace;
    id /* block */  _passcodeCheckCompletion;
    SBPasscodeEntryTransientOverlayViewController * _passcodeEntryTransientOverlayViewController;
    NSString * _passcodeSubtitle;
    NSString * _passcodeTitle;
    SBFAuthenticationAssertion * _preventPasscodeLockAssertion;
    SBSpuriousScreenUndimmingAssertion * _preventSpuriousScreenUndimAssertion;
    BLSAssertion * _preventSpuriousScreenUndimDisableAlwaysOnAssertion;
    SBRemoteTransientOverlaySessionManager * _remoteTransientOverlaySessionManager;
    FBServiceClientAuthenticator * _requestDeviceUnlockAuthenticator;
    SBFUserAuthenticationController * _userAuthController;
}

@property (getter=isAlwaysOnPolicyActive, nonatomic, readonly) bool alwaysOnPolicyActive;
@property (nonatomic, readonly) <SBAlwaysOnPolicy> *alwaysOnPolicyProvider;
@property (nonatomic, readonly, copy) NSString *analyticsPolicyName;
@property (nonatomic, readonly, copy) id analyticsPolicyValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SBFLockOutStatusProvider> *lockOutController;
@property (nonatomic, retain) SBPasscodeEntryTransientOverlayViewController *passcodeEntryTransientOverlayViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBFUserAuthenticationController *userAuthController;

- (void).cxx_destruct;
- (void)_setPasscodeVisible:(bool)arg1 animated:(bool)arg2;
- (void)activateAlwaysOnPolicy;
- (id)alwaysOnPolicyProvider;
- (id)analyticsPolicyName;
- (id)analyticsPolicyValue;
- (id)initWithLockScreenManager:(id)arg1 workspace:(id)arg2 authenticationAssertionProvider:(id)arg3 remoteTransientOverlaySessionManager:(id)arg4;
- (bool)isAlwaysOnPolicyActive;
- (oneway void)launchEmergencyDialerWithCompletion:(id /* block */)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (oneway void)lockDeviceAnimated:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)lockOutController;
- (id)passcodeEntryTransientOverlayViewController;
- (bool)passcodeEntryTransientOverlayViewController:(id)arg1 authenticatePasscode:(id)arg2;
- (void)passcodeEntryTransientOverlayViewControllerRequestsDismissal:(id)arg1;
- (id)passcodeEntryTransientOverlayViewControllerStatusSubtitleText;
- (id)passcodeEntryTransientOverlayViewControllerStatusText;
- (void)requestPasscodeCheckUIForClient:(id)arg1 options:(id)arg2 description:(id)arg3 withCompletion:(id /* block */)arg4;
- (oneway void)requestPasscodeCheckUIWithOptions:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestPasscodeUnlockUIForClient:(id)arg1 options:(id)arg2 description:(id)arg3 withCompletion:(id /* block */)arg4;
- (oneway void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setLockOutController:(id)arg1;
- (void)setPasscodeEntryTransientOverlayViewController:(id)arg1;
- (oneway void)setPreventPasscodeLock:(id)arg1;
- (oneway void)setPreventSpuriousScreenUndim:(id)arg1;
- (void)setUserAuthController:(id)arg1;
- (id)userAuthController;

@end
