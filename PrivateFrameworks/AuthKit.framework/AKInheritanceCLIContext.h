
@interface AKInheritanceCLIContext : AKInheritanceContext {
    NSString * _accessKeyString;
    NSString * _beneficiaryFirstName;
    NSString * _beneficiaryLastName;
    NSString * _beneficiaryPassword;
    NSString * _identityToken;
}

@property (nonatomic, copy) NSString *accessKeyString;
@property (nonatomic, copy) NSString *beneficiaryFirstName;
@property (nonatomic, copy) NSString *beneficiaryLastName;
@property (nonatomic, copy) NSString *beneficiaryPassword;
@property (nonatomic, copy) NSString *identityToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessKeyString;
- (id)beneficiaryFirstName;
- (id)beneficiaryLastName;
- (id)beneficiaryPassword;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identityToken;
- (id)initWithCoder:(id)arg1;
- (void)setAccessKeyString:(id)arg1;
- (void)setBeneficiaryFirstName:(id)arg1;
- (void)setBeneficiaryLastName:(id)arg1;
- (void)setBeneficiaryPassword:(id)arg1;
- (void)setIdentityToken:(id)arg1;

@end
