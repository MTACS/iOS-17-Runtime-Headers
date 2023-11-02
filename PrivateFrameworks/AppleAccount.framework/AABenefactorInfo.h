
@interface AABenefactorInfo : NSObject <AAInheritanceContactInfo, NSCopying, NSSecureCoding> {
    AKInheritanceAccessKey * _accessKey;
    NSString * _benefactorAltDSID;
    NSUUID * _beneficiaryID;
    NSString * _handle;
    long long  _status;
}

@property (nonatomic, retain) AKInheritanceAccessKey *accessKey;
@property (nonatomic, readonly) NSString *benefactorAltDSID;
@property (nonatomic, readonly) NSUUID *beneficiaryID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_statusDescription;
- (id)accessKey;
- (id)benefactorAltDSID;
- (id)beneficiaryID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (id)initWithBeneficiaryID:(id)arg1 benefactorAltDSID:(id)arg2;
- (id)initWithBeneficiaryID:(id)arg1 benefactorAltDSID:(id)arg2 handle:(id)arg3;
- (id)initWithBeneficiaryID:(id)arg1 handle:(id)arg2 status:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (void)setAccessKey:(id)arg1;
- (long long)status;

@end
