
@interface NewsPersonalization.XavierScoringService : NSObject <FCFeedPersonalizing> {
    void _clientSideEngagementBoostEnabled;
    void _fallbackToReverseChronSorting;
    void _personalizationTreatment;
    void _publisherDampeningConfig;
    void _shadowPublisherDampeningConfig;
    void aggregateContext;
    void aggregateStore;
    void configurationManager;
    void favoritesPersonalizer;
    void scoringJournal;
    void tabiUserEventHistoryScoringService;
    void translationProvider;
    void userContextProvider;
    void userEmbeddingProvider;
}

- (void).cxx_destruct;
- (double)decayedPublisherDiversificationPenalty;
- (void)fetchAggregateMapForPersonalizingItem:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)limitItemsByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
- (id)limitItemsByMinimumItemQuality:(id)arg1;
- (void)prepareForUseWithCompletionHandler:(id /* block */)arg1;
- (id)rankTagIDsDescending:(id)arg1;
- (id)scoresForTagIDs:(id)arg1;
- (id)sortItems:(id)arg1 options:(long long)arg2 configurationSet:(long long)arg3;

@end
