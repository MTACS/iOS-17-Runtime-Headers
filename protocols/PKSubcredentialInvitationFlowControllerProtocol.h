
@protocol PKSubcredentialInvitationFlowControllerProtocol <PKSubcredentialProvisioningFlowController>

@required

- (UIAlertController *)alertForOperation:(void *)arg1 withError:(void *)arg2 retryHandler:(void *)arg3 cancelationHandler:(void *)arg4; // needs 4 arg types, found 12: <PKSubcredentialInvitationFlowControllerOperation> *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (<PKSubcredentialProvisioningViewModelProtocol> *)localDeviceProvisioningViewModelForOperation:(id <PKSubcredentialInvitationProvisioningFlowControllerOperation>)arg1;
- (<PKSubcredentialProvisioningViewModelProtocol> *)remoteDeviceProvisioningViewModelForOperation:(id <PKSubcredentialInvitationProvisioningFlowControllerOperation>)arg1;

@end
