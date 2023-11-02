
@interface PKPaymentSetupPurchaseServiceProviderProductItemsViewController : PKDynamicCollectionViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentServiceProviderItemsListSectionControllerDelegate, PKPaymentSetupDelegate, PKPaymentSetupPurchaseControllerDelegate, PKPaymentSetupViewControllerDelegate, PKViewControllerPreflightable, RemoteUIControllerDelegate> {
    bool  _acceptedTerms;
    UIActivityIndicatorView * _activityIndicator;
    PKPaymentAuthorizationCoordinator * _authorizationCoordinator;
    UIImage * _cardImage;
    <PKPaymentSetupPurchaseServiceProviderProductItemsViewControllerFlowDelegate> * _flowDelegate;
    bool  _hasSelectedItems;
    PKPaymentSetupCardImageHeaderView * _headerView;
    PKPaymentServiceProviderItemsListSectionController * _listSectionController;
    UIImageView * _passView;
    PKPaymentSetupProduct * _product;
    PKPaymentProvisioningController * _provisioningController;
    PKPaymentProvisioningMethodMetadata * _provisioningMethodMetadata;
    PKServiceProviderPurchase * _purchase;
    PKPaymentSetupPurchaseController * _purchaseController;
    PKDigitalIssuanceServiceProviderItem * _selectedItem;
    PKDigitalIssuanceServiceProviderProduct * _serviceProviderProduct;
    long long  _setupContext;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    bool  _snapshotNeedsCorners;
    unsigned char  _visibility;
}

@property (nonatomic) bool acceptedTerms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentSetupPurchaseServiceProviderProductItemsViewControllerFlowDelegate> *flowDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentSetupProduct *product;
@property (nonatomic, readonly) PKPaymentSetupPurchaseController *purchaseController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_rightBarButton;
- (void)_rightBarButtonPressed:(id)arg1;
- (void)_showSpinner:(bool)arg1;
- (id)_spinnerBarButton;
- (bool)acceptedTerms;
- (void)didSelectServiceProviderItem:(id)arg1;
- (id)flowDelegate;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4 serviceProviderProduct:(id)arg5;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)product;
- (id)purchaseController;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)setAcceptedTerms:(bool)arg1;
- (void)setFlowDelegate:(id)arg1;
- (void)showSpinner:(bool)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
