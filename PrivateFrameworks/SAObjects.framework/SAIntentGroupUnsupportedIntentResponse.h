
@interface SAIntentGroupUnsupportedIntentResponse : SAIntentGroupIntentInvocationResponse

+ (id)unsupportedIntentResponse;
+ (id)unsupportedIntentResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
