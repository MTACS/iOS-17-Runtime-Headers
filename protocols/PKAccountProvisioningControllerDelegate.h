
@protocol PKAccountProvisioningControllerDelegate <NSObject>

@optional

- (void)accountProvisioningController:(PKAccountProvisioningController *)arg1 displayableError:(NSError *)arg2;
- (void)accountProvisioningControllerUpdatedState:(PKAccountProvisioningController *)arg1;

@end
