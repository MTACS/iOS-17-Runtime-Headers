
@interface PKPaymentSetupWelcomeViewController : PKPaymentSetupOptionsViewController <PKLoadingUIProviding, PKPaymentProvisioningControllerDelegate, PKPaymentSetupActivitySpinnerProtocol, PKPaymentSetupAppExtensionsSectionControllerDelegate, PKPaymentSetupCategoriesSectionControllerDelegate, PKViewControllerPreflightable> {
    PKPaymentSetupAppExtensionsSectionController * _appExtensionSectionController;
    PKPaymentSetupCategoriesSectionController * _categoriesSectionController;
    unsigned long long  _currentConfiguredRequirements;
    bool  _didPreflight;
    PKPaymentSetupProductModel * _filteredPaymentSetupProductModel;
    <PKPaymentSetupWelcomeViewControllerFlowDelegate> * _flowDelegate;
    bool  _isDisplayingError;
    NSString * _loadingIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentSetupWelcomeViewControllerFlowDelegate> *flowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_didSelectItemWithIdentifier:(id)arg1 title:(id)arg2 category:(id)arg3 productIdentifiers:(id)arg4 completion:(id /* block */)arg5;
- (void)_updateFilteredPaymentSetupProductModelForRequirements:(unsigned long long)arg1 provisoningController:(id)arg2 forceReload:(bool)arg3;
- (void)_updateHeaderContentsWithProvisoningController:(id)arg1;
- (void)dealloc;
- (bool)didSelectAppExtensionWithIdentifier:(id)arg1 title:(id)arg2 completion:(id /* block */)arg3;
- (bool)didSelectCategory:(id)arg1 completion:(id /* block */)arg2;
- (bool)didSelectYourCardsWithCompletion:(id /* block */)arg1;
- (void)didTapFooterLink:(id)arg1;
- (id)flowDelegate;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3;
- (void)preflightRequirementsUpdated:(unsigned long long)arg1 displayableError:(id)arg2;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)provisioningControllerUpdatedAccounts:(id)arg1;
- (void)provisioningControllerUpdatedProducts:(id)arg1;
- (void)reloadRequiredForSectionIdentifier:(id)arg1 animated:(bool)arg2;
- (void)reloadSectionsForRequirements:(unsigned long long)arg1 animated:(bool)arg2 forceReload:(bool)arg3;
- (void)setFlowDelegate:(id)arg1;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
