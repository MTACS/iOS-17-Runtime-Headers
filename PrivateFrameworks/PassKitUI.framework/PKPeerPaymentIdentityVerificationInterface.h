
@interface PKPeerPaymentIdentityVerificationInterface : NSObject <PKPaymentAuthorizationInterface, PKPaymentSetupViewControllerDelegate> {
    PKPaymentAuthorizationInterfaceConfiguration * _configuration;
    PKPaymentAuthorizationContext * _context;
    <PKPeerPaymentIdentityVerificationInterfaceDelegate> * _delegate;
    UIViewController * _primaryViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPeerPaymentIdentityVerificationInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *primaryViewController;
@property (readonly) Class superclass;

+ (void)interfaceWithContext:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)createPrimaryViewControllerWithVerificationResponse:(id)arg1;
- (id)delegate;
- (id)initWithContext:(id)arg1 configuration:(id)arg2 verificationResponse:(id)arg3;
- (id)primaryViewController;
- (void)setDelegate:(id)arg1;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;

@end
