
@interface PKPaymentAuthorizationServiceProxy : NSObject <PKPaymentAuthorizationServiceProtocol> {
    NSXPCConnection * _connection;
    <PKPaymentAuthorizationServiceProtocol> * _delegate;
    bool  _dismissed;
    PKEntitlementWhitelist * _entitlementWhitelist;
    PKPaymentRequest * _paymentRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationServiceProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKEntitlementWhitelist *entitlementWhitelist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_sanitizeMerchantSessionUpdate:(id)arg1;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2;
- (id)delegate;
- (id)entitlementWhitelist;
- (void)handleDismissWithCompletion:(id /* block */)arg1;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationDidCancel;
- (void)handleHostApplicationWillResignActive:(bool)arg1;
- (id)initWithConnection:(id)arg1 paymentRequest:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
