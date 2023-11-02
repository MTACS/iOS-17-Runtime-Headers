
@interface ASCAgentProxy : NSObject <ASCAgentProtocol> {
    NSObject<OS_os_activity> * _activity;
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    id /* block */  _failureHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_reconnectIfNecessary;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_savedAccountContextFromSafariApplicationWithRequestContext:(id)arg1;
- (void)_setUpConnection:(id)arg1;
- (void)cancelCurrentRequest;
- (void)clearAllPlatformPublicKeyCredentialsWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteAllPasskeysForRelyingParty:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deletePasskeyForRelyingParty:(id)arg1 withCredentialID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getArePasskeysDisallowedForRelyingParty:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getCanCurrentProcessAccessPasskeysForRelyingParty:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getPasskeysDataForRelyingParty:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithFailureHandler:(id /* block */)arg1;
- (void)openCABLEURL:(id)arg1 fromSourceApplication:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)openCredentialProviderAppSettingsWithCompletionHandler:(id /* block */)arg1;
- (void)openVerificationCodeAppSettingsWithCompletionHandler:(id /* block */)arg1;
- (void)performAuthorizationRequestsForContext:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)performSilentAuthorizationRequestsForContext:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)preflightCanCreateICloudKeychainPasskeyWithCompletionHandler:(id /* block */)arg1;

@end
