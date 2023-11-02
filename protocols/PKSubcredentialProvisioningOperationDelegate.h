
@protocol PKSubcredentialProvisioningOperationDelegate <NSObject>

@required

- (void)operation:(PKSubcredentialProvisioningOperation *)arg1 addedCredential:(PKAppletSubcredential *)arg2;
- (void)operation:(PKSubcredentialProvisioningOperation *)arg1 addedPass:(PKPaymentPass *)arg2;
- (void)operation:(PKSubcredentialProvisioningOperation *)arg1 advanceToState:(long long)arg2;
- (void)operation:(PKSubcredentialProvisioningOperation *)arg1 failWithError:(NSError *)arg2;
- (void)operationWasCanceled:(PKSubcredentialProvisioningOperation *)arg1;

@end
