
@interface SASyncClientVerify : SABaseClientBoundCommand

+ (id)clientVerify;
+ (id)clientVerifyWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
