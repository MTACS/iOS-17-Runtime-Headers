
@interface PKSubcredentialProvisioningAddPassOperation : PKSubcredentialProvisioningOperation {
    PKAppletSubcredential * _addedCredential;
    PKPaymentPass * _downloadedPass;
}

- (void).cxx_destruct;
- (void)addPassToLibrary:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)configureExpressModeForPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (void)performOperation;
- (void)performOperationWithCompletion:(id /* block */)arg1;
- (void)updatePassMetadata:(id)arg1 withCompletion:(id /* block */)arg2;

@end
