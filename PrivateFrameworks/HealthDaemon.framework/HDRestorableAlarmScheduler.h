
@interface HDRestorableAlarmScheduler : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDProfileReadyObserver> {
    NSDate * __unitTest_currentDate;
    NSMapTable * _clients;
    bool  _hasInitializedSystemScheduler;
    bool  _isDeviceOnWrist;
    bool  _isRegisteredForLockStateUpdates;
    bool  _isRegisteredForOnWristUpdates;
    bool  _maintenanceOperationQueued;
    bool  _needsLockStateUpdates;
    bool  _needsMaintenanceNotifyAndSchedule;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    int  _significantTimeChangeNotificationToken;
    HDXPCAlarm * _systemScheduler;
}

@property (nonatomic, copy) NSDate *_unitTest_currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRegisteredForLockStateUpdates;
@property (nonatomic, readonly) bool isRegisteredForOnWristUpdates;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDXPCAlarm *systemScheduler;

- (void).cxx_destruct;
- (id)_unitTest_currentDate;
- (void)addAlarm:(id)arg1;
- (void)checkForDueEventsImmediatelyWithCompletion:(id /* block */)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)description;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (bool)isRegisteredForLockStateUpdates;
- (bool)isRegisteredForOnWristUpdates;
- (void)profileDidBecomeReady:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (bool)removeAllEventsWithClientIdentifier:(id)arg1 error:(id*)arg2;
- (bool)removeEvents:(id)arg1 error:(id*)arg2;
- (id)replaceAllScheduledEventsWithClientIdentifier:(id)arg1 newEvents:(id)arg2 error:(id*)arg3;
- (bool)scheduleEvents:(id)arg1 error:(id*)arg2;
- (id)scheduledEventsForClientIdentifier:(id)arg1 error:(id*)arg2;
- (void)set_unitTest_currentDate:(id)arg1;
- (id)systemScheduler;

@end
