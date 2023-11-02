
@interface PKPaymentAuthorizationProvisioningInterface : NSObject <PKPaymentAuthorizationInterface> {
    PKPaymentAuthorizationInterfaceConfiguration * _configuration;
    PKPaymentAuthorizationContext * _context;
    <PKPaymentAuthorizationProvisioningInterfaceDelegate> * _delegate;
    UIViewController * _primaryViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationProvisioningInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *primaryViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createPrimaryViewController;
- (id)delegate;
- (id)initWithContext:(id)arg1 configuration:(id)arg2;
- (id)primaryViewController;
- (void)setDelegate:(id)arg1;

@end
