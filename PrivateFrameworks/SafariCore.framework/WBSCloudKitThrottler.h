
@interface WBSCloudKitThrottler : NSObject {
    <WBSCloudKitThrottlerDataStore> * _dataStore;
    unsigned long long  _maximumNumberOfOperationWithinMonitoredPeriod;
    double  _numberOfSecondsToMonitor;
    NSMutableArray * _pastOperationsWithinMonitoredPeriod;
    NSArray * _throttlingDistribution;
}

@property (nonatomic) <WBSCloudKitThrottlerDataStore> *dataStore;

+ (id)_distributionBucketsFromConfiguration:(id)arg1;
+ (bool)policyStringRepresentsValidPolicy:(id)arg1;

- (void).cxx_destruct;
- (void)_addOperationAtDate:(id)arg1;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (bool)_loadDistributionConfiguration:(id)arg1;
- (void)_loadRecordOfPastOperations;
- (double)_minimumTimeBetweenOperationsForOperations:(id)arg1;
- (void)_pruneExpiredOrInvalidOperations;
- (void)_saveRecordOfPastOperations;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (double)_test_numberOfSecondsToMonitor;
- (bool)_throttlerIsActive;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)arg1;
- (id)dataStore;
- (id)dateOfNextPermittedOperationWithPriority:(long long)arg1;
- (id)description;
- (id)init;
- (id)initWithPolicyString:(id)arg1;
- (void)operationWithPriority:(long long)arg1 didCompleteWithResult:(long long)arg2;
- (bool)permitsOperationWithPriority:(long long)arg1;
- (void)reloadRecordOfPastOperations;
- (void)setDataStore:(id)arg1;
- (void)setPolicyString:(id)arg1;

@end
