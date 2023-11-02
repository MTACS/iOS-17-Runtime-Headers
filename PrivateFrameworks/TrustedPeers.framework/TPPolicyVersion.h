
@interface TPPolicyVersion : NSObject <NSSecureCoding> {
    NSString * _policyHash;
    unsigned long long  _versionNumber;
}

@property (readonly, retain) NSString *policyHash;
@property (readonly) unsigned long long versionNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(unsigned long long)arg1 hash:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)policyHash;
- (unsigned long long)versionNumber;

@end
