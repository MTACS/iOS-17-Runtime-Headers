
@interface HDNanoSyncControlServer : HDStandardTaskServer <HKNanoSyncControlServer> {
    HDNanoSyncManager * _nanoSyncManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_fetchNanoSyncPairedDevicesWithCompletion:(id /* block */)arg1;
- (void)remote_forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)remote_resetNanoSyncWithCompletion:(id /* block */)arg1;
- (void)remote_waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;

@end
