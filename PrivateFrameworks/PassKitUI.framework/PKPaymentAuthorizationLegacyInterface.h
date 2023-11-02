
@interface PKPaymentAuthorizationLegacyInterface : NSObject <PKCompactNavigationContainerControllerDelegate, PKPaymentAuthorizationInterface, PKPaymentAuthorizationServiceViewControllerDelegate, SBSHardwareButtonEventConsuming> {
    long long  _coachingState;
    PKPaymentAuthorizationInterfaceConfiguration * _configuration;
    PKPaymentAuthorizationContext * _context;
    <BSInvalidatable> * _lockButtonObserver;
    PKPaymentAuthorizationServiceNavigationController * _navigationController;
    PKPaymentAuthorizationServiceCompactNavigationContainerController * _primaryViewController;
    <PKPaymentAuthorizationServiceProtocol> * _serviceDelegate;
}

@property (nonatomic) long long coachingState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentAuthorizationServiceCompactNavigationContainerController *primaryViewController;
@property (nonatomic, readonly) <PKPaymentAuthorizationServiceProtocol> *serviceDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_startObservingLockButtonPresses;
- (void)_stopObservingLockButtonPresses;
- (void)_updatePearlViews;
- (void)_updatePhysicalButtonViews;
- (void)authorizationViewControllerDidChangeCoachingState:(id)arg1;
- (void)authorizationViewControllerDidChangePhysicalButtonState:(id)arg1;
- (void)authorizationViewControllerDidRequestPaymentSetup;
- (long long)coachingState;
- (void)compactNavigationContainerControllerReceivedExternalTap:(id)arg1;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (void)invalidate;
- (id)primaryViewController;
- (id)serviceDelegate;
- (void)setCoachingState:(long long)arg1;
- (void)setPrimaryViewController:(id)arg1;
- (bool)shouldBlockHardwareCancels;
- (void)willAppear;

@end
