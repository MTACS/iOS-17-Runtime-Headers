
@interface PKPaymentTransactionAward : NSObject <NSCopying, NSSecureCoding> {
    PKTransactionAmount * _amount;
    NSString * _awardDescription;
    bool  _claimExpired;
    NSDate * _claimExpiryDate;
    bool  _hasDeepLink;
    NSString * _identifier;
    NSString * _localizedAmount;
    long long  _order;
    bool  _redeemExpired;
    NSDate * _redeemExpiryDate;
    NSString * _relevantAccountName;
    NSString * _subtype;
    long long  _type;
    NSString * _typeString;
}

@property (nonatomic, copy) PKTransactionAmount *amount;
@property (nonatomic, copy) NSString *awardDescription;
@property (nonatomic) bool claimExpired;
@property (nonatomic, copy) NSDate *claimExpiryDate;
@property (nonatomic) bool hasDeepLink;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *localizedAmount;
@property (nonatomic) long long order;
@property (nonatomic) bool redeemExpired;
@property (nonatomic, copy) NSDate *redeemExpiryDate;
@property (nonatomic, copy) NSString *relevantAccountName;
@property (nonatomic, copy) NSString *subtype;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *typeString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (id)awardDescription;
- (bool)claimExpired;
- (id)claimExpiryDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedStringValue;
- (bool)hasDeepLink;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentTransactionAward:(id)arg1;
- (id)localizedAmount;
- (long long)order;
- (bool)redeemExpired;
- (id)redeemExpiryDate;
- (id)relevantAccountName;
- (void)setAmount:(id)arg1;
- (void)setAwardDescription:(id)arg1;
- (void)setClaimExpired:(bool)arg1;
- (void)setClaimExpiryDate:(id)arg1;
- (void)setHasDeepLink:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedAmount:(id)arg1;
- (void)setOrder:(long long)arg1;
- (void)setRedeemExpired:(bool)arg1;
- (void)setRedeemExpiryDate:(id)arg1;
- (void)setRelevantAccountName:(id)arg1;
- (void)setSubtype:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setTypeString:(id)arg1;
- (id)subtype;
- (long long)type;
- (id)typeString;

@end
