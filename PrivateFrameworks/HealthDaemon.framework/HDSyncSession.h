
@interface HDSyncSession : NSObject {
    NSCalendar * _calendar;
    HDAssertion * _databaseAccessibilityAssertion;
    double  _databaseAccessibilityTimeout;
    <HDSyncSessionDelegate> * _delegate;
    NSString * _reason;
    NSUUID * _sessionUUID;
    NSString * _shortSessionIdentifier;
    NSDate * _startDate;
    <HDSyncStore> * _syncStore;
}

@property (nonatomic, readonly, copy) NSCalendar *calendar;
@property (nonatomic, retain) HDAssertion *databaseAccessibilityAssertion;
@property (nonatomic) double databaseAccessibilityTimeout;
@property (nonatomic, readonly) <HDSyncSessionDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly, copy) NSUUID *sessionUUID;
@property (nonatomic, readonly, copy) NSString *shortSessionIdentifier;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, readonly, copy) HDSyncPredicate *syncPredicate;
@property (nonatomic, readonly) <HDSyncStore> *syncStore;

- (void).cxx_destruct;
- (id)calendar;
- (id)databaseAccessibilityAssertion;
- (double)databaseAccessibilityTimeout;
- (id)delegate;
- (id)description;
- (id)excludedSyncIdentities;
- (id)excludedSyncStores;
- (id)init;
- (id)initWithSyncStore:(id)arg1 reason:(id)arg2 delegate:(id)arg3;
- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)arg1;
- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1 version:(struct { int x1; int x2; })arg2;
- (id)reason;
- (bool)requiresSyncForChangesFromAnchorRangeMap:(id)arg1;
- (void)sendChanges:(id)arg1 completion:(id /* block */)arg2;
- (id)sessionUUID;
- (void)setDatabaseAccessibilityAssertion:(id)arg1;
- (void)setDatabaseAccessibilityTimeout:(double)arg1;
- (id)shortSessionIdentifier;
- (bool)shouldOverrideCycleTrackingSymptomsForBackwardsCompatibilty;
- (id)startDate;
- (bool)syncDidBeginWithProfile:(id)arg1 error:(id*)arg2;
- (void)syncDidFinishWithSuccess:(bool)arg1 error:(id)arg2;
- (id)syncPredicate;
- (id)syncStore;
- (void)syncWillBegin;
- (bool)transactionDidEndWithError:(id*)arg1;
- (void)willSyncAnchorRanges:(id)arg1;

@end
