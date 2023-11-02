
@interface MPModelForYouRecommendationsMusicKitRequestOperation : MPStoreModelRequestOperation {
    ICURLBag * _storeURLBag;
}

- (void).cxx_destruct;
- (id)_personalizeRecommendationGroup:(id)arg1 flatPersonalizedSectionedItems:(id)arg2;
- (id)_produceResultsWithItemsArray:(id)arg1;
- (id)_produceResultsWithRecommendationsArray:(id)arg1 recentlyPlayedArray:(id)arg2;
- (id)_recommendationGroupBuilder;
- (id)_recommendationGroupBuilderWithFlatSectionedItems:(id)arg1;
- (id)_responseWithResults:(id)arg1 personalizationResponse:(id)arg2;
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)arg1 error:(id*)arg2;
- (long long)displayFilterKinds;
- (id)displayFilterKindsValueForOptions:(long long)arg1;
- (bool)isOnboardingRequired:(id)arg1;
- (id)itemProperties;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(id /* block */)arg2;
- (id)queryItemsWithStoreURLBag:(id)arg1;
- (id)recentlyPlayedURLWithStoreURLBag:(id)arg1;
- (id)recommendationsQueryItemsWithStoreURLBag:(id)arg1;
- (id)recommendationsURLWithStoreURLBag:(id)arg1;
- (id)sectionProperties;
- (bool)shouldRequestSocialAndFriendsMixWithValues;
- (bool)shouldRequestVacTokens;
- (long long)subscriptionStatusType;
- (long long)types;
- (id)typesArrayWithTypes:(long long)arg1;

@end
