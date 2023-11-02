
@interface PKContinuityPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKContinuityPaymentServiceDelegate, PKPaymentAuthorizationHostProtocol> {
    PKContinuityPaymentService * _continuityService;
    PKContinuityPaymentViewController * _continuityViewController;
    bool  _hasAuthorizedPayment;
    bool  _hasSentCancelPaymentRequest;
    UINavigationController * _navigationController;
    PKRemotePaymentRequest * _remoteRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isSecureForRemoteViewService;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_cancelPayment;
- (void)_dismiss;
- (void)_invalidate;
- (void)_presentEnrollAccessibilityIntentAlert;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidChangeCouponCode:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationWillStart;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)didInvalidateForRemoteAlert;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;
- (void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)handleButtonActions:(id)arg1;
- (id)init;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
