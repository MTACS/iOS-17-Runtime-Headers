
@interface PXCloudQuotaOfferProvider : PXObservable {
    ICQOffer * _offer;
    bool  _offerHasAssetCounts;
}

@property (nonatomic, readonly) ICQOffer *offer;
@property (nonatomic, readonly) bool offerHasAssetCounts;

+ (id)currentOfferProvider;

- (void).cxx_destruct;
- (void)_currentOfferChangedNotification:(id)arg1;
- (void)_queue_getCurrentOffer;
- (void)_queue_initialSetup;
- (void)_updateCurrentOffer:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)offer;
- (bool)offerHasAssetCounts;
- (void)performChanges:(id /* block */)arg1;
- (void)setOffer:(id)arg1;
- (void)setOfferHasAssetCounts:(bool)arg1;

@end
