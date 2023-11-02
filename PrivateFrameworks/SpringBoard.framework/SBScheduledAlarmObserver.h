
@interface SBScheduledAlarmObserver : NSObject {
    MTAlarmManager * _alarmManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_nextAlarmChanged:(id)arg1;
- (void)_updateAlarmStatusBarItem;
- (id)init;

@end
