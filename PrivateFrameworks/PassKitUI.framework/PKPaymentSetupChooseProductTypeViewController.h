
@interface PKPaymentSetupChooseProductTypeViewController : PKDynamicCollectionViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupChooseProductListSectionControllerDelegate, PKPaymentSetupDelegate, PKPaymentSetupPurchaseControllerDelegate, PKPaymentSetupViewControllerDelegate, PKViewControllerPreflightable, RemoteUIControllerDelegate> {
    PKPaymentAuthorizationCoordinator * _authorizationCoordinator;
    UIImage * _cardImage;
    <PKPaymentSetupChooseProductTypeViewControllerFlowDelegate> * _flowDelegate;
    double  _headerHeight;
    PKPaymentSetupCardImageHeaderView * _headerView;
    PKPaymentSetupChooseProductListSectionController * _listSectionController;
    UIImageView * _passView;
    PKDigitalIssuanceServiceProviderItem * _postPaidItem;
    PKDigitalIssuanceServiceProviderProduct * _postPaidProduct;
    PKPaymentSetupProduct * _product;
    PKPaymentProvisioningController * _provisioningController;
    PKPaymentProvisioningMethodMetadata * _provisioningMethodMetadata;
    PKServiceProviderPurchase * _purchase;
    PKPaymentSetupPurchaseController * _purchaseController;
    NSString * _selectedItemIdentifier;
    long long  _setupContext;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    bool  _snapshotNeedsCorners;
    PKAnimatedNavigationBarTitleView * _titleIconView;
    UILabel * _titleLabel;
    bool  _viewDidAppear;
    unsigned char  _visibility;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentSetupChooseProductTypeViewControllerFlowDelegate> *flowDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentSetupProduct *product;
@property (nonatomic, readonly) PKPaymentSetupPurchaseController *purchaseController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_showSpinner:(bool)arg1;
- (bool)acceptedTerms;
- (void)didSelectPKPaymentSetupChooseProductListItem:(id)arg1;
- (id)flowDelegate;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)product;
- (id)purchaseController;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)setFlowDelegate:(id)arg1;
- (void)showSpinner:(bool)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidLoad;

@end
