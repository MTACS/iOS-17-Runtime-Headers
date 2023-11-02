
@interface ASCPasswordLoginChoice : NSObject <ASCLoginChoiceProtocol> {
    NSString * _customTitle;
    SFCredentialIdentity * _externalCredentialIdentity;
    NSString * _groupName;
    NSString * _providerBundleIdentifier;
    NSString * _site;
    NSString * _username;
}

@property (nonatomic, readonly, copy) NSString *customTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExternal, nonatomic, readonly) bool external;
@property (nonatomic, readonly) SFCredentialIdentity *externalCredentialIdentity;
@property (nonatomic, readonly, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSharedCredential;
@property (nonatomic, readonly) unsigned long long loginChoiceKind;
@property (nonatomic, readonly, copy) NSString *providerBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *site;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)customTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)externalCredentialIdentity;
- (id)groupName;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 site:(id)arg2 externalCredentialIdentity:(id)arg3 customTitle:(id)arg4 groupName:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isExternal;
- (bool)isSharedCredential;
- (unsigned long long)loginChoiceKind;
- (id)providerBundleIdentifier;
- (id)site;
- (id)username;

@end
