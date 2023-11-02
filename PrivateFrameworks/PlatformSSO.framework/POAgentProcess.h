
@interface POAgentProcess : NSObject <POServiceProtocol> {
    POAuthenticationProcess * _authenticationProcess;
    PODirectoryServices * _directoryServices;
    NSDistributedNotificationCenter * _distributedNotificationCenter;
    id /* block */  _invalidationHandler;
    POKeyWrap * _keyWrap;
    POKeychainHelper * _keychainHelper;
    POAgentAuthenticationProcess * _process;
    NSXPCConnection * _xpcConnection;
}

@property (retain) POAuthenticationProcess *authenticationProcess;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PODirectoryServices *directoryServices;
@property (retain) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ invalidationHandler;
@property (retain) POKeyWrap *keyWrap;
@property (retain) POKeychainHelper *keychainHelper;
@property (retain) POAgentAuthenticationProcess *process;
@property (readonly) Class superclass;

+ (id)retainedContexts;

- (void).cxx_destruct;
- (void)_saveCredentialForUserName:(id)arg1 passwordContext:(id)arg2 completion:(id /* block */)arg3;
- (void)_verifyLogin:(id)arg1 passwordContext:(id)arg2 smartCardContext:(id)arg3 tokenId:(id)arg4 deviceConfiguration:(id)arg5 loginConfiguration:(id)arg6 forAuthorization:(bool)arg7 completion:(id /* block */)arg8;
- (id)authenticationProcess;
- (void)connectionInvalidated;
- (id)directoryServices;
- (id)distributedNotificationCenter;
- (void)getLoginTypeForUser:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithAuthenticationProcess:(id)arg1;
- (id)initWithXPCConnection:(id)arg1 authenticationProcess:(id)arg2;
- (id /* block */)invalidationHandler;
- (id)keyWrap;
- (id)keychainHelper;
- (void)passwordDidChangeForUsername:(id)arg1 passwordContext:(id)arg2 completion:(id /* block */)arg3;
- (void)performLocalPasswordLogin:(id)arg1 passwordContext:(id)arg2 completion:(id /* block */)arg3;
- (void)performPasswordLogin:(id)arg1 loginUserName:(id)arg2 passwordContext:(id)arg3 updateLocalAccountPassword:(bool)arg4 completion:(id /* block */)arg5;
- (void)performPasswordLogin:(id)arg1 passwordContext:(id)arg2 updateLocalAccountPassword:(bool)arg3 completion:(id /* block */)arg4;
- (id)process;
- (void)retainContextForUserName:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)saveCredentialForUserName:(id)arg1 passwordContext:(id)arg2 completion:(id /* block */)arg3;
- (void)screenDidUnlockWithCredentialContext:(id)arg1 smartCardContext:(id)arg2 tokenId:(id)arg3 atLogin:(bool)arg4 tokenUnlock:(bool)arg5 completion:(id /* block */)arg6;
- (void)setAuthenticationProcess:(id)arg1;
- (void)setDirectoryServices:(id)arg1;
- (void)setDistributedNotificationCenter:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setKeyWrap:(id)arg1;
- (void)setKeychainHelper:(id)arg1;
- (void)setProcess:(id)arg1;
- (void)updateLocalAccountPassword:(id)arg1 passwordContext:(id)arg2 completion:(id /* block */)arg3;
- (void)updateLocalAccountPassword:(id)arg1 passwordContextData:(id)arg2 completion:(id /* block */)arg3;
- (bool)verifyAgentEntitlement;
- (bool)verifyLoginUserEntitlement;
- (bool)verifyPasswordChangeEntitlement;
- (void)verifyPasswordLogin:(id)arg1 passwordContext:(id)arg2 completion:(id /* block */)arg3;

@end
