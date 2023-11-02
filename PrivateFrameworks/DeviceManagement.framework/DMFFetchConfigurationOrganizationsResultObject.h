
@interface DMFFetchConfigurationOrganizationsResultObject : CATTaskResultObject {
    NSDictionary * _organizationsByIdentifier;
}

@property (nonatomic, retain) NSDictionary *organizationsByIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)organizationsByIdentifier;
- (void)setOrganizationsByIdentifier:(id)arg1;

@end
