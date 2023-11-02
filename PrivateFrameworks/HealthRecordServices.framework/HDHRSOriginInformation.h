
@interface HDHRSOriginInformation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _operatingSystemBuild;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _operatingSystemVersion;
}

@property (nonatomic, readonly, copy) NSString *operatingSystemBuild;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } operatingSystemVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg1 build:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)operatingSystemBuild;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;

@end
