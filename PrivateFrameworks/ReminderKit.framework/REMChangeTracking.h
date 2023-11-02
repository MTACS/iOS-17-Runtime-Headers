
@interface REMChangeTracking : NSObject {
    <REMChangeTrackingClientIdentifying> * _changeTrackingClientID;
    <REMDaemonController> * _daemonController;
    NSArray * _entityNames;
    NSSet * _transactionAuthorKeysToExclude;
    unsigned long long  _transactionFetchLimit;
}

@property (nonatomic, readonly) <REMChangeTrackingClientIdentifying> *changeTrackingClientID;
@property (nonatomic, readonly) <REMDaemonController> *daemonController;
@property (nonatomic, retain) NSArray *entityNames;
@property (nonatomic, readonly) NSSet *transactionAuthorKeysToExclude;
@property (nonatomic) unsigned long long transactionFetchLimit;

+ (id)defaultTransactionAuthorKeysToExclude;
+ (id)entityNamesToIncludeFromTrackingWithOptionProvider:(Class)arg1;
+ (id)internalTransactionAuthorKeysToExclude;
+ (id)lastTransactionTimestampWithManagedObjectContext:(id)arg1 affectedStores:(id)arg2;

- (void).cxx_destruct;
- (void)_performChangeTrackingWithReason:(id)arg1 block:(id /* block */)arg2 xpcErrorHandler:(id /* block */)arg3;
- (id)changeTrackingClientID;
- (id)currentChangeTokenForAccountTypes:(long long)arg1 error:(id*)arg2;
- (id)currentChangeTokenForAllAccountsWithError:(id*)arg1;
- (id)currentChangeTokenWithError:(id*)arg1;
- (id)daemonController;
- (void)deleteHistoryBeforeDate:(id)arg1 error:(id*)arg2;
- (void)deleteHistoryBeforeToken:(id)arg1 error:(id*)arg2;
- (id)earliestChangeTokenWithError:(id*)arg1;
- (id)entityNames;
- (id)fetchAuxiliaryChangeInfosOfType:(Class)arg1 withChangeObject:(id)arg2 error:(id*)arg3;
- (id)fetchHistoryAfterDate:(id)arg1 error:(id*)arg2;
- (id)fetchHistoryAfterToken:(id)arg1 error:(id*)arg2;
- (id)getTrackingStateWithError:(id*)arg1;
- (id)initWithClientID:(id)arg1 daemonController:(id)arg2;
- (id)initWithClientID:(id)arg1 daemonController:(id)arg2 transactionAuthorKeysToExclude:(id)arg3;
- (id)persistenceStoreIDForAccountID:(id)arg1 error:(id*)arg2;
- (void)saveTrackingState:(id)arg1 error:(id*)arg2;
- (void)setEntityNames:(id)arg1;
- (void)setTransactionFetchLimit:(unsigned long long)arg1;
- (id)transactionAuthorKeysToExclude;
- (unsigned long long)transactionFetchLimit;

@end
