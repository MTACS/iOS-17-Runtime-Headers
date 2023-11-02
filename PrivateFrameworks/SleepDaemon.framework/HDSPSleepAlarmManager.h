
@interface HDSPSleepAlarmManager : NSObject <HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSource> {
    HDSPEnvironment * _environment;
    <HDSPSleepAlarmProvider> * _sleepAlarmProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dontNotify;
@property (nonatomic, readonly) bool dontSync;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HDSPSleepAlarmProvider> *sleepAlarmProvider;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentSleepAlarms;
- (id)environment;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 sleepAlarmProvider:(id)arg2;
- (void)resetSleepAlarmSnoozeState;
- (id)sleepAlarmProvider;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepScheduleModel:(id)arg2;
- (id)sourceIdentifier;

@end
