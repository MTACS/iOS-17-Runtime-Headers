
@interface DMFFetchProvisioningProfilesRequest : DMFTaskRequest {
    bool  _managedOnly;
}

@property (nonatomic) bool managedOnly;

+ (Class)allowlistedClassForResultObject;
+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)managedOnly;
- (void)setManagedOnly:(bool)arg1;

@end
