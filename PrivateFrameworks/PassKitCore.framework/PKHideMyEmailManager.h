
@interface PKHideMyEmailManager : NSObject {
    AKPrivateEmailController * _controller;
    unsigned long long  _isAvailable;
}

- (void).cxx_destruct;
- (bool)_isHSA2Enabled;
- (id)_primaryAccount;
- (id)_primaryAccountAltDSID;
- (void)bestDomainForAppIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)createHideMyEmailAddressWithKey:(id)arg1 completion:(id /* block */)arg2;
- (void)findHideMyEmailAddressWithKey:(id)arg1 completion:(id /* block */)arg2;
- (id)forwardingEmailForPrimaryAccount;
- (id)init;
- (bool)isAccountConfigured;
- (void)isAvailable:(id /* block */)arg1;
- (void)registerHideMyEmailAddressWithKey:(id)arg1 originIdentifier:(id)arg2 merchantIdentifier:(id)arg3 isWebPayment:(bool)arg4 completion:(id /* block */)arg5;

@end
