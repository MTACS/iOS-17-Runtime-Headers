
@interface SAMicroblogGetTwitterCredential : SAMicroblogGetSocialCredential

@property (nonatomic, copy) NSString *consumerKey;
@property (nonatomic, copy) NSString *consumerSecret;

+ (id)getTwitterCredential;
+ (id)getTwitterCredentialWithDictionary:(id)arg1 context:(id)arg2;

- (id)consumerKey;
- (id)consumerSecret;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setConsumerKey:(id)arg1;
- (void)setConsumerSecret:(id)arg1;

@end
