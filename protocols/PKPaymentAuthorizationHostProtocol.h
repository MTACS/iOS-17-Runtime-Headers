
@protocol PKPaymentAuthorizationHostProtocol <NSObject>

@required

- (void)authorizationDidAuthorizePayment:(PKPayment *)arg1;
- (void)authorizationDidAuthorizePurchase:(PKServiceProviderPurchase *)arg1;
- (void)authorizationDidChangeCouponCode:(NSString *)arg1;
- (void)authorizationDidFinishWithError:(NSError *)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(PKPaymentMethod *)arg1;
- (void)authorizationDidSelectShippingAddress:(CNContact *)arg1;
- (void)authorizationDidSelectShippingMethod:(PKShippingMethod *)arg1;
- (void)authorizationWillStart;

@optional

- (void)authorizationDidAuthorizeApplePayTrustSignature:(PKApplePayTrustSignature *)arg1;
- (void)authorizationDidAuthorizeContext;
- (void)authorizationDidAuthorizePeerPaymentQuote:(PKAuthorizedPeerPaymentQuote *)arg1;
- (void)authorizationDidPresent;
- (void)authorizationDidUpdateAccountServicePaymentMethod:(PKAccountServicePaymentMethod *)arg1;
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;
- (void)handleConnectionDidOpenWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
