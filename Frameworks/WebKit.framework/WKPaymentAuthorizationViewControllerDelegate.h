
@interface WKPaymentAuthorizationViewControllerDelegate : WKPaymentAuthorizationDelegate <PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_getPaymentServicesMerchantURL:(id /* block */)arg1;
- (id)initWithRequest:(id)arg1 presenter:(void*)arg2;
- (void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 didChangeCouponCode:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 didRequestMerchantSession:(id /* block */)arg2;
- (void)paymentAuthorizationViewController:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 didSelectShippingContact:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 willFinishWithError:(id)arg2;
- (void)paymentAuthorizationViewControllerDidFinish:(id)arg1;

@end
