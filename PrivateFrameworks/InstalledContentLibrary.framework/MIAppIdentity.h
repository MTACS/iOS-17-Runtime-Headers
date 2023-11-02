
@interface MIAppIdentity : NSObject <MIAppIdentityPersonaResolver, NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    bool  _isResolved;
    NSString * _personaUniqueString;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) bool isResolved;
@property (nonatomic, retain) NSString *personaUniqueString;

+ (bool)supportsSecureCoding;
+ (bool)validateAppIdentity:(id)arg1 withError:(id*)arg2;

- (void).cxx_destruct;
- (id)_eligiblePersonaForBundle:(id)arg1 error:(id*)arg2;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1;
- (id)initWithBundleID:(id)arg1 persona:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isResolved;
- (id)personaUniqueString;
- (bool)resolvePersonaWithError:(id*)arg1;
- (void)setBundleID:(id)arg1;
- (void)setIsResolved:(bool)arg1;
- (void)setPersonaUniqueString:(id)arg1;

@end
