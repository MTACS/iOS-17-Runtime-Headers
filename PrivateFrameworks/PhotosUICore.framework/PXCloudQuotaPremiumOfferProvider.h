
@interface PXCloudQuotaPremiumOfferProvider : PXObservable {
    ICQPremiumOffer * _premiumOffer;
}

@property (nonatomic, readonly) ICQPremiumOffer *premiumOffer;

+ (id)currentPremiumOfferProvider;

- (void).cxx_destruct;
- (void)_currentPremiumOfferChangedNotification:(id)arg1;
- (void)_queue_getCurrentPremiumOffer;
- (void)_queue_initialSetup;
- (void)_updateCurrentPremiumOffer:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)performChanges:(id /* block */)arg1;
- (id)premiumOffer;
- (void)setPremiumOffer:(id)arg1;

@end
