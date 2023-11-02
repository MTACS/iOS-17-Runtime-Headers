
@protocol PKSubcredentialProvisioningFlowControllerDelegate <NSObject>

@required

- (void)subcredentialProvisioningFlowController:(id <PKSubcredentialProvisioningFlowController>)arg1 didFinishWithPass:(PKPaymentPass *)arg2 error:(NSError *)arg3;
- (void)userCanceledPairingWithSubcredentialProvisioningFlowController:(id <PKSubcredentialProvisioningFlowController>)arg1;

@end
