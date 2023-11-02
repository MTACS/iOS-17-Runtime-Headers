
@interface PKPaymentSetupPurchaseServiceProviderProductsViewController : PKDynamicCollectionViewController <PKPaymentServiceProviderProductsListSectionControllerDelegate, PKViewControllerPreflightable> {
    UIImage * _cardImage;
    <PKPaymentSetupPurchaseServiceProviderProductsViewControllerFlowDelegate> * _flowDelegate;
    PKPaymentSetupCardImageHeaderView * _headerView;
    PKPaymentServiceProviderProductsListSectionController * _listSectionController;
    UIImageView * _passView;
    PKPaymentSetupProduct * _product;
    PKPaymentProvisioningController * _provisioningController;
    PKPaymentProvisioningMethodMetadata * _provisioningMethodMetadata;
    long long  _setupContext;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    bool  _snapshotNeedsCorners;
    UILabel * _titleLabel;
    unsigned char  _visibility;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentSetupPurchaseServiceProviderProductsViewControllerFlowDelegate> *flowDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentSetupProduct *product;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didSelectServiceProviderProduct:(id)arg1;
- (id)flowDelegate;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)product;
- (void)setFlowDelegate:(id)arg1;
- (void)viewDidLoad;

@end
