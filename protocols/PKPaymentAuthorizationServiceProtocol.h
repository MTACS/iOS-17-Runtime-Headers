
@protocol PKPaymentAuthorizationServiceProtocol <NSObject>

@required

- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(PKPaymentAuthorizationResult *)arg1;
- (void)authorizationDidAuthorizeContextCompleteWithResult:(PKPaymentAuthorizationResult *)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(PKPaymentAuthorizationResult *)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(PKPaymentAuthorizationResult *)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidChangeCouponCodeCompleteWithUpdate:(PKPaymentRequestCouponCodeUpdate *)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(PKPaymentRequestMerchantSessionUpdate *)arg1;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(PKPaymentRequestPaymentMethodUpdate *)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(PKPaymentRequestShippingContactUpdate *)arg1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(PKPaymentRequestShippingMethodUpdate *)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(PKPaymentRequestPaymentMethodUpdate *)arg1 signatureRequest:(PKApplePayTrustSignatureRequest *)arg2;
- (void)handleDismissWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationWillResignActive:(bool)arg1;

@optional

- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(PKPaymentMerchantSession *)arg1 error:(NSError *)arg2;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(NSArray *)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(NSArray *)arg2 paymentSummaryItems:(NSArray *)arg3;
- (void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(NSArray *)arg2;
- (void)handleHostApplicationDidCancel;
- (void)prepareWithPaymentRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKPaymentRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
