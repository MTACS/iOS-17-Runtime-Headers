
@interface SPPairingManager : NSObject {
    <SPPairingManagerXPCProtocol> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    FMXPCServiceDescription * _serviceDescription;
    FMXPCSession * _session;
}

@property (nonatomic, retain) <SPPairingManagerXPCProtocol> *proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;
@property (nonatomic, retain) FMXPCSession *session;

- (void).cxx_destruct;
- (void)allPairingErrorsWithCompletion:(id /* block */)arg1;
- (void)alwaysBeaconWildStateWithCompletion:(id /* block */)arg1;
- (void)currentBeaconingKeyWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)finalizePairingWithSession:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (void)finalizePairingWithSession:(id)arg1 name:(id)arg2 roleId:(long long)arg3 roleEmoji:(id)arg4 keyStatus:(id)arg5 collaborativeKey:(id)arg6 signature:(id)arg7 completion:(id /* block */)arg8;
- (void)getLocalPairingDataWithCompletion:(id /* block */)arg1;
- (void)getOfflineFindingInfoWithCurrentData:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)initiatePairingSessionWithCompletion:(id /* block */)arg1;
- (void)invalidatePairingSession:(id)arg1 completion:(id /* block */)arg2;
- (id)proxy;
- (id)queue;
- (id)remoteInterface;
- (id)serviceDescription;
- (id)session;
- (void)setAlwaysBeaconState:(bool)arg1 completion:(id /* block */)arg2;
- (void)setAlwaysBeaconWildState:(bool)arg1 completion:(id /* block */)arg2;
- (void)setProxy:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setSession:(id)arg1;
- (void)unpairUUID:(id)arg1 force:(bool)arg2 completion:(id /* block */)arg3;
- (id)userAgentProxy;
- (void)verifyPairingWithPairingSession:(id)arg1 signature:(id)arg2 attestation:(id)arg3 systemPublicKey:(id)arg4 refKeyPublicKey:(id)arg5 systemVersion:(id)arg6 vendorId:(long long)arg7 productId:(long long)arg8 ecid:(id)arg9 chipId:(id)arg10 serialNumber:(id)arg11 collaborativeKey:(id)arg12 completion:(id /* block */)arg13;

@end
