
@protocol PKSubcredentialPairingFlowControllerProtocol <PKSubcredentialProvisioningFlowController>

@required

- (UIAlertController *)alertForOperation:(void *)arg1 withError:(void *)arg2 retryHandler:(void *)arg3 cancelationHandler:(void *)arg4; // needs 4 arg types, found 12: <PKSubcredentialPairingFlowControllerOperation> *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (<PKSubcredentialProvisioningViewModelProtocol> *)localDeviceProvisioningViewModelForOperation:(id <PKSubcredentialLocalDevicePairingFlowControllerOperation>)arg1;
- (void)prewarmPairingWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKSubcredentialPairingFlowControllerContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<PKSubcredentialProvisioningViewModelProtocol> *)remoteDeviceProvisioningViewModelForOperation:(id <PKSubcredentialRemoteDevicePairingFlowControllerOperation>)arg1;

@end
