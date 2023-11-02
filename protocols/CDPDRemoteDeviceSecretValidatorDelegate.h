
@protocol CDPDRemoteDeviceSecretValidatorDelegate <CDPDDeviceSecretValidatorDelegate>

@required

- (void)cancelRemoteSecretValidatorApplicationToJoinCircle:(CDPDRemoteDeviceSecretValidator *)arg1;
- (void)remoteSecretValidator:(void *)arg1 applyToJoinCircleWithJoinHandler:(void *)arg2; // needs 2 arg types, found 8: CDPDRemoteDeviceSecretValidator *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remoteSecretValidator:(void *)arg1 attemptCustodianRecoveryWithInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPDRemoteDeviceSecretValidator *, CDPCustodianRecoveryInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
