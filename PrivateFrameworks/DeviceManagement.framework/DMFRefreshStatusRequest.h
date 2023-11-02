
@interface DMFRefreshStatusRequest : DMFTaskRequest {
    NSString * _organizationIdentifier;
}

@property (nonatomic, copy) NSString *organizationIdentifier;

+ (Class)allowlistedClassForResultObject;
+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)organizationIdentifier;
- (void)setOrganizationIdentifier:(id)arg1;

@end
