
@interface DKAccountProvider : NSObject <AASignOutFlowControllerDelegate, AAUIRecoveryFactorControllerDelegate, AIDAAccountManagerDelegate, DKAccountProvider> {
    AIDAAccountManager * _accountManager;
    ACAccountStore * _accountStore;
    CDPLocalSecret * _cachedLocalSecret;
    <DKFindMyProvider> * _findMyProvider;
    id /* block */  _pendingWalrusValidationCompletion;
    UIViewController * _presentingViewController;
    AAUIRecoveryFactorController * _recoveryFactorController;
    <AIDAServiceOwnerProtocol> * _serviceOwnersManager;
    CDPWalrusStateController * _walrusStateController;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, retain) CDPLocalSecret *cachedLocalSecret;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <DKFindMyProvider> *findMyProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ pendingWalrusValidationCompletion;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, retain) AAUIRecoveryFactorController *recoveryFactorController;
@property (nonatomic, retain) <AIDAServiceOwnerProtocol> *serviceOwnersManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) CDPWalrusStateController *walrusStateController;

- (void).cxx_destruct;
- (void)_addAccountDataForAccounts:(id)arg1 toAccountsData:(id)arg2 completion:(id /* block */)arg3;
- (void)_determineEligibilityWithCompletion:(id /* block */)arg1;
- (void)_fetchAccountDataForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_performLastDeviceCheckWithCompletion:(id /* block */)arg1;
- (void)_presentLastDeviceAlertWithCompletion:(id /* block */)arg1;
- (void)_presentLastDeviceAlertWithRecoveryFactors:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (id)_unknownFailureAlertControllerWithCompletion:(id /* block */)arg1;
- (void)_verifyAndRepairManateeWithPresentingViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)_walrusStatusWithCompletion:(id /* block */)arg1;
- (id)accountManager;
- (id)accountStore;
- (id)accountsForAccountManager:(id)arg1;
- (void)cacheLocalDevicePasscode:(id)arg1 passcodeType:(int)arg2;
- (id)cachedLocalSecret;
- (void)fetchAccounts:(id /* block */)arg1;
- (id)findMyProvider;
- (id)initWithFindMyProvider:(id)arg1;
- (id /* block */)pendingWalrusValidationCompletion;
- (void)preparationRequiredForPrimaryAppleAccountWithCompletion:(id /* block */)arg1;
- (void)preparePrimaryAppleAccountForSignOutWithPresentingViewController:(id)arg1 completion:(id /* block */)arg2;
- (id)presentingViewController;
- (id)recoveryFactorController;
- (void)recoveryFactorController:(id)arg1 didFinishAddingRecoveryContactWithError:(id)arg2;
- (id)serviceOwnersManager;
- (void)setAccountManager:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setCachedLocalSecret:(id)arg1;
- (void)setFindMyProvider:(id)arg1;
- (void)setPendingWalrusValidationCompletion:(id /* block */)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setRecoveryFactorController:(id)arg1;
- (void)setServiceOwnersManager:(id)arg1;
- (void)setWalrusStateController:(id)arg1;
- (void)signOutFlowController:(id)arg1 disableFindMyDeviceForAccount:(id)arg2 completion:(id /* block */)arg3;
- (void)signOutFlowController:(id)arg1 performWalrusValidationForAccount:(id)arg2 completion:(id /* block */)arg3;
- (void)signOutFlowController:(id)arg1 showAlertWithTitle:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)signOutFlowController:(id)arg1 signOutAccount:(id)arg2 completion:(id /* block */)arg3;
- (void)signOutPrimaryAppleAccountWithPresentingViewController:(id)arg1 completion:(id /* block */)arg2;
- (id)walrusStateController;

@end
