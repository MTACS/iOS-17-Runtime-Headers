
@interface PKPaymentTokenContext : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _amount;
    NSString * _externalIdentifier;
    NSString * _merchantDomain;
    NSString * _merchantIdentifier;
    NSString * _merchantName;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *externalIdentifier;
@property (nonatomic, copy) NSString *merchantDomain;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, copy) NSString *merchantName;

+ (id)contextWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;
+ (long long)version;

- (void).cxx_destruct;
- (id)amount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithMerchantIdentifier:(id)arg1 externalIdentifier:(id)arg2 merchantName:(id)arg3 merchantDomain:(id)arg4 amount:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentTokenContext:(id)arg1;
- (id)merchantDomain;
- (id)merchantIdentifier;
- (id)merchantName;
- (id)protobuf;
- (void)setAmount:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setMerchantDomain:(id)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setMerchantName:(id)arg1;

@end
