
@interface SACancelSucceeded : SABaseClientBoundCommand

+ (id)cancelSucceeded;
+ (id)cancelSucceededWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;

@end
