
@interface AMSEngagementOfflineBag : NSObject <AMSBagProtocol> {
    AMSPromise * _snapshotPromise;
    <AMSBagProtocol> * _underlyingBag;
    AMSSnapshotBag * _underlyingOfflineBag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) AMSProcessInfo *processInfo;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (nonatomic, retain) AMSPromise *snapshotPromise;
@property (readonly) Class superclass;
@property (nonatomic, retain) <AMSBagProtocol> *underlyingBag;
@property (nonatomic, retain) AMSSnapshotBag *underlyingOfflineBag;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)URLForKey:(id)arg1 account:(id)arg2;
- (id)_attemptBagLoad;
- (id)_getOfflineBagData;
- (id)_getSnapshotResult;
- (id)arrayForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(id /* block */)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)expirationDate;
- (id)initWithUnderlyingBag:(id)arg1;
- (id)integerForKey:(id)arg1;
- (bool)isExpired;
- (id)profile;
- (id)profileVersion;
- (void)setSnapshotPromise:(id)arg1;
- (void)setUnderlyingBag:(id)arg1;
- (void)setUnderlyingOfflineBag:(id)arg1;
- (id)snapshotPromise;
- (id)stringForKey:(id)arg1;
- (id)underlyingBag;
- (id)underlyingOfflineBag;

@end
