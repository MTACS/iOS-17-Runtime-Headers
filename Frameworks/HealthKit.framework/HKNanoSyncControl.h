
@interface HKNanoSyncControl : NSObject <HKNanoSyncControlClient, _HKXPCExportable> {
    HKProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchNanoSyncPairedDevicesWithCompletion:(id /* block */)arg1;
- (void)forceLastChanceNanoSyncWithCompletion:(id /* block */)arg1;
- (void)forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)forceNanoSyncWithPullRequest:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;
- (void)resetNanoSyncWithCompletion:(id /* block */)arg1;
- (void)waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;

@end
