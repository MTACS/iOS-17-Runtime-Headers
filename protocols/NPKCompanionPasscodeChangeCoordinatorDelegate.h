
@protocol NPKCompanionPasscodeChangeCoordinatorDelegate <NSObject>

@required

- (void)passcodeChangeCoordinator:(void *)arg1 checkRemoteDeviceLockStateWithCompletion:(void *)arg2; // needs 2 arg types, found 8: <NPKCompanionPasscodeChangeCoordinatorProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)passcodeChangeCoordinator:(void *)arg1 remoteDeviceShouldCancelPasscodeChangeWithCompletion:(void *)arg2; // needs 2 arg types, found 8: <NPKCompanionPasscodeChangeCoordinatorProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)passcodeChangeCoordinator:(void *)arg1 remoteDeviceShouldInitiatePasscodeChangeForType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: <NPKCompanionPasscodeChangeCoordinatorProtocol> *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
