
@interface AAUISignOutFlowControllerDelegate : NSObject <AASignOutFlowControllerDelegate, AAUIRecoveryFactorControllerDelegate, AAUISignOutControllerDelegate> {
    AIDAAccountManager * _accountManager;
    ACAccountStore * _accountStore;
    id /* block */  _pendingSignOutCompletion;
    id /* block */  _pendingWalrusValidationCompletion;
    UIViewController * _presentingViewController;
    AAUIRecoveryFactorController * _recoveryFactorController;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completedRestoreFromiCloud:(id /* block */)arg1;
- (void)_disableDeviceLocatorForAccount:(id)arg1 inViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)_offerManateeRepairWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_performLastDeviceCheckForAccount:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)_presentLastDeviceAlertForAccount:(id)arg1 withRecoveryFactors:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)_recoveryFactorController;
- (id)accountManager;
- (id)init;
- (id)initWithPresentingViewController:(id)arg1;
- (id)presentingViewController;
- (void)recoveryFactorController:(id)arg1 didFinishAddingRecoveryContactWithError:(id)arg2;
- (void)setAccountManager:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)signOutController:(id)arg1 didCompleteWithSuccess:(bool)arg2 error:(id)arg3;
- (void)signOutControllerDidCancel:(id)arg1;
- (void)signOutFlowController:(id)arg1 disableFindMyDeviceForAccount:(id)arg2 completion:(id /* block */)arg3;
- (void)signOutFlowController:(id)arg1 performWalrusValidationForAccount:(id)arg2 completion:(id /* block */)arg3;
- (void)signOutFlowController:(id)arg1 showAlertWithTitle:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)signOutFlowController:(id)arg1 signOutAccount:(id)arg2 completion:(id /* block */)arg3;

@end
