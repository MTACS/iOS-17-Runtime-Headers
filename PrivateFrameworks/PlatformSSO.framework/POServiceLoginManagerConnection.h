
@interface POServiceLoginManagerConnection : NSObject <POServiceLoginManagerProtocol> {
    unsigned int  _uid;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property unsigned int uid;
@property (retain) NSXPCConnection *xpcConnection;

+ (id)xpcQueue;

- (void).cxx_destruct;
- (bool)_connectToService;
- (void)attestKey:(long long)arg1 clientDataHash:(id)arg2 completion:(id /* block */)arg3;
- (void)copyDeviceAttestationCertificateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)deviceRegistrationsNeedsRepairWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithUid:(unsigned int)arg1;
- (void)invalidate;
- (void)isDeviceRegisteredWithCompletion:(id /* block */)arg1;
- (void)isUserRegisteredWithCompletion:(id /* block */)arg1;
- (void)loginConfigurationWithCompletion:(id /* block */)arg1;
- (void)loginUserNameWithCompletion:(id /* block */)arg1;
- (void)presentRegistrationViewControllerWithCompletion:(id /* block */)arg1;
- (void)registrationTokenWithCompletion:(id /* block */)arg1;
- (void)resetDeviceKeysWithCompletion:(id /* block */)arg1;
- (void)resetUserSecureEnclaveKeyWithCompletion:(id /* block */)arg1;
- (void)secIdentityProxyEndpointForKeyType:(long long)arg1 completion:(id /* block */)arg2;
- (void)secKeyProxyEndpointForKeyType:(long long)arg1 completion:(id /* block */)arg2;
- (void)setCertificateData:(id)arg1 keyType:(long long)arg2 completion:(id /* block */)arg3;
- (void)setLoginConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)setLoginUserName:(id)arg1 completion:(id /* block */)arg2;
- (void)setRegistrationToken:(id)arg1 completion:(id /* block */)arg2;
- (void)setSsoTokens:(id)arg1 completion:(id /* block */)arg2;
- (void)setUid:(unsigned int)arg1;
- (void)setUserLoginConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)setXpcConnection:(id)arg1;
- (void)ssoTokensWithCompletion:(id /* block */)arg1;
- (unsigned int)uid;
- (void)userLoginConfigurationWithCompletion:(id /* block */)arg1;
- (void)userNeedsReauthenticationWithCompletion:(id /* block */)arg1;
- (void)userRegistrationsNeedsRepairWithCompletion:(id /* block */)arg1;
- (id)xpcConnection;

@end
