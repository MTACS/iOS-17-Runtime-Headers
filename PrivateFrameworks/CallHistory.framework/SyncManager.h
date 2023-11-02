
@interface SyncManager : CHLogger <SyncManagerProtocol> {
    CallHistoryDBClientHandle * _dbHandle;
    TransactionManager * _transactionManager;
}

@property (nonatomic, readonly) CallHistoryDBClientHandle *dbHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addUpdateTransactions:(id)arg1;
- (id)archiveCallObject:(id)arg1;
- (id)dbHandle;
- (void)deleteAllObjects;
- (long long)deleteCallsWithPredicate:(id)arg1 error:(id*)arg2;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (void)deleteObjectsWithLimits:(id)arg1;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (id)fetchAllObjects;
- (unsigned long long)fetchCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;
- (id)fetchCallIdentifiersWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (id)fetchCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;
- (id)fetchCoalescedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithLimits:(id)arg1;
- (id)init;
- (void)initDBHandle;
- (void)insert:(id)arg1;
- (void)insertRecords:(id)arg1;
- (void)insertRecordsWithoutTransactions:(id)arg1;
- (void)insertWithoutTransaction:(id)arg1;
- (id)predicateForCallKind:(id)arg1;
- (id)predicateForCallKinds:(id)arg1;
- (id)predicateForLimits:(id)arg1;
- (void)resetTimers;
- (long long)setRead:(bool)arg1 forCallsWithPredicate:(id)arg2 error:(id*)arg3;
- (double)timerIncoming;
- (double)timerLifetime;
- (double)timerOutgoing;
- (void)updateAllObjects:(id)arg1;
- (void)updateObjects:(id)arg1;

@end
