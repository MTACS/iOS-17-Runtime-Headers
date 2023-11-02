
@protocol HKSecondaryDevicePairingAgentServerInterface <HKUnitTestingTaskServerInterface>

@required

- (void)remote_fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_fetchSharingStatusWithPairedGuardianWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_performEndToEndCloudSyncWithNRDeviceUUID:(void *)arg1 syncParticipantFirst:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_requestTinkerSharingOptInWithGuardianDisplayName:(void *)arg1 NRDeviceUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKSecondaryPairedDeviceConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_tearDownHealthSharingWithPairedGuardianWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_tearDownHealthSharingWithTinkerDeviceWithNRUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
