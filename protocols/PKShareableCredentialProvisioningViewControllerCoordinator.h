
@protocol PKShareableCredentialProvisioningViewControllerCoordinator <NSObject>

@required

- (void)cancel;
- (void)continueProvisioning;
- (void)shareableViewController:(PKShareableCredentialProvisioningViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)startProvisioningWithConfiguration:(PKAddShareablePassConfiguration *)arg1;
- (void)startProvisioningWithCredentials:(NSArray *)arg1;

@end
