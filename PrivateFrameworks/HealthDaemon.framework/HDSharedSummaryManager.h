
@interface HDSharedSummaryManager : NSObject {
    NSString * _deviceIdentifier;
    HKSynchronousObserverSet * _observers;
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (bool)addMetadata:(id)arg1 transactionEntity:(id)arg2 error:(id*)arg3;
- (bool)addOrReuseReceivedSharedSummaries:(id)arg1 transactionEntity:(id)arg2 error:(id*)arg3;
- (bool)addSharedSummaries:(id)arg1 transactionEntity:(id)arg2 error:(id*)arg3;
- (id)commitTransactionEntity:(id)arg1 error:(id*)arg2;
- (id)createNewTransactionWithUUID:(id)arg1 error:(id*)arg2;
- (id)createReceivedTransactionWithUUID:(id)arg1 sourceDeviceIdentifier:(id)arg2 metadata:(id)arg3 error:(id*)arg4;
- (bool)deleteAllTransactionsWithError:(id*)arg1;
- (bool)deleteTransactions:(id)arg1 error:(id*)arg2;
- (id)deviceIdentifierWithError:(id*)arg1;
- (bool)discardTransactionEntity:(id)arg1 error:(id*)arg2;
- (bool)enumerateCommittedTransactionsWithError:(id*)arg1 handler:(id /* block */)arg2;
- (bool)enumerateNonCommittedTransactionsWithError:(id*)arg1 handler:(id /* block */)arg2;
- (bool)enumerateSummariesInTransaction:(id)arg1 package:(id)arg2 names:(id)arg3 includedObjectTypes:(id)arg4 error:(id*)arg5 handler:(id /* block */)arg6;
- (bool)enumerateSummariesInTransactionEntity:(id)arg1 package:(id)arg2 names:(id)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
- (id)initWithProfile:(id)arg1;
- (id)mostRecentTransactionCreationDateWithError:(id*)arg1;
- (void)registerObserver:(id)arg1;
- (bool)removeSummariesWithPackage:(id)arg1 names:(id)arg2 transactionEntity:(id)arg3 error:(id*)arg4;
- (bool)removeSummariesWithUUIDs:(id)arg1 transactionEntity:(id)arg2 error:(id*)arg3;
- (bool)reuseSharedSummariesWithPackage:(id)arg1 names:(id)arg2 transactionEntity:(id)arg3 error:(id*)arg4;
- (bool)reuseSharedSummariesWithUUIDs:(id)arg1 transactionEntity:(id)arg2 error:(id*)arg3;
- (id)transactionWithUUID:(id)arg1 requireUncommitted:(bool)arg2 error:(id*)arg3;
- (id)unitTest_transactionForEntity:(id)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
- (void)unregisterObserver:(id)arg1;

@end
