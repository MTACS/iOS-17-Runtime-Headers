
@interface HKFHIRVersion : NSObject <NSCopying, NSSecureCoding> {
    NSString * _invalidVersionString;
    long long  _majorVersion;
    long long  _minorVersion;
    long long  _patchVersion;
}

@property (nonatomic, readonly) NSString *FHIRRelease;
@property (nonatomic, readonly) long long majorVersion;
@property (nonatomic, readonly) long long minorVersion;
@property (nonatomic, readonly) long long patchVersion;
@property (nonatomic, readonly, copy) NSString *stringRepresentation;

+ (id)primaryDSTU2Version;
+ (id)primaryR4Version;
+ (bool)supportsSecureCoding;
+ (id)versionFromVersionString:(id)arg1;
+ (id)versionFromVersionString:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)FHIRRelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvalidVersionString:(id)arg1;
- (id)initWithSemanticVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (bool)isEqual:(id)arg1;
- (long long)majorVersion;
- (long long)minorVersion;
- (long long)patchVersion;
- (id)stringRepresentation;

@end
