
@interface HKSecondaryDevicePairingAgent : NSObject <_HKXPCExportable> {
    HKHealthStore * _healthStore;
    NSUUID * _identifier;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSharingStatusWithPairedGuardianWithCompletion:(id /* block */)arg1;
- (id)initWithHealthStore:(id)arg1;
- (void)performEndToEndCloudSyncWithNRDeviceUUID:(id)arg1 syncParticipantFirst:(bool)arg2 completion:(id /* block */)arg3;
- (id)remoteInterface;
- (void)requestTinkerSharingOptInWithGuardianDisplayName:(id)arg1 NRDeviceUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)tearDownHealthSharingWithPairedGuardianWithCompletion:(id /* block */)arg1;
- (void)tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)arg1 completion:(id /* block */)arg2;

@end
