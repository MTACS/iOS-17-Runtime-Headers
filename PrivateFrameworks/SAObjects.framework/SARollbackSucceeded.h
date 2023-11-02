
@interface SARollbackSucceeded : SABaseClientBoundCommand

+ (id)rollbackSucceeded;
+ (id)rollbackSucceededWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;

@end
