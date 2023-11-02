
@interface PKPaymentAuthorizationPaymentUIInterface : NSObject <PKPaymentAuthorizationInterface, SBSHardwareButtonEventConsuming> {
    PKPaymentAuthorizationInterfaceConfiguration * _configuration;
    PKPaymentAuthorizationContext * _context;
    <BSInvalidatable> * _lockButtonObserver;
    PKPaymentRequestViewInterface * _paymentUIInterface;
    UIViewController * _primaryViewController;
    <PKPaymentAuthorizationServiceProtocol> * _serviceDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *primaryViewController;
@property (nonatomic, readonly) <PKPaymentAuthorizationServiceProtocol> *serviceDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_startObservingLockButtonPresses;
- (void)_stopObservingLockButtonPresses;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (id)createPaymentUIInterfaceConfigurationWithContext:(id)arg1 configuration:(id)arg2;
- (id)createPaymentUIInterfaceWithContext:(id)arg1 configuration:(id)arg2;
- (void)dealloc;
- (void)didAppear;
- (id)initWithContext:(id)arg1 configuration:(id)arg2;
- (void)initializePrimaryViewController;
- (void)invalidate;
- (id)primaryViewController;
- (id)serviceDelegate;
- (void)willAppear;

@end
