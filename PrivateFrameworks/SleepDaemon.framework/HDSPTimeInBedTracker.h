
@interface HDSPTimeInBedTracker : NSObject <HDSPSleepScheduleStateObserver, HDSPSleepTracker> {
    <HDSPSleepTrackerDelegate> * _delegate;
    HDSPEnvironment * _environment;
    <NAScheduler> * _sleepIntervalScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDSPSleepTrackerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTimeInBedTrackingEnabled;
@property (nonatomic, readonly) <NAScheduler> *sleepIntervalScheduler;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_computeSessionMetadataForInterval:(id)arg1;
- (id)_computeSleepSessionStartBeforeDate:(id)arg1;
- (id)_createSleepSessionWithEndDate:(id)arg1 endReason:(unsigned long long)arg2;
- (void)_endSleepSessionWithReason:(unsigned long long)arg1;
- (id)computeSleepIntervalsForInterval:(id)arg1;
- (id)delegate;
- (id)environment;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (bool)isTimeInBedTrackingEnabled;
- (id)processedSessionForSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)sleepIntervalScheduler;
- (id)sleepScheduleModel;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;

@end
