
@interface NRDevicePairingManager : NSObject {
    id /* block */  _authRequestHandler;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _candidateDiscoveredHandler;
    id /* block */  _candidateLostHandler;
    NSData * _extendedMetadata;
    id /* block */  _invalidationHandler;
    unsigned long long  _managerState;
    NSString * _name;
    NRDevicePairingCriteria * _pairingCriteria;
}

@property (nonatomic, copy) id /* block */ authRequestHandler;
@property (nonatomic, copy) id /* block */ candidateDiscoveredHandler;
@property (nonatomic, copy) id /* block */ candidateLostHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) unsigned long long managerState;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id /* block */)authRequestHandler;
- (void)cancelDiscovery;
- (void)cancelPairing;
- (id /* block */)candidateDiscoveredHandler;
- (id /* block */)candidateLostHandler;
- (id)initWithDeviceName:(id)arg1 pairingCriteria:(id)arg2 extendedMetadata:(id)arg3 queue:(id)arg4;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (unsigned long long)managerState;
- (void)prepareForPairingWithCompletion:(id /* block */)arg1;
- (void)requestAuthMethodForDevice:(id)arg1 authMethod:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)retrieveExtendedMetadata:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setAuthRequestHandler:(id /* block */)arg1;
- (void)setCandidateDiscoveredHandler:(id /* block */)arg1;
- (void)setCandidateLostHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setManagerState:(unsigned long long)arg1;
- (void)startDiscoveryWithCompletion:(id /* block */)arg1;
- (void)startPairingDevice:(id)arg1 withCompletion:(id /* block */)arg2 resultBlock:(id /* block */)arg3;

@end
