
@interface MPModelForYouRecommendationsRequestOperation : MPStoreModelRequestOperation

- (id)_missingContentIdentifiersInRecommendationsArray:(id)arg1 storeItemMetadataResults:(id)arg2;
- (id)_personalizeRecommendationGroup:(id)arg1 flatPersonalizedSectionedItems:(id)arg2;
- (void)_produceResponseWithRecommendationsArray:(id)arg1 storeItemMetadataResults:(id)arg2 completion:(id /* block */)arg3;
- (id)_responseWithResults:(id)arg1 personalizationResponse:(id)arg2;
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)arg1 error:(id*)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(id /* block */)arg2;

@end
