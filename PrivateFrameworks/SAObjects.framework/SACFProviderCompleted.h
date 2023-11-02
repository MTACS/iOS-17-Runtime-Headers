
@interface SACFProviderCompleted : SACFAbstractClientCommandCompleted

+ (id)providerCompleted;
+ (id)providerCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
