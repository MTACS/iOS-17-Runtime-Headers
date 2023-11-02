
@interface WBSForYouCloudTabsDataSource : WBSForYouRecommendationMediatorDataSource {
    NSObject<OS_dispatch_queue> * _internalQueue;
    WBSCloudTabStore * _tabsStore;
}

- (void).cxx_destruct;
- (void)_createInternalQueueIfNecessary;
- (id)initWithTabStore:(id)arg1;
- (void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
