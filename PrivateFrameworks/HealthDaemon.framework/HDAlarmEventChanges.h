
@interface HDAlarmEventChanges : NSObject {
    NSArray * _oldEvents;
    NSArray * _scheduledEvents;
}

@property (nonatomic, readonly, copy) NSSet *addedEvents;
@property (nonatomic, readonly, copy) NSArray *oldEvents;
@property (nonatomic, readonly, copy) NSSet *removedEvents;
@property (nonatomic, readonly, copy) NSArray *scheduledEvents;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (void).cxx_destruct;
- (id)addedEvents;
- (id)description;
- (unsigned long long)hash;
- (id)initWithOldEvents:(id)arg1 scheduledEvents:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)oldEvents;
- (id)removedEvents;
- (id)scheduledEvents;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon

- (void)hdmc_enumerateNotificationInstructionsFromAnalysisSampleInfo:(id)arg1 block:(id /* block */)arg2;

@end
