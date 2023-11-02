
@interface MTSleepSessionTracker : NSObject <MTAgentNotificationListener, MTSleepObserver, MTSleepSessionTracker> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _alarmLock;
    MTAlarmStorage * _alarmStorage;
    MTAlarm * _cachedAlarm;
    <MTSleepSessionTrackerDelegate> * _sleepSessionTrackerDelegate;
}

@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } alarmLock;
@property (nonatomic, retain) MTAlarmStorage *alarmStorage;
@property (nonatomic, retain) MTAlarm *cachedAlarm;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MTSleepSessionTrackerDelegate> *sleepSessionTrackerDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool trackingEnabled;

+ (bool)_trackingEnabledForSleepAlarm:(id)arg1;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })alarmLock;
- (id)alarmStorage;
- (id)cachedAlarm;
- (void)endSessionWithDate:(id)arg1 reason:(unsigned long long)arg2;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(id /* block */)arg3;
- (bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (id)initWithAlarmStorage:(id)arg1;
- (void)prepare;
- (Class)sessionClass;
- (void)setAlarmLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setAlarmStorage:(id)arg1;
- (void)setCachedAlarm:(id)arg1;
- (void)setSleepSessionTrackerDelegate:(id)arg1;
- (void)sleepCoordinator:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 sleepAlarmDidChange:(id)arg2;
- (void)sleepCoordinator:(id)arg1 wakeUpAlarmWasDismissed:(id)arg2 dismissAction:(unsigned long long)arg3 sleepAlarm:(id)arg4;
- (void)sleepCoordinator:(id)arg1 waketimeWasReached:(id)arg2 sleepAlarm:(id)arg3;
- (id)sleepSessionTrackerDelegate;
- (void)startSession;
- (bool)trackingEnabled;

@end
