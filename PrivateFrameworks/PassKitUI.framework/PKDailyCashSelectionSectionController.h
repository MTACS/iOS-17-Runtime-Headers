
@interface PKDailyCashSelectionSectionController : NSObject <PKAccountServiceObserver, PKDynamicSectionController, PKPaymentServiceDelegate, PKPaymentSetupDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKViewControllerPreflightable> {
    PKAccount * _account;
    PKAccountService * _accountService;
    PKAccountUserCollection * _accountUserCollection;
    NSArray * _accounts;
    bool  _allowStatementCreditRedemption;
    NSArray * _applications;
    PKPaymentService * _applyService;
    NSArray * _currentDailyCashSelectionItems;
    unsigned long long  _currentDestination;
    <PKRewardsHubSectionControllerDelegate> * _delegate;
    bool  _hasRedeemed;
    NSString * _identifier;
    unsigned long long  _loadingDestination;
    PKPeerPaymentAccount * _peerPaymentAccount;
    PKPeerPaymentAccountResolutionController * _peerPaymentAccountResolutionController;
    PKFeatureApplication * _pendingSavingsApplication;
}

@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *identifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_applyAccessory;
- (void)_applyRewardsAsStatementCredit;
- (void)_changeRewardsDestination:(unsigned long long)arg1;
- (void)_changeRewardsDestinationAndOpenAccountIfNeeded:(unsigned long long)arg1;
- (id)_checkmarkAccessory;
- (id)_disclosureAccessory;
- (id)_eligibleAccountOfType:(unsigned long long)arg1;
- (id)_hasRedeemedAccessory;
- (id)_pendingApplicationAccessory;
- (void)_presentPeerPaymentNotEnabledAlert;
- (id)_presentingViewController;
- (void)_reloadSection;
- (void)_reportDailyCashConfirmationEventWithRedemptionType:(unsigned long long)arg1 button:(id)arg2;
- (void)_reportDestinationButtonTapWithRedemptionType:(unsigned long long)arg1;
- (id)_setupAccessory;
- (id)_spinnerAccessory;
- (void)accountAdded:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (id)analyticsEventReportWithPreSelect:(bool)arg1;
- (id)cellRegistrationForItem:(id)arg1;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (id)dailyCashSelectionItems;
- (void)didSelectItem:(id)arg1;
- (void)featureApplicationAdded:(id)arg1;
- (void)featureApplicationChanged:(id)arg1;
- (void)featureApplicationRemoved:(id)arg1;
- (id)footerTitle;
- (id)headerTitle;
- (id)identifiers;
- (id)initWithSectionIdentifier:(id)arg1 account:(id)arg2 accountService:(id)arg3 delegate:(id)arg4;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(bool)arg3;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)presentConfirmationAlertWithTitle:(id)arg1 redemptionType:(unsigned long long)arg2 confirmationHandler:(id /* block */)arg3;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;

@end
