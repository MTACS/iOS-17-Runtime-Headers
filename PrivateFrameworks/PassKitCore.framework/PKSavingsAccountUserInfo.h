
@interface PKSavingsAccountUserInfo : NSObject <NSCopying, NSSecureCoding> {
    PKAccountBeneficiaryInfo * _beneficiaryInfo;
    CNContact * _primaryUser;
}

@property (nonatomic, copy) PKAccountBeneficiaryInfo *beneficiaryInfo;
@property (nonatomic, copy) CNContact *primaryUser;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_pkRequiredStringFromDictionary:(id)arg1 forKey:(id)arg2;
- (id)beneficiaryInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)primaryUser;
- (void)setBeneficiaryInfo:(id)arg1;
- (void)setPrimaryUser:(id)arg1;

@end
