
@interface SBIdleTimerPolicyAggregator : NSObject <SBIdleTimerGlobalCoordinatorDelegate, SBIdleTimerObserving> {
    SBBacklightController * _backlightController;
    unsigned int  _disableAutoDimming;
    SBIdleTimerGlobalStateMonitor * _globalStateMonitor;
    <SBIdleTimerIdleEventHandler> * _idleEventHandler;
    <SBIdleTimer> * _idleTimer;
    SBDeviceUnlockAggdLogger * _logger;
    SBProximitySensorManager * _proximitySensorManager;
}

@property (getter=_backlightController, nonatomic, readonly) SBBacklightController *backlightController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setIdleTimer:, nonatomic, retain) <SBIdleTimer> *idleTimer;
@property (getter=_logger, nonatomic, readonly) SBDeviceUnlockAggdLogger *logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backlightController;
- (id)_initWithBacklightController:(id)arg1 proximitySensorManager:(id)arg2 idleEventHandler:(id)arg3 globalStateMonitor:(id)arg4 unlockLogger:(id)arg5;
- (id)_logger;
- (void)_setIdleTimer:(id)arg1;
- (id)idleTimer;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)idleTimerDidResetForUserAttention:(id)arg1;
- (void)idleTimerDidWarn:(id)arg1;
- (void)idleTimerGlobalCoordinator:(id)arg1 didActivateIdleTimer:(id)arg2;
- (id)initWithBacklightController:(id)arg1 proximitySensorManager:(id)arg2 idleEventHandler:(id)arg3;

@end
