
@interface AABeneficiary : NSObject <AAInheritanceContact, NSCopying, NSSecureCoding> {
    AKInheritanceAccessKey * _accessKey;
    NSString * _benefactorAltDSID;
    NSUUID * _beneficiaryID;
}

@property (nonatomic, retain) AKInheritanceAccessKey *accessKey;
@property (nonatomic, readonly) NSString *benefactorAltDSID;
@property (nonatomic, readonly) NSUUID *beneficiaryID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessKey;
- (id)benefactorAltDSID;
- (id)beneficiaryID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBeneficiaryID:(id)arg1 benefactorAltDSID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setAccessKey:(id)arg1;

@end
