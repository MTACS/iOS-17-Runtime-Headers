
@interface PKAppleBalancePromotionConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _bonusMaxAmount;
    NSDecimalNumber * _bonusMinAmount;
    NSString * _conditionText;
    long long  _generationIdentifier;
    NSDate * _lastUpdatedDate;
    NSString * _offerText;
    NSString * _programIdentifier;
    long long  _promotionType;
    long long  _stamp;
    NSString * _versionIdentifier;
}

@property (nonatomic, copy) NSDecimalNumber *bonusMaxAmount;
@property (nonatomic, copy) NSDecimalNumber *bonusMinAmount;
@property (nonatomic, copy) NSString *conditionText;
@property (nonatomic) long long generationIdentifier;
@property (nonatomic, copy) NSDate *lastUpdatedDate;
@property (nonatomic, copy) NSString *offerText;
@property (nonatomic, copy) NSString *programIdentifier;
@property (nonatomic) long long promotionType;
@property (nonatomic) long long stamp;
@property (nonatomic, copy) NSString *versionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bonusMaxAmount;
- (id)bonusMinAmount;
- (id)conditionText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)generationIdentifier;
- (unsigned long long)hash;
- (id)initWithAMSOfferDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastUpdatedDate;
- (id)offerText;
- (id)programIdentifier;
- (long long)promotionType;
- (void)setBonusMaxAmount:(id)arg1;
- (void)setBonusMinAmount:(id)arg1;
- (void)setConditionText:(id)arg1;
- (void)setGenerationIdentifier:(long long)arg1;
- (void)setLastUpdatedDate:(id)arg1;
- (void)setOfferText:(id)arg1;
- (void)setProgramIdentifier:(id)arg1;
- (void)setPromotionType:(long long)arg1;
- (void)setStamp:(long long)arg1;
- (void)setVersionIdentifier:(id)arg1;
- (long long)stamp;
- (id)uniqueIdentifier;
- (id)versionIdentifier;

@end
