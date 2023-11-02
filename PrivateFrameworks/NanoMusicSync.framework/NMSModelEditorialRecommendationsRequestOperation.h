
@interface NMSModelEditorialRecommendationsRequestOperation : MPModelStoreBrowseRequestOperation

- (id)configurationForLoadingModelDataWithStoreURLBag:(id)arg1 error:(id*)arg2;
- (void)execute;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(id /* block */)arg2;

@end
