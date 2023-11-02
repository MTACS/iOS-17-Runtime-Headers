
@interface PassKitUI.PaymentAuthorizationServiceDelegate : NSObject <PKPaymentAuthorizationServiceProtocol> {
    void context;
    void stateMachine;
}

- (void).cxx_destruct;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2;
- (void)handleDismissWithCompletion:(id /* block */)arg1;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationDidCancel;
- (void)handleHostApplicationWillResignActive:(bool)arg1;
- (id)init;

@end
