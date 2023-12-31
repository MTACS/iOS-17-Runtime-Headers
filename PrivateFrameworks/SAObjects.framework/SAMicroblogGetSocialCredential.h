
@interface SAMicroblogGetSocialCredential : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *explicitUserPermission;
@property (nonatomic, copy) NSString *socialNetwork;

+ (id)getSocialCredential;
+ (id)getSocialCredentialWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)explicitUserPermission;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setExplicitUserPermission:(id)arg1;
- (void)setSocialNetwork:(id)arg1;
- (id)socialNetwork;

@end
