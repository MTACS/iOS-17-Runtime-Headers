
@interface PKExtensionVendorContext : PKExtensionBaseContext <PKExtensionVendorContextProtocol> {
    PKEntitlementWhitelist * _whitelist;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2;
- (id)entitlementWhitelist;
- (void)handleDismissWithCompletion:(id /* block */)arg1;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationDidCancel;
- (void)handleHostApplicationWillResignActive:(bool)arg1;
- (id)hostContext;
- (id)hostContextWithErrorHandler:(id /* block */)arg1;
- (void)prepareWithPaymentRequest:(id)arg1 completion:(id /* block */)arg2;

@end