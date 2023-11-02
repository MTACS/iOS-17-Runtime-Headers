
@interface SWPersonIdentity : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _publicKeys;
    NSData * _rootHash;
    NSData * _trackingPreventionSalt;
}

@property (nonatomic, readonly) NSArray *publicKeys;
@property (nonatomic, readonly, copy) NSData *rootHash;
@property (nonatomic, readonly) NSData *trackingPreventionSalt;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRootHash:(id)arg1;
- (id)initWithRootHash:(id)arg1 publicKeys:(id)arg2 trackingPreventionSalt:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPersonIdentity:(id)arg1;
- (id)publicKeys;
- (id)rootHash;
- (id)trackingPreventionSalt;

@end
