
@interface REDonatedActionStore : REObservableSingleton {
    REUpNextScheduler * _deletionsScheduler;
    REUpNextScheduler * _donationsScheduler;
    bool  _isMonitoringLockState;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _synchronized;
}

- (void).cxx_destruct;
- (void)_beginLoadingData;
- (void)_finishLoadingData:(unsigned long long)arg1;
- (id)_init;
- (void)_notified_addDonatedActionsForInstalledApps:(id)arg1;
- (void)_notified_distributeRecentDeletedActions:(id)arg1;
- (void)_notified_distributeRecentDonatedActions:(id)arg1;
- (void)_notified_removeDonatedActionsForUninstalledApps:(id)arg1;
- (void)_notified_removeThenDistributeAllActions:(id)arg1;
- (void)_queue_distributeAllDonatedActions;
- (void)_queue_distributeAllDonatedActionsWithIdentifier:(id)arg1;
- (void)_queue_distributeRecentDeletedActions;
- (void)_queue_distributeRecentDonatedActions;
- (bool)_shouldLimitQueries;
- (void)_subscribeToNotifications;
- (id)callbackQueue;
- (void)dealloc;
- (void)fetchDonationWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)start;
- (void)synchronizeDonationsIfNecessary;
- (void)triggerDistributeAllDonatedActions:(bool)arg1;

@end
