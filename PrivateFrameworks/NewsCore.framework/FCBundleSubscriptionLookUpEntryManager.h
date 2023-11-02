
@interface FCBundleSubscriptionLookUpEntryManager : NSObject {
    FCBundleSubscriptionLookUpEntry * __bundleSubscriptionLookUpEntry;
    FCKeyValueStore * _localStore;
    NFUnfairLock * _lock;
}

@property (nonatomic, retain) FCBundleSubscriptionLookUpEntry *_bundleSubscriptionLookUpEntry;
@property (nonatomic, readonly) FCBundleSubscriptionLookUpEntry *bundleSubscriptionLookUpEntry;
@property (nonatomic, retain) FCKeyValueStore *localStore;
@property (nonatomic, readonly) NFUnfairLock *lock;

- (void).cxx_destruct;
- (id)_bundleSubscriptionLookUpEntry;
- (id)_bundleSubscriptionLookupEntryForPurchaseID:(id)arg1;
- (void)addBundleChannelIDs:(id)arg1 bundleChannelIDsVersion:(id)arg2 purchaseID:(id)arg3 inTrialPeriod:(bool)arg4 isPurchaser:(bool)arg5 servicesBundlePurchaseID:(id)arg6 isAmplifyUser:(bool)arg7 initialPurchaseTimestamp:(id)arg8 isPaidBundleViaOfferActivated:(bool)arg9;
- (id)bundleSubscriptionLookUpEntry;
- (void)cleanupStaleExpiredEntry;
- (id)initWithLocalStore:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)localStore;
- (id)lock;
- (void)setBundleSubscriptionLookUpEntry:(id)arg1;
- (void)setLocalStore:(id)arg1;
- (void)set_bundleSubscriptionLookUpEntry:(id)arg1;
- (void)updateEntry:(id)arg1;

@end
