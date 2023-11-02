
@interface PKAccountPaymentFundingSource : NSObject <NSSecureCoding> {
    NSString * _accountSuffix;
    PKAccountPaymentFundingDetails * _fundingDetails;
    NSString * _identifier;
    long long  _type;
}

@property (nonatomic, copy) NSString *accountSuffix;
@property (nonatomic, copy) PKAccountPaymentFundingDetails *fundingDetails;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long type;

+ (Class)fundingDetailsClassForFundingSourceType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountSuffix;
- (id)bankAccountRepresentation;
- (id)description;
- (id)displayDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)fundingDetails;
- (unsigned long long)hash;
- (id)hashComponentWithCertificatesResponse:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1;
- (id)jsonString;
- (void)setAccountSuffix:(id)arg1;
- (void)setFundingDetails:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end