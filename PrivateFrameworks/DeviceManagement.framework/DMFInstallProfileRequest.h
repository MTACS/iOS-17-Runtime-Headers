
@interface DMFInstallProfileRequest : DMFTaskRequest {
    NSString * _managingProfileIdentifier;
    NSString * _personaID;
    NSData * _profileData;
    unsigned long long  _style;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *managingProfileIdentifier;
@property (nonatomic, copy) NSString *personaID;
@property (nonatomic, copy) NSData *profileData;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long type;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)managingProfileIdentifier;
- (id)personaID;
- (id)profileData;
- (void)setManagingProfileIdentifier:(id)arg1;
- (void)setPersonaID:(id)arg1;
- (void)setProfileData:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)style;
- (unsigned long long)type;

@end
