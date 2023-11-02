
@protocol PKSubcredentialProvisioningControllerDelegate <NSObject>

@required

- (void)subcredentialProvisioningController:(PKSubcredentialProvisioningController *)arg1 didFinishWithPass:(PKPaymentPass *)arg2;

@optional

- (void)subcredentialProvisioningController:(PKSubcredentialProvisioningController *)arg1 didEnterState:(long long)arg2;
- (void)subcredentialProvisioningController:(PKSubcredentialProvisioningController *)arg1 didFinishWithError:(NSError *)arg2;
- (void)subcredentialProvisioningController:(PKSubcredentialProvisioningController *)arg1 didFinishWithError:(NSError *)arg2 inState:(long long)arg3;
- (void)subcredentialProvisioningController:(void *)arg1 shouldFailAfterError:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: PKSubcredentialProvisioningController *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
