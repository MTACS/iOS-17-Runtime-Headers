
@interface BookmarksForYouDataSource : WBSForYouRecommendationMediatorDataSource {
    <WBBookmarkProvider> * _bookmarkProvider;
    NSObject<OS_dispatch_queue> * _bookmarkProviderAccessQueue;
}

- (void).cxx_destruct;
- (void)_bookmarksDidChangeWithNotification:(id)arg1;
- (void)dealloc;
- (id)initWithBookmarkProvider:(id)arg1 accessQueue:(id)arg2 bookmarkCollection:(id)arg3;
- (void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
