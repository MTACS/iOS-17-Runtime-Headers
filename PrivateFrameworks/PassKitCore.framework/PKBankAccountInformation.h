
@interface PKBankAccountInformation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountNumber;
    NSString * _bankName;
    NSString * _identifier;
    NSString * _routingNumber;
    unsigned long long  _status;
    long long  _type;
}

@property (nonatomic, copy) NSString *accountNumber;
@property (nonatomic, copy) NSString *bankName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *routingNumber;
@property (nonatomic) unsigned long long status;
@property (nonatomic) long long type;

+ (Class)_classForType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonDeleteAllBankInformation;
- (id)accountNumber;
- (id)accountSuffix;
- (id)bankName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deleteAllBankInformation;
- (void)deleteAllLocalBankInformation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (bool)isValid;
- (id)maskedAccountNumber;
- (id)routingNumber;
- (void)setAccountNumber:(id)arg1;
- (void)setBankName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRoutingNumber:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setType:(long long)arg1;
- (unsigned long long)status;
- (long long)type;
- (void)updateToLatestKeychainData;

@end
