
@interface AASignOutFlowController : NSObject {
    ACAccountStore * _accountStore;
    <AASignOutFlowControllerDelegate> * _delegate;
}

@property (nonatomic) <AASignOutFlowControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_delegate_disableFindMyDeviceForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_delegate_performWalrusValidationForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_delegate_presentError:(id)arg1 withTitle:(id)arg2;
- (void)_delegate_signOutAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_disableDeviceLocatorForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_performWalrusValidationForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_preflightSignOutOfAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_signOutAppleAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)signOutAppleAccount:(id)arg1 completion:(id /* block */)arg2;

@end
