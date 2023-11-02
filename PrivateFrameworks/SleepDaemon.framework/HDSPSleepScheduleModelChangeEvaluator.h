
@interface HDSPSleepScheduleModelChangeEvaluator : NSObject <HDSPEnvironmentAware> {
    HDSPEnvironment * _environment;
    HKSPSleepEventRecord * _lastRecord;
    HKSPSleepSchedule * _lastSchedule;
    HKSPSleepSettings * _lastSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) HKSPSleepEventRecord *lastRecord;
@property (nonatomic, copy) HKSPSleepSchedule *lastSchedule;
@property (nonatomic, copy) HKSPSleepSettings *lastSettings;
@property (readonly) Class superclass;

+ (unsigned long long)_evaluateChangesFromObject:(id)arg1 toObject:(id)arg2 outChangeSet:(id*)arg3;

- (void).cxx_destruct;
- (void)_loadPersistedModel;
- (void)_persistModel:(id)arg1;
- (void)_persistRecord:(id)arg1;
- (void)_persistSchedule:(id)arg1;
- (void)_persistSettings:(id)arg1;
- (void)_restorePersistedModelWithScheduleData:(id)arg1 settingsData:(id)arg2 recordData:(id)arg3;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (id)evaluateSleepRecordAdd:(id)arg1;
- (id)evaluateSleepRecordUpdate:(id)arg1;
- (id)evaluateSleepScheduleAdd:(id)arg1;
- (id)evaluateSleepScheduleModelChange:(id)arg1;
- (id)evaluateSleepScheduleRemove;
- (id)evaluateSleepScheduleUpdate:(id)arg1;
- (id)evaluateSleepSettingsAdd:(id)arg1;
- (id)evaluateSleepSettingsUpdate:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)lastRecord;
- (id)lastSchedule;
- (id)lastSettings;
- (void)setLastRecord:(id)arg1;
- (void)setLastSchedule:(id)arg1;
- (void)setLastSettings:(id)arg1;

@end
