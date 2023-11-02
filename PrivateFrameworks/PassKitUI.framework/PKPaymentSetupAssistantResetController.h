
@interface PKPaymentSetupAssistantResetController : PKPaymentSetupAssistantCoreController

- (id)_provisioningContextWithProvisioningController:(id)arg1 setupAssistantCredentials:(id)arg2 maximumSelectable:(unsigned long long)arg3;
- (id)_setupAssistantCredentialForPaymentCredential:(id)arg1;
- (id)_setupAssistantCredentialForPaymentPass:(id)arg1;
- (void)expressResetCardsWithCompletion:(id /* block */)arg1;

@end
