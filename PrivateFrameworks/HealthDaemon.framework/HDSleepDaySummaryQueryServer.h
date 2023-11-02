
@interface HDSleepDaySummaryQueryServer : HDQueryServer {
    HKSleepDaySummaryQueryConfiguration * _configuration;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_newCachingSessionWithProfile:(id)arg1 cachingIdentifier:(id)arg2 sourceEntity:(id)arg3 queryDescriptor:(id)arg4 cachedClass:(Class)arg5 queryInterval:(id)arg6 anchorDate:(id)arg7 intervalComponents:(id)arg8 timeIntervalToBucketIndex:(id /* block */)arg9;
- (id)_newCalendarCache;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)objectTypes;

@end
