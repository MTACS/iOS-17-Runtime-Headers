
@interface PXCloudQuotaControllerHelper : NSObject <PXCloudQuotaControllerDelegate> {
    <PXCloudQuotaControllerHelperDelegate> * _delegate;
    PXCloudQuotaOfferController * _offerController;
    PXCloudQuotaPremiumOfferController * _premiumOfferController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCloudQuotaControllerHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAnyInformationViews;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *informationView;
@property (nonatomic, readonly) UIView *premiumInformationView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cloudQuotaController:(id)arg1 informationViewDidChange:(id)arg2;
- (id)delegate;
- (bool)hasAnyInformationViews;
- (id)informationView;
- (id)init;
- (id)premiumInformationView;
- (id)presentingViewControllerForCloudQuotaController:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
