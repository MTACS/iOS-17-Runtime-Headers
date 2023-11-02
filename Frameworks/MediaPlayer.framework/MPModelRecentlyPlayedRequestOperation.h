
@interface MPModelRecentlyPlayedRequestOperation : MPStoreModelRequestOperation {
    ICURLBag * _storeURLBag;
}

- (void).cxx_destruct;
- (id)_produceResponseWithRecentlyPlayedArray:(id)arg1 completion:(id /* block */)arg2;
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)arg1 error:(id*)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(id /* block */)arg2;
- (id)recentlyPlayedURLWithStoreURLBag:(id)arg1;

@end
