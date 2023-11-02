
@interface DMFInstallProvisioningProfileRequest : DMFTaskRequest {
    NSString * _managingProfileIdentifier;
    NSData * _profileData;
}

@property (nonatomic, copy) NSString *managingProfileIdentifier;
@property (nonatomic, copy) NSData *profileData;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)managingProfileIdentifier;
- (id)profileData;
- (void)setManagingProfileIdentifier:(id)arg1;
- (void)setProfileData:(id)arg1;

@end
