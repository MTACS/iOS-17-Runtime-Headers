
@interface PKPaymentAuthorizationAuthorizedStateParam : PKPaymentAuthorizationStateParam {
    PKApplePayTrustSignature * _applePayTrustSignature;
    PKAuthorizedPeerPaymentQuote * _authorizedPeerPaymentQuote;
    NSString * _installmentAuthorizationToken;
    PKPayment * _payment;
    PKPaymentToken * _paymentToken;
    PKServiceProviderPurchase * _purchase;
    NSString * _purchaseTransactionIdentifier;
    PKPaymentRewrapResponseBase * _rewrapResponse;
}

@property (nonatomic, readonly) PKApplePayTrustSignature *applePayTrustSignature;
@property (nonatomic, readonly) PKAuthorizedPeerPaymentQuote *authorizedPeerPaymentQuote;
@property (nonatomic, readonly, copy) NSString *installmentAuthorizationToken;
@property (nonatomic, retain) PKPayment *payment;
@property (nonatomic, retain) PKPaymentToken *paymentToken;
@property (nonatomic, retain) PKServiceProviderPurchase *purchase;
@property (nonatomic, copy) NSString *purchaseTransactionIdentifier;
@property (nonatomic, retain) PKPaymentRewrapResponseBase *rewrapResponse;

+ (id)paramWithApplePayTrustSignature:(id)arg1;
+ (id)paramWithAuthorizedPeerPaymentQuote:(id)arg1;
+ (id)paramWithInstallmentAuthorizationToken:(id)arg1;
+ (id)paramWithPayment:(id)arg1;
+ (id)paramWithPaymentToken:(id)arg1 rewrapResponse:(id)arg2;
+ (id)paramWithPurchase:(id)arg1 purchaseTransactionIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)applePayTrustSignature;
- (id)authorizedPeerPaymentQuote;
- (id)description;
- (id)installmentAuthorizationToken;
- (id)payment;
- (id)paymentToken;
- (id)purchase;
- (id)purchaseTransactionIdentifier;
- (id)rewrapResponse;
- (void)setPayment:(id)arg1;
- (void)setPaymentToken:(id)arg1;
- (void)setPurchase:(id)arg1;
- (void)setPurchaseTransactionIdentifier:(id)arg1;
- (void)setRewrapResponse:(id)arg1;

@end
