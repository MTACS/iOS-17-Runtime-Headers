
@interface SBSyncController : NSObject <DDRResetObserver, SBIdleTimerProviding> {
    bool  _appsChangedDuringSync;
    SBFAuthenticationAssertion * _disableDeviceLockAssertion;
    SBWindowSceneStatusBarSettingsAssertion * _hideStatusBarAssertion;
    <SBIdleTimerCoordinating> * _idleTimerCoordinator;
    bool  _inExtendedAppSyncCoalescePeriod;
    bool  _isAppSyncing;
    NSTimer * _progressTimer;
    int  _resetState;
    int  _restoreEndedNotifyToken;
    int  _restoreStartedNotifyToken;
    int  _restoreState;
    NSTimer * _restoreTimer;
    int  _restoreTimerState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:, nonatomic) <SBIdleTimerCoordinating> *idleTimerCoordinator;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_appInstallationNotification;
- (void)_delayedQuitApplications;
- (void)_didEndRestoring:(int)arg1;
- (id)_idleTimerBehavior;
- (id)_idleTimerCoordinator;
- (void)_invalidateRestoreTimer;
- (bool)_isBackupAgentRunning;
- (void)_killApplicationsIfNecessary;
- (void)_notifyRestoreCanProceed;
- (void)_rebootNow;
- (void)_restoreTimerFired:(id)arg1;
- (void)_setIdleTimerCoordinator:(id)arg1;
- (void)_setRestoreState:(int)arg1;
- (void)_setupRestoreTimer;
- (void)_syncSessionDidBegin;
- (void)_syncSessionDidEnd;
- (void)_wirelessSyncBegan:(id)arg1;
- (void)_wirelessSyncEnded:(id)arg1;
- (void)beginRestoring;
- (void)cancelRestoring;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (void)dealloc;
- (void)finishedTerminatingApplications;
- (bool)isInUse;
- (bool)isResetting;
- (bool)isRestoring;
- (void)resetService:(id)arg1 didBeginDataResetWithMode:(long long)arg2;
- (void)resetService:(id)arg1 didCompleteDataResetMode:(long long)arg2 withError:(id)arg3 completion:(id /* block */)arg4;
- (void)resetService:(id)arg1 willBeginDataResetWithMode:(long long)arg2;
- (int)resetState;
- (int)restoreState;
- (void)startObserving;
- (void)stopObserving;

@end
