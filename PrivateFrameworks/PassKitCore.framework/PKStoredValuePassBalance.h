
@interface PKStoredValuePassBalance : NSObject <NSSecureCoding> {
    NSDecimalNumber * _amount;
    NSString * _balanceType;
    NSString * _currencyCode;
    NSDate * _expiryDate;
    NSString * _identifier;
}

@property (nonatomic, readonly) NSDecimalNumber *amount;
@property (nonatomic, readonly, copy) NSString *balanceType;
@property (nonatomic, readonly, copy) NSString *currencyCode;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (id)balanceType;
- (id)currencyCode;
- (void)encodeWithCoder:(id)arg1;
- (id)expiryDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrencyAmount:(id)arg1;
- (id)initWithIdentifier:(id)arg1 amount:(id)arg2 balanceType:(id)arg3 expiryDate:(id)arg4;
- (id)initWithIdentifier:(id)arg1 cashAmount:(id)arg2 currencyCode:(id)arg3 expiryDate:(id)arg4;
- (id)initWithTransitAppletBalance:(id)arg1 balanceField:(id)arg2;
- (bool)isCurrencyBalance;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBalance:(id)arg1;
- (bool)isExpired;
- (void)setIdentifier:(id)arg1;

@end
