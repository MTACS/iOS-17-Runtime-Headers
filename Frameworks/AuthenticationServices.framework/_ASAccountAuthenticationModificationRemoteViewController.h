
@interface _ASAccountAuthenticationModificationRemoteViewController : _UIRemoteViewController <ASAccountAuthenticationModificationRemoteViewControllerProtocol> {
    <_ASAccountAuthenticationModificationRemoteViewControllerDelegate> * _delegate;
}

@property (nonatomic) <_ASAccountAuthenticationModificationRemoteViewControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (void)dismissAccountModificationRemoteViewController;
- (void)presentAccountModificationRemoteViewController;
- (void)requestDidFailWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)requestDidFinishWithCredential:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)requestToUpgradeToSignInWithAppleDidFinishWithUserInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)updateCredential:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4;
- (void)upgradeCredentialToSignInWithApple:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
