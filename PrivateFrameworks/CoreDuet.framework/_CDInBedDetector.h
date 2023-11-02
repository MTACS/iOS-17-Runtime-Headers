
@interface _CDInBedDetector : NSObject {
    <_DKKnowledgeQuerying> * _knowledge;
    NSObject<OS_os_log> * _log;
    unsigned long long  _method;
}

@property (retain) <_DKKnowledgeQuerying> *knowledge;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property unsigned long long method;

+ (double)hoursOfSleepForResult:(id)arg1;
+ (id)inBedDetector;
+ (id)inBedDetectorWithKnowledge:(id)arg1;
+ (id)inBedDetectorWithKnowledge:(id)arg1 method:(unsigned long long)arg2;
+ (id)simpleLockBasedInBedDetector;

- (void).cxx_destruct;
- (id)detectInBedBetweenBedtimeDate:(id)arg1 wakupDate:(id)arg2 error:(id*)arg3;
- (id)detectInBedWithPolicyV1BetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;
- (id)detectInBedWithPolicyV2BetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 motionBased:(bool)arg4;
- (id)findDateIntervalOfEventInStream:(id)arg1 datePredicate:(id)arg2 valuePredicate:(id)arg3 sortDescriptor:(id)arg4 error:(id*)arg5;
- (id)findLastTimeDeviceWasLockedBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;
- (id)findLastTimeDeviceWasPluggedInBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;
- (id)findLatestEndOfMovementBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;
- (id)findMotionTerminusBetweenStartDate:(id)arg1 endDate:(id)arg2 latest:(bool)arg3 error:(id*)arg4;
- (id)initWithKnowledge:(id)arg1 method:(unsigned long long)arg2;
- (id)knowledge;
- (id)lockedTimesBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;
- (id)log;
- (unsigned long long)method;
- (void)setKnowledge:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setMethod:(unsigned long long)arg1;
- (id)stationaryIntervalsBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;

@end
