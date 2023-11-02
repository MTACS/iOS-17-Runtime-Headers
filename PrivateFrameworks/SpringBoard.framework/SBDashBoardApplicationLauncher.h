
@interface SBDashBoardApplicationLauncher : NSObject <CSApplicationLaunching, CSCameraPrewarming, CSExternalEventHandling, SBLockScreenApplicationLaunching> {
    bool  _cameraIsPrewarming;
    bool  _cameraPrewarmSucceeded;
    CSCoverSheetViewController * _coverSheetViewController;
    SBInProcessSecureAppAction * _secureAppAction;
    SBSecureAppManager * _secureAppManager;
}

@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (nonatomic, retain) CSCoverSheetViewController *coverSheetViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic) SBSecureAppManager *secureAppManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateAppSceneBelowDashBoard:(id)arg1 secureAppType:(unsigned long long)arg2 withActions:(id)arg3 interactive:(bool)arg4 completion:(id /* block */)arg5;
- (void)_activateAppWithURL:(id)arg1;
- (void)_activateCameraAnimated:(bool)arg1 actions:(id)arg2 completion:(id /* block */)arg3;
- (void)_attemptToUnlockToCameraCompletion:(id /* block */)arg1;
- (bool)_backgroundLaunchCamera;
- (bool)_canHandleTransitionRequest:(id)arg1 outActivatingSceneEntity:(id*)arg2;
- (void)_coolCameraIfNecessary;
- (void)_presentApplicationSceneEntity:(id)arg1 withResult:(id /* block */)arg2;
- (void)_prewarmCamera;
- (void)_reallyActivateAppSceneWithEntity:(id)arg1 interactive:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)conformsToCSEventHandling;
- (id)coverSheetIdentifier;
- (id)coverSheetViewController;
- (void)dealloc;
- (bool)handleEvent:(id)arg1;
- (bool)handleTransitionRequest:(id)arg1;
- (void)launchQuickNote;
- (void)notePrewarmRequestEnded;
- (void)notePrewarmRequestWasUseful;
- (long long)participantState;
- (void)prewarmCameraHardware:(bool)arg1 andApplication:(bool)arg2;
- (id)secureAppManager;
- (void)setCoverSheetViewController:(id)arg1;
- (void)setSecureAppManager:(id)arg1;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
