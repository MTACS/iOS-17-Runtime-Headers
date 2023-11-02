
@interface MCCSecretAgentContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _certType;
    NSString * _commonName;
    NSString * _country;
    NSDictionary * _csrAltName;
    NSString * _keyType;
    long long  _keyValue;
    NSString * _organization;
    NSString * _organizationUnit;
    NSString * _state;
}

@property (nonatomic, copy) NSString *certType;
@property (nonatomic, copy) NSString *commonName;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSDictionary *csrAltName;
@property (nonatomic, copy) NSString *keyType;
@property (nonatomic) long long keyValue;
@property (nonatomic, copy) NSString *organization;
@property (nonatomic, copy) NSString *organizationUnit;
@property (nonatomic, copy) NSString *state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certType;
- (id)commonName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)csrAltName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyType;
- (long long)keyValue;
- (id)organization;
- (id)organizationUnit;
- (void)setCertType:(id)arg1;
- (void)setCommonName:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setCsrAltName:(id)arg1;
- (void)setKeyType:(id)arg1;
- (void)setKeyValue:(long long)arg1;
- (void)setOrganization:(id)arg1;
- (void)setOrganizationUnit:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
