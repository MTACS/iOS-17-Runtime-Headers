
@interface FAEligibilityRequirements : NSObject <NSSecureCoding> {
    NSDictionary * _properties;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithPropertyRequirements:(id)arg1;
- (id)requirementsForPropertyName:(id)arg1;

@end
