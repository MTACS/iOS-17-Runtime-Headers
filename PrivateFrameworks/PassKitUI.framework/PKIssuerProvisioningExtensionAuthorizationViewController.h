
@interface PKIssuerProvisioningExtensionAuthorizationViewController : UINavigationController {
    id /* block */  _completionHandler;
}

- (void).cxx_destruct;
- (void)_cancel;
- (void)_failWithApplicationName:(id)arg1;
- (void)_invokeCompletionWithAuthorized:(bool)arg1;
- (void)dealloc;
- (id)initWithExtension:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
