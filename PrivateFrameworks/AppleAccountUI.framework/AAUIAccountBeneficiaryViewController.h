
@interface AAUIAccountBeneficiaryViewController : PSListController {
    AIDAAccountManager * _accountManager;
    NSObject<OS_dispatch_queue> * _contactWorkQueue;
    AAUIContactsProvider * _contactsProvider;
    ACAccount * _idmsAccount;
    AAUIInheritanceSetupFlowController * _inheritanceSetupFlowController;
    NSArray * _myBenefactors;
    NSArray * _myBeneficiaries;
    AAAccountBeneficiaryManagementViewModel * _viewModel;
}

- (void).cxx_destruct;
- (id)_addBeneficiarySpecifier;
- (void)_beginObservingTrustedContactChangeNotification;
- (bool)_canBeBeneficiary;
- (bool)_canHaveBeneficiary;
- (void)_fetchAllBeneficiaryContacts;
- (id)_idmsAccount;
- (void)_learnMoreWasTapped;
- (void)_myBenefactorWasTapped:(id)arg1;
- (id)_myBenefactorsGroupSpecifier;
- (id)_myBenefactorsSpecifiers;
- (id)_myBeneficiariesGroupSpecifier;
- (id)_myBeneficiariesSpecifiers;
- (void)_myBeneficiaryWasTapped:(id)arg1;
- (id)_noBenefactorSpecifier;
- (void)_showAddBeneficiary;
- (void)_showViewController:(id)arg1;
- (void)_stopObservingTrustedContactChangeNotification;
- (void)_syncTrustedContactsFromCloudKit;
- (void)dealloc;
- (id)init;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithAccountManager:(id)arg1 highlightRowIdentifier:(id)arg2;
- (id)specifiers;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
