
@interface SAEmailSend : SADomainCommand

@property (nonatomic, retain) SAEmailEmail *email;

+ (id)send;
+ (id)sendWithDictionary:(id)arg1 context:(id)arg2;

- (id)email;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setEmail:(id)arg1;

@end
