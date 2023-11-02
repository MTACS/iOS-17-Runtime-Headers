
@interface PKIssuerProvisioningExtensionAuthorizationServiceViewController : UIViewController {
    bool  _finished;
}

+ (id)_remoteViewControllerInterface;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;

@end
