
@interface AAUIAccountRecoveryViewController : PSListController <AAUIGrandSlamRemoteUIPresenterDelegate> {
    AIDAAccountManager * _accountManager;
    AKAppleIDAuthenticationController * _authenticationController;
    NSObject<OS_dispatch_queue> * _contactWorkQueue;
    AAUIContactsProvider * _contactsProvider;
    AACustodianController * _custodianController;
    AAUICustodianSetupFlowController * _custodianSetupFlowController;
    ACAccount * _idmsAccount;
    NSArray * _myCustodians;
    NSArray * _myCustodianshipOwners;
    bool  _recoveryKeyStateIsEnabled;
    AAUIGrandSlamRemoteUIPresenter * _remoteUIPresenter;
    AAUISpinnerManager * _spinnerManager;
    AAAccountRecoveryManagementViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountRecoveryDetailsSpecifier;
- (id)_accountRecoveryDetailsSpecifierForIneligibleAccount;
- (id)_addRecoveryContactSpecifier;
- (id)_appleAccount;
- (void)_beginObservingNotifications;
- (void)_beginObservingTrustedContactChangeNotification;
- (bool)_canBeCustodian;
- (bool)_canHaveCustodian;
- (void)_custodianshipOwnerWasTapped:(id)arg1;
- (void)_fetchAllCustodianContacts;
- (void)_fetchRecoveryKeyUpdate;
- (void)_footerLearnMoreWasTapped;
- (id)_idmsAccount;
- (bool)_isEligibleForRecoveryKey;
- (void)_learnMoreWasTapped;
- (void)_myRecoveryContactWasTapped:(id)arg1;
- (id)_myRecoveryOptionsSpecifiers;
- (void)_printableSummaryLearnMoreTapped;
- (id)_recoveryContactForGroupSpecifier;
- (id)_recoveryContactForSpecifiers;
- (id)_recoveryKeySpecifiers;
- (id)_recoveryKeyState;
- (id)_recoveryOptionsGroupSpecifier;
- (id)_recoveryOptionsGroupSpecifierForIneligibleAccount;
- (void)_rkFooterLearnMoreTapped;
- (void)_showAddCustodian;
- (void)_showRecoveryKey:(id)arg1;
- (void)_showViewController:(id)arg1;
- (void)_startSpinnerInSpecifier:(id)arg1;
- (void)_stopObservingNotifications;
- (void)_stopObservingTrustedContactChangeNotification;
- (void)_syncAccountRecoveryFactorsWithCompletion:(id /* block */)arg1;
- (void)_syncTrustedContactsFromCloudKit;
- (void)dealloc;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithAccountManager:(id)arg1 highlightRowIdentifier:(id)arg2;
- (void)remoteUIRequestComplete:(id)arg1 error:(id)arg2;
- (id)specifiers;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
