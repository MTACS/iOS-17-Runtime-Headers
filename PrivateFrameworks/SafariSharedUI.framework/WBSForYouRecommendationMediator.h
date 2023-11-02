
@interface WBSForYouRecommendationMediator : NSObject <UABestAppSuggestionManagerDelegate> {
    UABestAppSuggestionManager * _appSuggestionManager;
    CKContextClient * _contextClient;
    UABestAppSuggestion * _currentAppSuggestion;
    WBSForYouDataSourceWeightManager * _dataSourceWeightManager;
    WBSFoundInRecommendationManager * _foundInManager;
    id /* block */  _historyProvider;
    bool  _ignoreMinimumNumberOfRecommendationsPerTopic;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSCache * _messagesMetadataCache;
    WBSForYouPerSitePreferenceManager * _perSitePreferenceManager;
    bool  _suppressHistoryDeduplication;
    WBSForYouTopicManager * _topicManager;
}

@property (nonatomic, readonly, copy) NSArray *dataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreMinimumNumberOfRecommendationsPerTopic;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressHistoryDeduplication;

+ (id)_adjustedTopicsWithTopics:(id)arg1;
+ (void)_rankRecommendationsInPlace:(id)arg1 history:(id)arg2 weightManager:(id)arg3 suppressHistoryDeduplication:(bool)arg4;
+ (id)_titleForRecommendationSource:(unsigned long long)arg1;
+ (id)_titleForRecommendationTopicSource:(unsigned long long)arg1;
+ (double)scoreForRecommendation:(id)arg1 weightManager:(id)arg2 simplifiedURLStringToLastVisitedDateMap:(id)arg3;

- (void).cxx_destruct;
- (void)_beginListeningForHandoffActivity;
- (void)_createAppSuggestionsManagerIfNecessary;
- (void)_createPreferenceManagerIfNecessary;
- (id)_dataSourceWeightManager;
- (void)_didUpdateFoundInSuggestions:(id)arg1;
- (void)_endListeningForHandoffActivity;
- (void)_fetchImagesForRecommendations:(id)arg1 recommendationsDispatchGroup:(id)arg2;
- (void)_retrieveFoundInRecommendationsWithCompletionHandler:(id /* block */)arg1;
- (id)analyticsMetadataForRecommendation:(id)arg1;
- (void)banURLsOfSameDomainAsURL:(id)arg1;
- (void)banURLsOfSameDomainAsURL:(id)arg1 postingChangeNotificationWhenDone:(bool)arg2;
- (void)beginListeningForURLSuggestionChanges;
- (void)bestAppSuggestionChanged:(id)arg1;
- (void)clearDataSourceWeights;
- (id)dataSources;
- (void)dealloc;
- (void)downvoteSource:(unsigned long long)arg1;
- (void)downvoteSource:(unsigned long long)arg1 postingChangeNotificationWhenDone:(bool)arg2;
- (void)fetchImageForRecommendation:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)ignoreMinimumNumberOfRecommendationsPerTopic;
- (id)initWithContextClient:(id)arg1 historyProvider:(id /* block */)arg2;
- (void)loadLinkPresentationMetadataForMessageWithGUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)obtainMessagesImagesWherePossibleForRecommendations:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)recommendationFromDictionary:(id)arg1;
- (void)retrieveHandoffRecommendationWithCompletionHandler:(id /* block */)arg1;
- (void)setIgnoreMinimumNumberOfRecommendationsPerTopic:(bool)arg1;
- (void)setSuppressHistoryDeduplication:(bool)arg1;
- (void)stopListeningForURLSuggestionChanges;
- (bool)suppressHistoryDeduplication;
- (void)updatedRecommendationsForTopics:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)updatedTopicsWithCompletionHandler:(id /* block */)arg1;

@end
