
@interface MPModelStoreRadioMusicKitRequestOperation : MPModelStoreGroupingsMusicKitRequestOperation

- (id)additionalCatalogURLQueryItems;
- (id)additionalURLRequestsWithStoreURLBag:(id)arg1;
- (id)groupingNameBagKey;
- (id)groupingNameWithMusicSubscriptionDictionary:(id)arg1;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(id /* block */)arg2;
- (long long)radioStationSubTypeFromSubType:(id)arg1;
- (long long)radioStationTypeFromKind:(id)arg1;
- (id)radioStationWithDictionary:(id)arg1;
- (id)recentlyPlayedItemWithDictionary:(id)arg1;
- (id)recentlyPlayedItemsWithAPILoadedOutput:(id)arg1;
- (id)recentlyPlayedSectionWithTitle:(id)arg1;
- (id)recentlyPlayedURLWithStoreURLBag:(id)arg1;
- (id)rootObjectIdentifierWithSubscriptionStatus:(long long)arg1;

@end
