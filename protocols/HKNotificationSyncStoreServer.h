
@protocol HKNotificationSyncStoreServer <NSObject>

@required

- (void)remote_fakeReceivedNotificationInstruction:(void *)arg1 sendingDeviceInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKNotificationInstruction *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_notificationHoldInstructionsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)remote_obliterateNotificationInstructionsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_sendNewDeviceNotificationWithMessageKind:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_sendNotificationInstruction:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKNotificationInstruction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_sendNotificationInstruction:(void *)arg1 savingObjectAsExistsCriteria:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKNotificationInstruction *, HKObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
