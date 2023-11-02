
@interface WFWalletTransaction : NSObject <NSCopying, NSSecureCoding, WFNaming> {
    INCurrencyAmount * _currencyAmount;
    NSString * _identifier;
    WFWalletMerchant * _merchant;
    INPaymentMethod * _paymentMethod;
    NSString * _transactionDescription;
}

@property (nonatomic, readonly, copy) INCurrencyAmount *currencyAmount;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) WFWalletMerchant *merchant;
@property (nonatomic, readonly, copy) INPaymentMethod *paymentMethod;
@property (nonatomic, readonly, copy) NSString *transactionDescription;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmount;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 transactionDescription:(id)arg2 merchant:(id)arg3 currencyAmount:(id)arg4 paymentMethod:(id)arg5;
- (id)merchant;
- (id)paymentMethod;
- (id)transactionDescription;
- (id)wfName;

@end
