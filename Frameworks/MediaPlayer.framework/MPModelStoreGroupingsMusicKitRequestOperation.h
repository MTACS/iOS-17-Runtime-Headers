
@interface MPModelStoreGroupingsMusicKitRequestOperation : MPStoreModelRequestOperation {
    NSIndexSet * _allowedFCKinds;
    ICURLBag * _storeURLBag;
}

- (void).cxx_destruct;
- (id)_produceResponseWithParser:(id)arg1 results:(id)arg2 error:(id*)arg3;
- (id)additionalCatalogURLQueryItems;
- (id)additionalURLRequestsWithStoreURLBag:(id)arg1;
- (id)catalogURLWithStoreURLBag:(id)arg1;
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)arg1 error:(id*)arg2;
- (id)groupingNameBagKey;
- (id)groupingNameWithMusicSubscriptionDictionary:(id)arg1;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(id /* block */)arg2;
- (id)rootObjectIdentifierWithSubscriptionStatus:(long long)arg1;

@end
