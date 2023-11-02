
@interface REDonatedActionsApplicationStore : NSObject <REDonatedActionFilteredCacheDelegate> {
    REUpNextScheduler * _applicationScheduler;
    NSMutableSet * _applications;
    REDonatedActionFilteredCache * _cache;
    <REMLElementRanker> * _elementRanker;
    RERelevanceEngine * _filteringEngine;
    NSObject<OS_dispatch_queue> * _queue;
    REUpNextScheduler * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notify;
- (void)_notifyApplicationsUpdates;
- (void)_queue_loadApplicationsIfNeededWithCompletion:(id /* block */)arg1;
- (bool)_shouldFilterDonation:(id)arg1;
- (void)_sortDonationsByCount:(id)arg1 completion:(id /* block */)arg2;
- (void)donatedActionFilteredCacheCountDidChange;
- (void)donatedActionFilteredCacheDidAddDonation:(id)arg1;
- (void)donatedActionFilteredCacheDonationRemoved;
- (void)fetchAllUniqueDonationsWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)fetchApplicationsProvidingDonations:(id /* block */)arg1;
- (void)fetchDonationWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchFirstPerformedActionDate:(id /* block */)arg1;
- (void)fetchPerformedCountForAction:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)fetchTopDonationsForApplications:(id)arg1 fromOnlyRecentPlatform:(bool)arg2 block:(id /* block */)arg3;
- (id)init;
- (id)initWithLocationManager:(id)arg1;

@end
