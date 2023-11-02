
@interface HDSPSleepStoreServer : NSObject <HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPProcessStateManagerDelegate, HDSPSleepEventHandler, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HKSPSleepServer, HKSPXPCConnectionListenerDelegate> {
    HKSPXPCConnectionListener * _connectionListener;
    HDSPEnvironment * _environment;
    HDSPProcessStateManager * _processStateManager;
    HKSPPersistentSyncAnchorContainer * _syncAnchorContainer;
}

@property (nonatomic, readonly) HKSPXPCConnectionListener *connectionListener;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDSPProcessStateManager *processStateManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKSPPersistentSyncAnchorContainer *syncAnchorContainer;

- (void).cxx_destruct;
- (id /* block */)_checkForSuspendedBlock;
- (void)_notifyClient:(id)arg1 forMissedMessagesWithSyncAnchorContainer:(id)arg2;
- (void)_performWhenClientIsReady:(id)arg1 block:(id /* block */)arg2;
- (void)_performWhenCurrentClientIsReady:(id /* block */)arg1;
- (void)_performWhenEnvironmentIsReady:(id /* block */)arg1;
- (void)_performWhenEnvironmentIsReady:(id /* block */)arg1 withContext:(id)arg2;
- (void)checkInWithSyncAnchorContainer:(id)arg1 completion:(id /* block */)arg2;
- (void)clearWidgetOverrideWithCompletion:(id /* block */)arg1;
- (void)confirmAwakeWithCompletion:(id /* block */)arg1;
- (void)connectWithCompletion:(id /* block */)arg1;
- (id)connectionListener;
- (void)connectionListenerDidAddClient:(id)arg1;
- (void)connectionListenerDidRemoveClient:(id)arg1;
- (void)createSleepFocusModeWithCompletion:(id /* block */)arg1;
- (void)deleteSleepFocusModeWithCompletion:(id /* block */)arg1;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (void)dismissGoodMorningWithCompletion:(id /* block */)arg1;
- (void)dismissSleepLockWithCompletion:(id /* block */)arg1;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (void)environmentWillInvalidate:(id)arg1;
- (id)eventIdentifiers;
- (void)getSleepEventRecordWithCompletion:(id /* block */)arg1;
- (void)getSleepModeWithCompletion:(id /* block */)arg1;
- (void)getSleepScheduleStateWithCompletion:(id /* block */)arg1;
- (void)getSleepScheduleWithCompletion:(id /* block */)arg1;
- (void)getSleepSettingsWithCompletion:(id /* block */)arg1;
- (void)getSleepWidgetStateWithCompletion:(id /* block */)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 connectionListenerProvider:(id /* block */)arg2 processStateManager:(id)arg3;
- (void)processDidBecomeSuspended:(int)arg1;
- (void)processNoLongerSuspended:(int)arg1;
- (id)processStateManager;
- (void)publishNotificationWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)publishWakeUpResultsNotificationWithCompletion:(id /* block */)arg1;
- (void)saveSleepEventRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)saveSleepSchedule:(id)arg1 completion:(id /* block */)arg2;
- (void)saveSleepSettings:(id)arg1 completion:(id /* block */)arg2;
- (void)setLockScreenOverrideState:(long long)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)setSleepMode:(long long)arg1 reason:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)setSyncAnchorContainer:(id)arg1;
- (void)setWidgetOverrideState:(long long)arg1 completion:(id /* block */)arg2;
- (void)sleepAlarmWasDismissedOnDate:(id)arg1 source:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)sleepAlarmWasModifiedFromSource:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)sleepAlarmWasSnoozedUntilDate:(id)arg1 source:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)sleepEventIsDue:(id)arg1;
- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepEventRecord:(id)arg2;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepSchedule:(id)arg2;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepSettings:(id)arg2;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)startListening;
- (id)syncAnchorContainer;

@end
