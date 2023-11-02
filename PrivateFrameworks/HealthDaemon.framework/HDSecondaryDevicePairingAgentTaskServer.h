
@interface HDSecondaryDevicePairingAgentTaskServer : HDStandardTaskServer <HKSecondaryDevicePairingAgentServerInterface> {
    HDSecondaryDevicePairingRequest * _currentRequest;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _taskDidTimeout;
    NSObject<OS_dispatch_source> * _timeoutSource;
    double  _tinkerSharingSetupTimeout;
    id /* block */  _unitTest_timeoutTriggered;
}

@property (nonatomic) double tinkerSharingSetupTimeout;
@property (copy) id /* block */ unitTest_timeoutTriggered;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchSharingStatusWithPairedGuardianWithCompletion:(id /* block */)arg1;
- (void)remote_performEndToEndCloudSyncWithNRDeviceUUID:(id)arg1 syncParticipantFirst:(bool)arg2 completion:(id /* block */)arg3;
- (void)remote_requestTinkerSharingOptInWithGuardianDisplayName:(id)arg1 NRDeviceUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_tearDownHealthSharingWithPairedGuardianWithCompletion:(id /* block */)arg1;
- (void)remote_tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)setTinkerSharingSetupTimeout:(double)arg1;
- (void)setUnitTest_timeoutTriggered:(id /* block */)arg1;
- (double)tinkerSharingSetupTimeout;
- (id /* block */)unitTest_timeoutTriggered;

@end
