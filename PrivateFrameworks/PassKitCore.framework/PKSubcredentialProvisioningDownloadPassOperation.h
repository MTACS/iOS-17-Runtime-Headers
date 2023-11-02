
@interface PKSubcredentialProvisioningDownloadPassOperation : PKSubcredentialProvisioningOperation {
    PKAppletSubcredential * _addedCredential;
    NSURL * _passURL;
}

- (void).cxx_destruct;
- (void)downloadPassAtURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (void)performOperation;
- (void)performOperationWithCompletion:(id /* block */)arg1;

@end
