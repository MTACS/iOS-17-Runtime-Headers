
@interface PKAccountPaymentFundingDetailsBankAccount : PKAccountPaymentFundingDetails <NSSecureCoding> {
    NSString * _accountIdentifier;
    NSString * _accountNumber;
    NSString * _name;
    NSString * _routingNumber;
    unsigned long long  _status;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *accountNumber;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *routingNumber;
@property (nonatomic) unsigned long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)accountNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fundingDetailsUnencryptedDictionary;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)routingNumber;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountNumber:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRoutingNumber:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

@end
