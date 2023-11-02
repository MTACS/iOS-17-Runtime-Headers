
@interface HMDMTSPairingServer : HMFObject <HMFLogging, MTSDevicePairingServerInterface, MTSSystemCommissionerPairingServerInterface> {
    HMMTRSystemCommissionerPairingManager * _systemCommissionerPairingManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) HMMTRSystemCommissionerPairingManager *systemCommissionerPairingManager;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)fetchDevicePairingsForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchSystemCommissionerPairingsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithAccessoryBrowser:(id)arg1;
- (id)initWithSystemCommissionerPairingManager:(id)arg1;
- (void)openCommissioningWindowForSystemCommissionerPairingUUID:(id)arg1 duration:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)readCommissioningWindowStatusForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDevicePairingWithUUID:(id)arg1 forSystemCommissionerPairingUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeSystemCommissionerPairingWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)systemCommissionerPairingManager;

@end
