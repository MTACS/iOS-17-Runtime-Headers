
@interface ATXClientDuetHelper : NSObject

+ (id)sharedInstance;

- (void)_enumerateBatchesInDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 block:(id /* block */)arg6;
- (id)_getIntentEventForSource:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 bundleIdFilter:(id)arg5 limit:(unsigned long long)arg6;
- (id)_queryDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5;
- (id)_queryDuetStreamUnbatched:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5;
- (id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3;
- (id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 forSource:(long long)arg4;
- (id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 forSource:(long long)arg3;

@end
