
@interface HMMTRSystemCommissionerPairingManager : HMFObject <HMFLogging> {
    HMMTRAccessoryServerBrowser * _browser;
    HMMTRStorage * _storage;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMMTRAccessoryServerBrowser *browser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMMTRStorage *storage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_cleanUpStaleSystemCommissionerPairingsWithNewlyPairedUUID:(id)arg1 vendorID:(id)arg2 productID:(id)arg3 serialNumber:(id)arg4 setupPayload:(id)arg5;
- (void)_fetchAllDevicePairingsForSystemCommissionerDevicePairingWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchSystemCommissionerPairingsWithCompletionHandler:(id /* block */)arg1;
- (void)_openCommissioningWindowForSystemCommissionerPairingUUID:(id)arg1 duration:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)_readCommissioningWindowStatusForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeDevicePairingWithUUID:(id)arg1 forSystemCommissionerPairingUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_removeSystemCommissionerPairingWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)browser;
- (void)cleanUpStaleSystemCommissionerPairingsWithNewlyPairedUUID:(id)arg1 vendorID:(id)arg2 productID:(id)arg3 serialNumber:(id)arg4 setupPayload:(id)arg5;
- (void)fetchDevicePairingsForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchSystemCommissionerPairingsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1 accessoryServerBrowser:(id)arg2;
- (void)openCommissioningWindowForSystemCommissionerPairingUUID:(id)arg1 duration:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)readCommissioningWindowStatusForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDevicePairingWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDevicePairingWithUUID:(id)arg1 forSystemCommissionerPairingUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeSystemCommissionerPairingWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)storage;
- (id)workQueue;

@end
