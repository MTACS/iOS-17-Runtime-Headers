
@interface BDSSyncEngineSaltManager : NSObject <BCCloudDataPrivacyDelegate> {
    NSData * _currentSalt;
    NSString * _currentSaltVersionIdentifier;
    CKDatabase * _database;
    bool  _isSaltRefreshInProgress;
    <BDSSyncEngineSaltManagerObserver> * _observer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSData *currentSalt;
@property (nonatomic, retain) NSString *currentSaltVersionIdentifier;
@property (nonatomic, retain) CKDatabase *database;
@property (readonly) NSString *establishedSaltVersionIdentifier;
@property (nonatomic) bool isSaltRefreshInProgress;
@property (nonatomic) <BDSSyncEngineSaltManagerObserver> *observer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_updatedReachability;
- (id)_wq_saltedAndHashedIDFromLocalID:(id)arg1;
- (id)currentSalt;
- (id)currentSaltVersionIdentifier;
- (id)database;
- (bool)establishedSalt;
- (id)establishedSaltVersionIdentifier;
- (id)initWithDatabase:(id)arg1 observer:(id)arg2;
- (void)invalidateSalt;
- (bool)isSaltRefreshInProgress;
- (id)observer;
- (id)recordNameFromRecordType:(id)arg1 identifier:(id)arg2;
- (void)refreshSalt:(id /* block */)arg1;
- (void)refreshSaltIfNeeded:(id /* block */)arg1;
- (void)setCurrentSalt:(id)arg1;
- (void)setCurrentSaltVersionIdentifier:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setIsSaltRefreshInProgress:(bool)arg1;
- (void)setObserver:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;
- (void)wq_invalidateSalt;
- (void)wq_refreshSalt:(id /* block */)arg1;

@end
