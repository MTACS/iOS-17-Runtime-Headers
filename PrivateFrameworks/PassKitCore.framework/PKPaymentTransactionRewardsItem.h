
@interface PKPaymentTransactionRewardsItem : NSObject <NSCopying, NSSecureCoding> {
    PKCurrencyAmount * _currencyAmount;
    NSDecimalNumber * _eligibleValue;
    unsigned long long  _eligibleValueUnit;
    bool  _hasEnhancedMerchantProgramIdentifier;
    NSString * _identifier;
    NSString * _programIdentifier;
    NSString * _promotionIdentifier;
    NSString * _promotionName;
    unsigned long long  _state;
    unsigned long long  _type;
}

@property (nonatomic, retain) PKCurrencyAmount *currencyAmount;
@property (nonatomic, retain) NSDecimalNumber *eligibleValue;
@property (nonatomic) unsigned long long eligibleValueUnit;
@property (nonatomic) bool hasEnhancedMerchantProgramIdentifier;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *programIdentifier;
@property (nonatomic, retain) NSString *promotionIdentifier;
@property (nonatomic, retain) NSString *promotionName;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_initWithRewardsDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmount;
- (id)description;
- (id)eligibleValue;
- (unsigned long long)eligibleValueUnit;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasEnhancedMerchantProgramIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRewardsItem:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)programIdentifier;
- (id)promotionIdentifier;
- (id)promotionName;
- (void)setCurrencyAmount:(id)arg1;
- (void)setEligibleValue:(id)arg1;
- (void)setEligibleValueUnit:(unsigned long long)arg1;
- (void)setHasEnhancedMerchantProgramIdentifier:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProgramIdentifier:(id)arg1;
- (void)setPromotionIdentifier:(id)arg1;
- (void)setPromotionName:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)state;
- (unsigned long long)type;

@end
