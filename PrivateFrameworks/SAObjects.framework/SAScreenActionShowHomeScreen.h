
@interface SAScreenActionShowHomeScreen : SABaseClientBoundCommand

+ (id)showHomeScreen;
+ (id)showHomeScreenWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
