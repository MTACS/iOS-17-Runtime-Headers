
@interface AKWalrusController : NSObject <AAFXPCSessionDelegate> {
    AAFXPCSession * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)PCSAuthContextForWebSessionIdentifier:(id)arg1 serviceName:(id)arg2 completion:(id /* block */)arg3;
- (void)PCSAuthContextForWebSessionUUID:(id)arg1 serviceName:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)postWalrusStateUpdateToServerWithContext:(id)arg1 urlBagKey:(id)arg2 username:(id)arg3 password:(id)arg4 completion:(id /* block */)arg5;
- (void)removeAllPCSAuthCredentialWithCompletion:(id /* block */)arg1;
- (void)verifyEnableWalrusAllowedWithContext:(id)arg1 completion:(id /* block */)arg2;

@end
