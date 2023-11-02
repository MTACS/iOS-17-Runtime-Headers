
@interface AASilentSignOutFlowControllerDelegate : NSObject <AASignOutFlowControllerDelegate> {
    AIDAAccountManager * _accountManager;
    ACAccountStore * _accountStore;
    id /* block */  _pendingSignOutCompletion;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountManager;
- (id)init;
- (void)setAccountManager:(id)arg1;
- (void)signOutFlowController:(id)arg1 disableFindMyDeviceForAccount:(id)arg2 completion:(id /* block */)arg3;
- (void)signOutFlowController:(id)arg1 performWalrusValidationForAccount:(id)arg2 completion:(id /* block */)arg3;
- (void)signOutFlowController:(id)arg1 showAlertWithTitle:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)signOutFlowController:(id)arg1 signOutAccount:(id)arg2 completion:(id /* block */)arg3;

@end
