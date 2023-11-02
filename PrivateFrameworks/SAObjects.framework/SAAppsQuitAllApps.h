
@interface SAAppsQuitAllApps : SABaseClientBoundCommand

+ (id)quitAllApps;
+ (id)quitAllAppsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
