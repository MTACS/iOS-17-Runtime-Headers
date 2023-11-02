
@interface PKPaymentSetupAssistantExpressController : PKPaymentSetupAssistantController

- (id)_provisioningContextWithProvisioningController:(id)arg1 setupAssistantCredentials:(id)arg2 maximumSelectable:(unsigned long long)arg3;
- (id)_setupAssistantCredentialForPaymentCredential:(id)arg1;
- (id)_setupAssistantCredentialForPaymentPass:(id)arg1;
- (void)expressSetupFlowForSetupProvisioningContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)expressSetupProvisioningContext:(id /* block */)arg1;

@end
