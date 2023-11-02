
@interface WLKOfferListing : NSObject {
    NSArray * _storeOffers;
}

@property (nonatomic, readonly, copy) WLKStoreOffer *bestStoreBuyOffer;
@property (nonatomic, readonly, copy) WLKStoreOffer *bestStoreGetOffer;
@property (nonatomic, readonly, copy) WLKStoreOffer *bestStoreRedownloadOffer;
@property (nonatomic, readonly, copy) WLKStoreOffer *bestStoreRentalOffer;
@property (nonatomic, readonly, copy) NSArray *storeOffers;

- (void).cxx_destruct;
- (id)_bestStoreOfferForOfferType:(unsigned long long)arg1;
- (id)_filteredStoreContentSource:(id)arg1;
- (id)_highDefinitionPredicate;
- (bool)_prefersSD;
- (id)_standardDefinitionPredicate;
- (id)_storeOffersFromMAPIDictionaries:(id)arg1;
- (id)bestStoreBuyOffer;
- (id)bestStoreGetOffer;
- (id)bestStoreRedownloadOffer;
- (id)bestStoreRentalOffer;
- (id)initWithMAPIDictionaries:(id)arg1;
- (id)storeOffers;

@end
