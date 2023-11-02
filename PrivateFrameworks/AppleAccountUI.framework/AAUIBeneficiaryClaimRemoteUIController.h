
@interface AAUIBeneficiaryClaimRemoteUIController : NSObject <RemoteUIControllerDelegate> {
    ACAccount * _appleAccount;
    AKAppleIDAuthenticationController * _authController;
    AAUIRemoteUIController * _benefeciaryClaimRemoteUIController;
    NSString * _claimCode;
    RUIObjectModel * _currentObjectModel;
    ACAccount * _grandSlamAccount;
    NSString * _secondaryToken;
    AKAppleIDServerResourceLoadDelegate * _serverUILoadDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHeadersToRequest:(id)arg1;
- (id)_authController;
- (void)_cancelButtonForRemoteObjectModelWasTapped:(id)arg1;
- (void)_getServerUILoadDelegateWithCompletion:(id /* block */)arg1;
- (id)_grandSlamAccount;
- (void)_handleObjectModelChangeForController:(id)arg1 objectModel:(id)arg2 isModal:(bool)arg3;
- (id)initWithAppleAccount:(id)arg1 claimCode:(id)arg2;
- (void)presentRemoteUIFromNavigationController:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)remoteUIController:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;
- (bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;

@end
