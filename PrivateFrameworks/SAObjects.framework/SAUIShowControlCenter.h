
@interface SAUIShowControlCenter : SABaseClientBoundCommand

+ (id)showControlCenter;
+ (id)showControlCenterWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
