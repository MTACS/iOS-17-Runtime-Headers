
@interface SBAmbientScheduledAlarmObserver : NSObject {
    MTAlarmManager * _alarmManager;
    <SBAmbientScheduledAlarmObserverDelegate> * _delegate;
    bool  _observationEnabled;
    NSObject<OS_dispatch_queue> * _scheduledTimerQueue;
    NSMutableDictionary * _scheduledTimers;
}

@property (nonatomic, retain) MTAlarmManager *alarmManager;
@property (nonatomic) <SBAmbientScheduledAlarmObserverDelegate> *delegate;
@property (nonatomic) bool observationEnabled;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *scheduledTimerQueue;
@property (nonatomic, retain) NSMutableDictionary *scheduledTimers;

- (void).cxx_destruct;
- (void)_firingAlarmUpdated:(id)arg1;
- (void)_invalidateAllScheduledTimers;
- (id)_newScheduledTimerForFireDate:(id)arg1;
- (void)_nextAlarmChanged:(id)arg1;
- (void)_publishTimerFired:(id)arg1;
- (void)_registerForAlarmNotifications;
- (void)_scheduleTimersForAlarm:(id)arg1;
- (id)_timeIntervalsWithReasons;
- (void)_timerFired:(id)arg1;
- (void)_unregisterForAlarmNotifications;
- (void)_updateAlarmObservation;
- (void)_updateScheduledTimersForNextAlarm;
- (id)alarmManager;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)observationEnabled;
- (id)scheduledTimerQueue;
- (id)scheduledTimers;
- (void)setAlarmManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setObservationEnabled:(bool)arg1;
- (void)setScheduledTimerQueue:(id)arg1;
- (void)setScheduledTimers:(id)arg1;

@end
