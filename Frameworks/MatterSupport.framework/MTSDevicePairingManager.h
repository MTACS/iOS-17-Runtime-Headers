
@interface MTSDevicePairingManager : NSObject <HMFLogging> {
    MTSXPCServerProxy * _serverProxy;
    MTSSystemCommissionerPairing * _systemCommissionerPairing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MTSXPCServerProxy *serverProxy;
@property (readonly) Class superclass;
@property (readonly, copy) MTSSystemCommissionerPairing *systemCommissionerPairing;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchPairingsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithSystemCommissionerPairing:(id)arg1;
- (id)initWithSystemCommissionerPairing:(id)arg1 serverProxy:(id)arg2;
- (id)logIdentifier;
- (void)openCommissioningWindowWithDuration:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)readCommissioningWindowStatusWithCompletionHandler:(id /* block */)arg1;
- (void)removeAllPairingsWithCompletionHandler:(id /* block */)arg1;
- (void)removePairingWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serverProxy;
- (id)systemCommissionerPairing;

@end
