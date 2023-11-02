
@interface NMSMusicCatalogRecommendationsUpdater : NSObject {
    NRPairedDeviceRegistry * _pairedDeviceRegistry;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _retryAttempt;
    NMSSubscriptionManager * _subscriptionManager;
    id /* block */  _updateHandlerBlock;
    NSBackgroundActivityScheduler * _updateScheduler;
}

@property (nonatomic, copy) id /* block */ updateHandlerBlock;

+ (void)_clearLastUpdatedDateIfNeeded;
+ (struct { long long x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })_configurationWithBag:(id)arg1;
+ (double)_nextUpdateDelayAfterDate:(id)arg1 configuration:(struct { long long x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })arg2;
+ (double)_stalenessIntervalWithBag:(id)arg1;

- (void).cxx_destruct;
- (void)_handlePairedDeviceRegistryDeviceDidPairNotification:(id)arg1;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)arg1;
- (bool)_needsInitialContentUpdate;
- (void)_performNextUpdateWithScheduler:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_performNextUpdateWithScheduler:(id)arg1 urlBag:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_scheduleNextUpdateIfNeeded;
- (void)_scheduleNextUpdateWithBag:(id)arg1;
- (void)beginAutomaticContentUpdating;
- (void)endAutomaticContentUpdating;
- (id)init;
- (void)setUpdateHandlerBlock:(id /* block */)arg1;
- (id /* block */)updateHandlerBlock;

@end
