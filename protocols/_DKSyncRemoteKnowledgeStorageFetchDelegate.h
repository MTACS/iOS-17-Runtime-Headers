
@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate <_DKSyncRemoteStorageDelegate>

@required

- (NSArray *)deletedEventIDsSinceDate:(NSDate *)arg1 streamNames:(NSArray *)arg2 limit:(unsigned long long)arg3 endDate:(id*)arg4 error:(id*)arg5;
- (NSArray *)sortedEventsFromSyncWindows:(NSArray *)arg1 streamNames:(NSArray *)arg2 compatibility:(_DKCompatibility *)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id*)arg6;
- (NSArray *)sortedEventsFromSyncWindows:(NSArray *)arg1 streamNames:(NSArray *)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id*)arg5;
- (_DKSyncType *)syncType;

@end
