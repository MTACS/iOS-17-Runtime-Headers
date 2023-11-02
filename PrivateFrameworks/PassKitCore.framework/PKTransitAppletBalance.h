
@interface PKTransitAppletBalance : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _balance;
    NSString * _currency;
    NSDate * _expirationDate;
    long long  _exponent;
    NSString * _identifier;
}

@property (nonatomic, copy) NSDecimalNumber *balance;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic) long long exponent;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isCurrency;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setIdentifierFromObject:(id)arg1;
- (id)balance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currency;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (long long)exponent;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 balance:(id)arg2 currency:(id)arg3 exponent:(long long)arg4 expirationDate:(id)arg5;
- (bool)isCurrency;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBalance:(id)arg1;
- (void)setBalance:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExponent:(long long)arg1;
- (void)setIdentifier:(id)arg1;

@end
