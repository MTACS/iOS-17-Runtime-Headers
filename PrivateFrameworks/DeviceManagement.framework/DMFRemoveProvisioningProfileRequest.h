
@interface DMFRemoveProvisioningProfileRequest : DMFTaskRequest {
    NSString * _managingProfileIdentifier;
    NSString * _profileIdentifier;
}

@property (nonatomic, copy) NSString *managingProfileIdentifier;
@property (nonatomic, copy) NSString *profileIdentifier;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)managingProfileIdentifier;
- (id)profileIdentifier;
- (void)setManagingProfileIdentifier:(id)arg1;
- (void)setProfileIdentifier:(id)arg1;

@end
