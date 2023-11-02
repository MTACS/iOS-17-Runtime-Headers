
@interface AKFidoUIController : NSObject <AAFXPCSessionDelegate, AKFidoInterface> {
    AAFXPCSession * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AAFXPCSession *remoteService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithXPCSession:(id)arg1;
- (void)registerFidoKeyWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteService;
- (void)setRemoteService:(id)arg1;
- (void)verifyFidoKeyWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)verifyFidoKeyWithFidoContext:(id)arg1 completion:(id /* block */)arg2;
- (void)verifyFidoRecoveryWithContext:(id)arg1 recoveryToken:(id)arg2 completion:(id /* block */)arg3;

@end
