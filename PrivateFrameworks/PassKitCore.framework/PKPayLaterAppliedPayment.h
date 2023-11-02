
@interface PKPayLaterAppliedPayment : NSObject <NSCopying, NSSecureCoding> {
    PKCurrencyAmount * _amountApplied;
    NSString * _paymentIdentifier;
}

@property (nonatomic, retain) PKCurrencyAmount *amountApplied;
@property (nonatomic, copy) NSString *paymentIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amountApplied;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPayLaterAppliedPayment:(id)arg1;
- (id)paymentIdentifier;
- (void)setAmountApplied:(id)arg1;
- (void)setPaymentIdentifier:(id)arg1;

@end
