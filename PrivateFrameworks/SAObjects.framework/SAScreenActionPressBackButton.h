
@interface SAScreenActionPressBackButton : SABaseClientBoundCommand

+ (id)pressBackButton;
+ (id)pressBackButtonWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
