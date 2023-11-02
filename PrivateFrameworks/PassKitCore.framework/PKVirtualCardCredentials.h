
@interface PKVirtualCardCredentials : NSObject <NSCopying, NSSecureCoding> {
    NSString * _cardSecurityCode;
    long long  _cardType;
    NSString * _expiration;
    NSString * _formattedExpiration;
    NSString * _primaryAccountNumber;
}

@property (nonatomic, copy) NSString *cardSecurityCode;
@property (nonatomic) long long cardType;
@property (nonatomic, copy) NSString *expiration;
@property (nonatomic, copy) NSString *formattedExpiration;
@property (nonatomic, copy) NSString *primaryAccountNumber;

+ (id)demoVPANCredentials;
+ (id)formattedDateStringFromServerDateString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardSecurityCode;
- (long long)cardType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)expiration;
- (id)formattedExpiration;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithEncryptedCardData:(id)arg1 ephemeralPublicKey:(id)arg2 privateKey:(struct __SecKey { }*)arg3 error:(id*)arg4;
- (id)initWithVPANPaymentCredentialResponse:(id)arg1 privateKey:(struct __SecKey { }*)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (id)primaryAccountNumber;
- (void)setCardSecurityCode:(id)arg1;
- (void)setCardType:(long long)arg1;
- (void)setExpiration:(id)arg1;
- (void)setFormattedExpiration:(id)arg1;
- (void)setPrimaryAccountNumber:(id)arg1;

@end
