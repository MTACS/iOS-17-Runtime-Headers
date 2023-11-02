
@interface MIAppReference : NSObject <NSSecureCoding> {
    unsigned long long  _domain;
    MIAppIdentity * _identity;
    NSUUID * _referenceUUID;
    unsigned int  _uid;
}

@property (nonatomic, readonly) unsigned long long domain;
@property (nonatomic, readonly) MIAppIdentity *identity;
@property (nonatomic, readonly) NSUUID *referenceUUID;
@property (nonatomic, readonly) unsigned int uid;

+ (bool)supportsSecureCoding;
+ (bool)validateAppReference:(id)arg1 withError:(id*)arg2;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (id)initWithReferenceUUID:(id)arg1 identity:(id)arg2 domain:(unsigned long long)arg3 uid:(unsigned int)arg4;
- (bool)isEqual:(id)arg1;
- (id)referenceUUID;
- (unsigned int)uid;

@end
