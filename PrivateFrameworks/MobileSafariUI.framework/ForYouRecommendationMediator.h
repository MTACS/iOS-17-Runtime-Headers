
@interface ForYouRecommendationMediator : WBSForYouRecommendationMediator {
    CNAvatarImageRenderer * _avatarImageRenderer;
    WebBookmarkCollection * _bookmarkCollection;
    <WBBookmarkProvider> * _bookmarkProvider;
    NSObject<OS_dispatch_queue> * _bookmarkProviderAccessQueue;
    BookmarksForYouDataSource * _bookmarksDataSource;
    CloudTabsForYouDataSource * _cloudTabsDataSource;
    FeatureManager * _featureManager;
    CNMonogrammer * _monogrammer;
    ReadingListForYouDataSource * _readingListDataSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _rendererLock;
}

- (void).cxx_destruct;
- (void)_cloudTabFeatureAvailabilityDidChange:(id)arg1;
- (id)_cloudTabsDataSourceIfAvailable;
- (id)_loadDemoSuggestions;
- (id)dataSources;
- (void)dealloc;
- (void)fetchImageForRecommendation:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithContextClient:(id)arg1 featureManager:(id)arg2 historyProvider:(id /* block */)arg3;
- (void)loadLinkPresentationMetadataForMessageWithGUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updatedRecommendationsForTopics:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
