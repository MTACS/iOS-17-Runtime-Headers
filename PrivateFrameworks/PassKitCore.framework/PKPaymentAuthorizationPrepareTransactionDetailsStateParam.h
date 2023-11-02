
@interface PKPaymentAuthorizationPrepareTransactionDetailsStateParam : PKPaymentAuthorizationStateParam {
    NSString * _currencyCode;
    PKPaymentMerchantSession * _merchantSession;
    NSString * _secureElementIdentifier;
    NSDecimalNumber * _transactionAmount;
}

@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, retain) PKPaymentMerchantSession *merchantSession;
@property (nonatomic, copy) NSString *secureElementIdentifier;
@property (nonatomic, copy) NSDecimalNumber *transactionAmount;

+ (id)paramWithMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 transactionAmount:(id)arg3 currencyCode:(id)arg4;

- (void).cxx_destruct;
- (id)currencyCode;
- (id)description;
- (id)merchantSession;
- (id)secureElementIdentifier;
- (void)setCurrencyCode:(id)arg1;
- (void)setMerchantSession:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (id)transactionAmount;

@end
