
@interface AABeneficiaryInfo : AABeneficiary <AAInheritanceContactInfo, NSCopying, NSSecureCoding> {
    NSString * _handle;
}

@property (nonatomic, retain) AKInheritanceAccessKey *accessKey;
@property (nonatomic, readonly) NSString *benefactorAltDSID;
@property (nonatomic, readonly) NSUUID *beneficiaryID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (id)initWithBeneficiaryID:(id)arg1 benefactorAltDSID:(id)arg2 handle:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end
