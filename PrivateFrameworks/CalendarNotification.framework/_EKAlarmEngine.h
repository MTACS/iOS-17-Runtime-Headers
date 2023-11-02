
@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate> {
    NSDateFormatter * _dateFormatter;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSDate * _lastCheckpoint;
    CADSequenceToken * _lastDBSequenceToken;
    bool  _needsAlarmTablePopulation;
    NSDate * _nextFireDate;
    bool  _pendingChanges;
    NSDate * _populateStart;
    bool  _populating;
    RTRoutineManager * _routineManager;
    bool  _shouldUpdateWithForceForAlarmTable;
    NSTimer * _syncTimer;
    EKTimedEventStorePurger * _timedEventStorePurger;
    NSDate * _tomorrow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requestedDarwinNotifications;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_alertInfoAlarmIDFromEKAlarm:(id)arg1;
- (id)_alertInfoAlarmIDFromSideAlarm:(id)arg1;
- (void)_calendarNotificationSettingChanged;
- (void)_databaseChanged;
- (id)_dateFormatter;
- (id)_eventStore;
- (void)_globalAlarmPreferencesChanged;
- (bool)_haveAlarmsChanged:(id)arg1;
- (void)_installTimerWithFireDate:(id)arg1;
- (bool)_isAlarmAcknowledgedWithAcknowledgedDate:(id)arg1 fireDate:(id)arg2;
- (bool)_isDataProtected;
- (void)_killSyncTimer;
- (void)_killTimer;
- (void)_notifyAlarmsFired:(id)arg1;
- (bool)_populateAlarmTable:(id)arg1;
- (void)_populateFinished;
- (void)_protectedDataDidBecomeAvailable;
- (void)_rescheduleTimer;
- (void)_resetSyncTimer;
- (void)_simulatedOffsetChanged:(id)arg1;
- (void)_storeAlarms:(id)arg1 nextScheduleLimit:(id)arg2 eventStore:(id)arg3;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_timeDidChangeSignificantly;
- (void)_timeZoneChanged:(id)arg1;
- (void)_timerFired;
- (void)_updateWithForceForAlarmTable:(bool)arg1;
- (void)dealloc;
- (void)didRegisterForAlarms;
- (void)handleDarwinNotification:(id)arg1;
- (id)init;
- (void)receivedAlarmNamed:(id)arg1;
- (void)start;

@end
