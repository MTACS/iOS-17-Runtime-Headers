
@protocol SyncManagerProtocol <NSObject>

@required

- (void)deleteAllObjects;
- (long long)deleteCallsWithPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (void)deleteObjectWithUniqueId:(NSString *)arg1;
- (void)deleteObjectsWithLimits:(NSDictionary *)arg1;
- (void)deleteObjectsWithUniqueIds:(NSArray *)arg1;
- (NSArray *)fetchAllObjects;
- (unsigned long long)fetchCallCountWithPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2;
- (NSArray *)fetchCallIdentifiersWithPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (NSArray *)fetchCallsWithPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2;
- (NSArray *)fetchCoalescedCallsWithPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (CHRecentCall *)fetchObjectWithUniqueId:(NSString *)arg1;
- (NSArray *)fetchObjectsWithLimits:(NSDictionary *)arg1;
- (void)insert:(CHRecentCall *)arg1;
- (void)insertRecords:(NSArray *)arg1;
- (void)insertRecordsWithoutTransactions:(NSArray *)arg1;
- (void)insertWithoutTransaction:(CHRecentCall *)arg1;
- (NSPredicate *)predicateForLimits:(NSDictionary *)arg1;
- (void)resetTimers;
- (long long)setRead:(bool)arg1 forCallsWithPredicate:(NSPredicate *)arg2 error:(id*)arg3;
- (double)timerIncoming;
- (double)timerLifetime;
- (double)timerOutgoing;
- (void)updateAllObjects:(NSDictionary *)arg1;
- (void)updateObjects:(NSDictionary *)arg1;

@end
