
@interface PKPassFeatureConfiguration : NSObject <NSSecureCoding> {
    bool  _enabled;
    PKOSVersionRequirementRange * _versionRange;
}

@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) PKOSVersionRequirementRange *versionRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPassFeatureConfiguration:(id)arg1;
- (id)versionRange;

@end
