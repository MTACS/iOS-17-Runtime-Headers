
@interface PKPaymentSetupProductsViewController : PKPaymentSetupOptionsViewController <PKLoadingUIProviding, PKPaymentProvisioningControllerDelegate, PKPaymentSetupActivitySpinnerProtocol, PKPaymentSetupPresentationProtocol, PKPaymentSetupProductsSectionControllerDelegate> {
    PKPaymentSetupProductCategory * _category;
    PKPaymentSetupProduct * _currentlyLoadingProduct;
    <PKPaymentSetupProductsViewControllerFlowDelegate> * _flowDelegate;
    NSArray * _paymentSetupProducts;
    PKPaymentSetupProductsSectionController * _primaryProductSectionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentSetupProductsViewControllerFlowDelegate> *flowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didSelectAddADifferentCard;
- (void)_didSelectAddADifferentCardWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (bool)didSelectManualEntryWithCompletion:(id /* block */)arg1;
- (bool)didSelectProduct:(id)arg1 completion:(id /* block */)arg2;
- (void)displayNoResultsViewWithSubtitle:(id)arg1 needsManualEntryButton:(bool)arg2;
- (id)flowDelegate;
- (void)hideNoResultsView;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 category:(id)arg4 paymentSetupProducts:(id)arg5;
- (unsigned long long)paymentSetupMarker;
- (void)provisioningControllerUpdatedProducts:(id)arg1;
- (void)reloadData;
- (void)reloadSectionIdentifier:(id)arg1 animated:(bool)arg2;
- (void)reloadSectionsRequired;
- (void)searchBarCancelButtonClicked;
- (void)searchTextDidChangeTo:(id)arg1;
- (void)setFlowDelegate:(id)arg1;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (void)viewDidLoad;

@end
