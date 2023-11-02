
@interface SFAppleIDClient : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSXPCConnection * _syncXPCCnx;
    NSXPCConnection * _xpcAuthCnx;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (void)_copyCertificateForAppleID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_copyIdentityForAppleID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_ensureAuthXPCStarted;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_myAccountWithCompletion:(id /* block */)arg1;
- (void)_personInfoWithEmailOrPhone:(id)arg1 completion:(id /* block */)arg2;
- (void)authenticateAccountWithAppleID:(id)arg1 password:(id)arg2 completion:(id /* block */)arg3;
- (void)copyCertificateForAppleID:(id)arg1 withCompletion:(id /* block */)arg2;
- (struct __SecIdentity { }*)copyIdentityForAppleID:(id)arg1 error:(id*)arg2;
- (void)copyIdentityForAppleID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)dealloc;
- (id)dispatchQueue;
- (void)ensureSyncXPCStarted;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)myAccountWithCompletion:(id /* block */)arg1;
- (id)myAccountWithError:(id*)arg1;
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(id /* block */)arg2;
- (void)requestWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)statusInfoWithCompletion:(id /* block */)arg1;
- (id)syncRemoteProxyWithError:(id*)arg1;

@end
