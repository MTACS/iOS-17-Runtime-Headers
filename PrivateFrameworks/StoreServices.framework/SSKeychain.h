
@interface SSKeychain : NSObject {
    SSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

- (void).cxx_destruct;
- (void)_sendMessage:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)createAttestationDataForAccountIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)createAttestationDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 completionBlock:(id /* block */)arg3;
- (void)createX509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 completionBlock:(id /* block */)arg3;
- (void)deleteKeychainTokensForAccountIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getPublicKeyDataForAccountIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getPublicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 completionBlock:(id /* block */)arg3;
- (id)init;
- (void)keyCountForAccountIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)signData:(id)arg1 context:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)signData:(id)arg1 reason:(id)arg2 fallback:(id)arg3 cancel:(id)arg4 forAccountIdentifier:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)x509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 regenerateCerts:(bool)arg3 completionBlock:(id /* block */)arg4;

@end
