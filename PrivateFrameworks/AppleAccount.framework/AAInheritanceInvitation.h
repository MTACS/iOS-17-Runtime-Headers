
@interface AAInheritanceInvitation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _beneficiaryDisplayName;
    NSString * _beneficiaryFirstName;
    NSString * _beneficiaryHandle;
    NSUUID * _beneficiaryID;
    NSString * _beneficiaryLastName;
    long long  _status;
}

@property (nonatomic, readonly, copy) NSString *beneficiaryDisplayName;
@property (nonatomic, readonly, copy) NSString *beneficiaryFirstName;
@property (nonatomic, readonly, copy) NSString *beneficiaryHandle;
@property (nonatomic, readonly) NSUUID *beneficiaryID;
@property (nonatomic, readonly, copy) NSString *beneficiaryLastName;
@property (nonatomic, readonly) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_statusDescription;
- (id)beneficiaryDisplayName;
- (id)beneficiaryFirstName;
- (id)beneficiaryHandle;
- (id)beneficiaryID;
- (id)beneficiaryLastName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBeneficiaryID:(id)arg1 beneficiaryHandle:(id)arg2;
- (id)initWithBeneficiaryID:(id)arg1 beneficiaryHandle:(id)arg2 beneficiaryFirstName:(id)arg3 beneficiaryLastName:(id)arg4 beneficiaryDisplayName:(id)arg5 status:(long long)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)status;

@end
