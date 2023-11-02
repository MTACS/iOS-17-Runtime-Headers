
@interface BTCloudServicesClient : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSXPCListenerEndpoint * _testListenerEndpoint;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) NSXPCListenerEndpoint *testListenerEndpoint;

- (void).cxx_destruct;
- (bool)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)accountInfoWithCompletion:(id /* block */)arg1;
- (void)cloudPairingIdentifierForPeripheral:(id)arg1 completion:(id /* block */)arg2;
- (void)createDeviceRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)createDeviceSupportInformationRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)createMagicSettingsRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)createSoundProfileRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteDeviceRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteDeviceSupportInformationRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteMagicSettingsRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteSoundProfileRecordWithCompletion:(id /* block */)arg1;
- (void)deviceRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)deviceRecordsWithCompletion:(id /* block */)arg1;
- (void)deviceSupportInformationRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)deviceSupportInformationRecordsWithCompletion:(id /* block */)arg1;
- (id)dispatchQueue;
- (void)fetchSoundProfileRecordWithCompletion:(id /* block */)arg1;
- (void)forceCloudPairingForIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)magicSettingsRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)magicSettingsRecordsWithCompletion:(id /* block */)arg1;
- (void)modifyDeviceRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)modifyDeviceSupportInformationRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)modifyMagicSettingsRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)modifySoundProfileRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setTestListenerEndpoint:(id)arg1;
- (id)testListenerEndpoint;

@end
