
@interface PKIssuerProvisioningExtensionAuthorizationRemoteViewController : _UIRemoteViewController <PKIssuerProvisioningExtensionAuthorizationRemoteViewController> {
    id /* block */  _completionHandler;
    bool  _finished;
    long long  _result;
}

+ (id)exportedInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (bool)_isPresentationContextByDefault;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)pkui_finish;
- (void)pkui_setCompletionHandler:(id /* block */)arg1;
- (void)serviceViewControllerDidCompleteWithResult:(long long)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
