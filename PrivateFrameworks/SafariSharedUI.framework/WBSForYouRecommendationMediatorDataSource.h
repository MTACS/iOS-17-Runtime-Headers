
@interface WBSForYouRecommendationMediatorDataSource : NSObject

- (void)emitStartRetrievingRecommendationsPerformanceMarker;
- (void)notifyContentsDidChangeFromSource:(unsigned long long)arg1;
- (void)notifyImageWasUpdatedForRecommendation:(id)arg1;
- (void)recommendationsWithTopics:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
