
@interface MTAlarmDataSource : NSObject {
    MTAlarmManager * _alarmManager;
    NSMutableArray * _alarms;
    MTObserverStore * _observers;
    MTAlarm * _sleepAlarm;
    NSMutableArray * _sleepAlarms;
}

@property (nonatomic, retain) MTAlarmManager *alarmManager;
@property (nonatomic, retain) NSMutableArray *alarms;
@property (nonatomic, retain) MTObserverStore *observers;
@property (nonatomic, retain) MTAlarm *sleepAlarm;
@property (nonatomic, retain) NSMutableArray *sleepAlarms;

- (void).cxx_destruct;
- (void)_handleAlarmNotification:(id)arg1 block:(id /* block */)arg2;
- (void)_iterateObserversWithBlock:(id /* block */)arg1;
- (void)_registerForNotifications;
- (void)_stateReset;
- (id)addAlarm:(id)arg1;
- (id)alarmAtRow:(unsigned long long)arg1;
- (id)alarmManager;
- (id)alarms;
- (void)dealloc;
- (bool)hasSleepAlarmMatchingAlarmIDString:(id)arg1;
- (id)initWithAlarmManager:(id)arg1;
- (unsigned long long)numberOfAlarms;
- (id)observers;
- (void)registerObserver:(id)arg1;
- (id)reloadAlarms;
- (id)reloadAlarmsNotifyObservers:(bool)arg1;
- (id)removeAlarm:(id)arg1;
- (unsigned long long)rowForAlarm:(id)arg1;
- (unsigned long long)rowForAlarmWithID:(id)arg1;
- (void)setAlarmManager:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setSleepAlarm:(id)arg1;
- (void)setSleepAlarms:(id)arg1;
- (id)sleepAlarm;
- (id)sleepAlarms;
- (void)unregisterObserver:(id)arg1;
- (id)updateAlarm:(id)arg1;
- (id)updateAlarm:(id)arg1 reload:(bool)arg2;

@end
