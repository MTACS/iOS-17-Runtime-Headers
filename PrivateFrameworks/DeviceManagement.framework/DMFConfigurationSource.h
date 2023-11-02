
@interface DMFConfigurationSource : NSObject <NSSecureCoding> {
    NSString * _displayName;
    NSString * _identifier;
    NSString * _machServiceName;
    NSString * _organizationIdentifier;
    DMFReportingRequirements * _reportingRequirements;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *machServiceName;
@property (nonatomic, copy) NSString *organizationIdentifier;
@property (nonatomic, retain) DMFReportingRequirements *reportingRequirements;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)machServiceName;
- (id)organizationIdentifier;
- (id)reportingRequirements;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMachServiceName:(id)arg1;
- (void)setOrganizationIdentifier:(id)arg1;
- (void)setReportingRequirements:(id)arg1;

@end
