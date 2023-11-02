
@interface DMFCreateConfigurationOrganizationRequest : DMFTaskRequest {
    NSString * _organizationDisplayName;
    NSString * _organizationIdentifier;
    NSString * _organizationType;
}

@property (nonatomic, copy) NSString *organizationDisplayName;
@property (nonatomic, copy) NSString *organizationIdentifier;
@property (nonatomic, copy) NSString *organizationType;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)organizationDisplayName;
- (id)organizationIdentifier;
- (id)organizationType;
- (void)setOrganizationDisplayName:(id)arg1;
- (void)setOrganizationIdentifier:(id)arg1;
- (void)setOrganizationType:(id)arg1;

@end
