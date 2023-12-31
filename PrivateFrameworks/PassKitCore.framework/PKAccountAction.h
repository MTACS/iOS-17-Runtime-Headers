
@interface PKAccountAction : NSObject <NSSecureCoding> {
    unsigned long long  _actionType;
    NSDecimalNumber * _amount;
    NSString * _currencyCode;
    NSString * _identifier;
    unsigned long long  _redemptionType;
}

@property (nonatomic) unsigned long long actionType;
@property (nonatomic, retain) NSDecimalNumber *amount;
@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned long long redemptionType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)actionType;
- (id)amount;
- (id)currencyCode;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)redemptionType;
- (void)setActionType:(unsigned long long)arg1;
- (void)setAmount:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRedemptionType:(unsigned long long)arg1;

@end
