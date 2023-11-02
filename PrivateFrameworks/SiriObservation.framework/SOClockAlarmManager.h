
@interface SOClockAlarmManager : NSObject {
    AFInstanceContext * _instanceContext;
    MTAlarmManager * _mtAlarmManager;
    NSMutableDictionary * _registeredObservations;
}

+ (void)warmUp;

- (void).cxx_destruct;
- (id)_registeredObservations;
- (id)addAlarm:(id)arg1;
- (void)addHandler:(id /* block */)arg1 forEvent:(long long)arg2;
- (id)alarms;
- (id)alarmsIncludingSleepAlarm:(bool)arg1;
- (void)checkIn;
- (id)dismissAlarmWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithInstanceContext:(id)arg1;
- (id)removeAlarm:(id)arg1;
- (void)removeHandlerForEvent:(long long)arg1;
- (id)updateAlarm:(id)arg1;

@end
