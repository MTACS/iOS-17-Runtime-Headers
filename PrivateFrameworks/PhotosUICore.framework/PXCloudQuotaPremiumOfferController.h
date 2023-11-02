
@interface PXCloudQuotaPremiumOfferController : PXCloudQuotaController <ICQTileViewDelegate, PXChangeObserver> {
    PXCloudQuotaPremiumOfferProvider * _premiumOfferProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateInformationView;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)presentingViewControllerForTileView:(id)arg1;
- (bool)tileView:(id)arg1 performAction:(long long)arg2 parameters:(id)arg3;
- (void)updateTileView;

@end
