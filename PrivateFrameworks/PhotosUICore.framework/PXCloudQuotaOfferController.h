
@interface PXCloudQuotaOfferController : PXCloudQuotaController <ICQBannerViewDelegate, PXChangeObserver, PXSettingsKeyObserver> {
    PXCloudQuotaOfferProvider * _offerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_mockOfferIncludeAssetCounts;
- (long long)_mockOfferLevel;
- (void)_updateInformationView;
- (void)dealloc;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)presentingViewControllerForBannerView:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
