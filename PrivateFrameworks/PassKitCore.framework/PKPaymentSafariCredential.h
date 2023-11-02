
@interface PKPaymentSafariCredential : PKPaymentCredential {
    NSString * _cardNumber;
    NSString * _cardholderName;
    NSDate * _expirationDate;
    NSString * _securityCode;
}

@property (nonatomic, readonly) bool canCheckEligibility;
@property (nonatomic, readonly, copy) NSString *cardNumber;
@property (nonatomic, readonly, copy) NSString *cardholderName;
@property (nonatomic, readonly, copy) NSString *expiration;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSString *securityCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToCredential:(id)arg1;
- (bool)canCheckEligibility;
- (id)cardNumber;
- (id)cardholderName;
- (long long)credentialType;
- (id)detailDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSafariDictionary:(id)arg1;
- (id)longDescription;
- (id)sanitizedPrimaryAccountNumber;
- (id)securityCode;
- (void)setExpirationDate:(id)arg1;

@end
