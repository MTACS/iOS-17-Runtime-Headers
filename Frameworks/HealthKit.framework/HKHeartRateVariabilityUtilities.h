
@interface HKHeartRateVariabilityUtilities : NSObject

+ (id)_hrvType;
+ (id)_sequenceType;
+ (void)deleteHRVSample:(id)arg1 healthStore:(id)arg2 predicate:(id)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;
+ (void)deleteHRVSamplesFromStartDate:(id)arg1 endDate:(id)arg2 predicate:(id)arg3 options:(unsigned long long)arg4 healthStore:(id)arg5 completion:(id /* block */)arg6;
+ (id)instantaneousBPMsForHeartbeatSeriesSample:(id)arg1;
+ (void)queryForParentSequenceOfHRV:(id)arg1 healthStore:(id)arg2 completion:(id /* block */)arg3;

@end
