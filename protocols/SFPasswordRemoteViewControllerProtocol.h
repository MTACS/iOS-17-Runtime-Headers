
@protocol SFPasswordRemoteViewControllerProtocol <NSObject>

@required

- (void)willDismissServiceViewController;

@optional

- (void)performUpgradeToSignInWithAppleForCredential:(ASPasswordCredential *)arg1 serviceIdentifier:(ASCredentialServiceIdentifier *)arg2;
- (void)performUpgradeToStrongPasswordForCredential:(ASPasswordCredential *)arg1 serviceIdentifier:(ASCredentialServiceIdentifier *)arg2;

@end
