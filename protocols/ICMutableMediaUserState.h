
@protocol ICMutableMediaUserState <NSObject>

@required

- (bool)ageVerificationRequired;
- (NSString *)alternateDSID;
- (NSString *)countryCode;
- (NSNumber *)dsid;
- (NSString *)firstName;
- (NSArray *)homeUserIDs;
- (NSString *)iCloudPersonID;
- (NSString *)identifier;
- (bool)isActive;
- (NSString *)lastName;
- (ICMusicUserState *)music;
- (void)setAgeVerificationRequired:(bool)arg1;
- (void)setAlternateDSID:(NSString *)arg1;
- (void)setCountryCode:(NSString *)arg1;
- (void)setDsid:(NSNumber *)arg1;
- (void)setFirstName:(NSString *)arg1;
- (void)setHomeUserIDs:(NSArray *)arg1;
- (void)setICloudPersonID:(NSString *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setLastName:(NSString *)arg1;
- (void)setMusic:(ICMusicUserState *)arg1;
- (void)setShortDebugName:(NSString *)arg1;
- (void)setStorefrontIdentifier:(NSString *)arg1;
- (void)setTv:(ICTVUserState *)arg1;
- (void)setUsername:(NSString *)arg1;
- (NSString *)shortDebugName;
- (NSString *)storefrontIdentifier;
- (ICTVUserState *)tv;
- (NSString *)username;

@end
