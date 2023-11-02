
@interface SBApplicationAutoLaunchService : NSObject <BSDescriptionProviding, SBFMobileKeyBagObserver> {
    SBApplicationController * _applicationController;
    bool  _autoLaunchSynchronously;
    bool  _invalidated;
    SBFMobileKeyBag * _keybag;
    SBMainWorkspace * _mainWorkspace;
    NSMutableArray * _queuedApplicationsThrottledForRelaunch;
    NSTimer * _queuedApplicationsThrottledForRelaunchTimer;
    SBRestartManager * _restartManager;
    SBSyncController * _syncController;
}

@property (getter=_autoLaunchSynchronously, setter=_setAutoLaunchSynchronously:, nonatomic) bool autoLaunchSynchronously;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_queuedApplicationsThrottledForRelaunch, nonatomic, readonly) NSArray *queuedApplicationsThrottledForRelaunch;
@property (getter=_queuedApplicationsThrottledForRelaunchTimer, nonatomic, readonly) NSTimer *queuedApplicationsThrottledForRelaunchTimer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationProcessStateDidChange:(id)arg1;
- (void)_autoLaunchAppsIfNecessaryAfterFirstUnlock;
- (void)_autoLaunchIfNecessary:(id)arg1 forReason:(unsigned long long)arg2;
- (bool)_autoLaunchSynchronously;
- (id)_initWithWorkspace:(id)arg1 applicationController:(id)arg2 restartManager:(id)arg3 syncController:(id)arg4 keybag:(id)arg5;
- (void)_installedApplicationsDidChange:(id)arg1;
- (void)_invalidateQueuedApplicationsThrottledForRelaunchTimer;
- (void)_launchNextQueuedApplicationThrottledForRelaunch;
- (void)_memoryPressureRelieved:(id)arg1;
- (void)_memoryPressureWarn:(id)arg1;
- (void)_noteKeybagDidUnlock;
- (void)_noteTerminationAssertionRemovedForApplication:(id)arg1;
- (id)_queuedApplicationsThrottledForRelaunch;
- (id)_queuedApplicationsThrottledForRelaunchTimer;
- (void)_recalculateVoIPBehaviorForApplication:(id)arg1 withExitContext:(id)arg2;
- (void)_scheduleAutoLaunchForApplicationExited:(id)arg1 withExitContext:(id)arg2;
- (void)_scheduleThrottledApplicationRelaunchTimerIfNecessary;
- (void)_setAutoLaunchSynchronously:(bool)arg1;
- (bool)_shouldAutoLaunchApplication:(id)arg1 forReason:(unsigned long long)arg2;
- (void)autoLaunchApplicationsIfNecessaryForStartup;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)invalidate;
- (void)keybagDidUnlockForTheFirstTime:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
