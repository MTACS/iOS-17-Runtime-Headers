
@interface SOFullProfile : SOProfile <NSSecureCoding> {
    NSDictionary * _extensionData;
    NSString * _extensionTeamIdentifier;
    NSDictionary * _platformSSO;
    NSString * _pssoRegistrationToken;
}

@property (nonatomic, retain) NSDictionary *extensionData;
@property (nonatomic, retain) NSString *extensionTeamIdentifier;
@property (nonatomic, retain) NSDictionary *platformSSO;
@property (nonatomic, retain) NSString *pssoRegistrationToken;

+ (long long)authMethodWithString:(id)arg1;
+ (long long)profileTypeWithString:(id)arg1;
+ (long long)screenLockedBehaviorWithString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyProfile;
- (id)copyProfileForClient;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionData;
- (id)extensionTeamIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfileData:(id)arg1;
- (id)platformSSO;
- (id)pssoRegistrationToken;
- (void)removeURLPrefix:(id)arg1;
- (void)setExtensionData:(id)arg1;
- (void)setExtensionTeamIdentifier:(id)arg1;
- (void)setPlatformSSO:(id)arg1;
- (void)setPssoRegistrationToken:(id)arg1;

@end
