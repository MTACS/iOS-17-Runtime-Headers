
@interface PKOSVersionRequirementRange : NSObject <NSCopying, NSSecureCoding> {
    PKOSVersionRequirement * _maximum;
    PKOSVersionRequirement * _minimum;
}

@property (nonatomic, readonly) PKOSVersionRequirement *maximum;
@property (nonatomic, readonly) PKOSVersionRequirement *minimum;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMinimumVersion:(id)arg1 maximumVersion:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOSVersionRequirementRange:(id)arg1;
- (id)maximum;
- (id)minimum;
- (bool)versionMeetsRequirements:(id)arg1 deviceClass:(id)arg2;

@end
