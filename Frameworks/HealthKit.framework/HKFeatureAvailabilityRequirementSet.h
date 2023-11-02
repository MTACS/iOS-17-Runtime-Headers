
@interface HKFeatureAvailabilityRequirementSet : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _requirementsByContext;
}

@property (nonatomic, readonly, copy) NSDictionary *requirementsByContext;

+ (id)noRequirements;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allRequirementIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequirementsByContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)requirementsByContext;

@end
