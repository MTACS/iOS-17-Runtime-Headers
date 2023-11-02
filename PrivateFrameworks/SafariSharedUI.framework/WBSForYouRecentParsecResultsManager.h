
@interface WBSForYouRecentParsecResultsManager : WBSForYouRecommendationMediatorDataSource {
    NSCache * _cache;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (nonatomic, readonly, copy) NSArray *recentRecommendations;

+ (id)recommendationsMatchingTopic:(id)arg1 fromArray:(id)arg2;

- (void).cxx_destruct;
- (id)_bestAcceptableImageForSFResult:(id)arg1;
- (id)_cacheEnsuringExistence;
- (void)_createInternalQueueIfNecessary;
- (bool)_hasPermissibleResultTypeForResult:(id)arg1;
- (void)appendResultsIfApplicable:(id)arg1;
- (void)appendResultsIfApplicable:(id)arg1 withDelayedExistenceCheck:(bool)arg2;
- (void)clearAllResults;
- (id)recentRecommendations;
- (void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
