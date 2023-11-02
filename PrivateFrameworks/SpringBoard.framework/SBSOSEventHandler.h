
@interface SBSOSEventHandler : NSObject <SOSManagerClientObserver> {
    id  _coversheetObserverToken;
    <BSInvalidatable> * _disableSTARAssertion;
    SBFUserAuthenticationController * _override_authenticationController;
    SBBacklightController * _override_backlightController;
    SBLockScreenManager * _override_lockscreenManager;
    SOSManager * _override_sosManager;
    bool  _running;
}

@property (getter=isSOSActive, nonatomic, readonly) bool SOSActive;
@property (getter=_authenticationController, nonatomic, readonly) SBFUserAuthenticationController *authenticationController;
@property (getter=_backlightController, nonatomic, readonly) SBBacklightController *backlightController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_lockScreenManager, nonatomic, readonly) SBLockScreenManager *lockScreenManager;
@property (getter=_isRunning, setter=_setRunning:, nonatomic) bool running;
@property (getter=_sosManager, nonatomic, readonly) SOSManager *sosManager;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_authenticationController;
- (id)_backlightController;
- (void)_forceBioAuthenticationLockoutIfAvailableWithSource:(int)arg1 showingPasscode:(bool)arg2;
- (bool)_isRunning;
- (id)_lockScreenManager;
- (void)_setRunning:(bool)arg1;
- (id)_sosManager;
- (void)dealloc;
- (void)didDismissSOSBeforeSOSCall:(long long)arg1;
- (void)didUpdateCurrentSOSInitiationState:(long long)arg1;
- (id)init;
- (bool)isSOSActive;
- (void)run;

@end
