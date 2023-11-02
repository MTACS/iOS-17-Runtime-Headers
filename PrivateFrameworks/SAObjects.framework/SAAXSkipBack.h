
@interface SAAXSkipBack : SADomainCommand

+ (id)skipBack;
+ (id)skipBackWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
