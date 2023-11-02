
@interface HDSPMobileTimerBridge : NSObject {
    MTAlarmManager * _alarmManager;
    NAFuture * _alarmServerReady;
}

@property (nonatomic, readonly) MTAlarmManager *alarmManager;
@property (nonatomic, readonly) NAFuture *alarmServerReady;

+ (bool)sleepAlarm:(id)arg1 matchesSleepScheduleModel:(id)arg2;
+ (id)sleepScheduleModelFromSleepAlarm:(id)arg1;

- (void).cxx_destruct;
- (void)_alarmServerReady;
- (void)_checkAlarmServer;
- (id)alarmManager;
- (id)alarmServerReady;
- (id)init;
- (id)initWithAlarmManager:(id)arg1;
- (void)resetSleepAlarmSnoozeState;
- (id)sleepAlarmsFuture;
- (id)sleepAlarmsFutureIgnoringCache:(bool)arg1;
- (void)updateSleepAlarms;

@end
