
@interface REDonatedActionFilteredCache : NSObject <REDonatedActionStoreObserver> {
    NSMapTable * _actions;
    NSMapTable * _countPerformedTodayByActionType;
    NSMapTable * _countsByActionType;
    <REDonatedActionFilteredCacheDelegate> * _delegate;
    NSDate * _firstDonationDate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <REDonatedActionFilteredCacheDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_keyForAction:(id)arg1;
- (void)_queue_incrementPerformedCountForDonation:(id)arg1;
- (unsigned long long)_queue_performedCountForDonation:(id)arg1;
- (unsigned long long)_queue_performedTodayCountForBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2;
- (void)_queue_removeAllData;
- (void)_queue_removeDonation:(id)arg1;
- (void)_queue_removeDonationsForBundleIdentifier:(id)arg1;
- (void)_queue_storeDonation:(id)arg1;
- (void)_refreshAllDonations:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)donationActionStoreReceivedDonation:(id)arg1 isNewDonation:(bool)arg2;
- (void)donationActionStoreRemoveAllDonations;
- (void)donationActionStoreRemovedDonation:(id)arg1;
- (void)donationActionStoreRemovedDonationsFor:(id)arg1;
- (void)fetchAllUniqueActions:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)fetchCountForAction:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)fetchDonationWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchFirstPerformedActionDate:(id /* block */)arg1;
- (void)fetchPerformedCountForAction:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)reset;
- (void)setDelegate:(id)arg1;

@end
