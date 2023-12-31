
@interface SAMicroblogSocialCredentialResult : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, retain) SAMicroblogSocialCredential *socialCredential;
@property (readonly) Class superclass;

+ (id)socialCredentialResult;
+ (id)socialCredentialResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setSocialCredential:(id)arg1;
- (id)socialCredential;

@end
