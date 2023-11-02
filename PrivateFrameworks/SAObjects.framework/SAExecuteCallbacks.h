
@interface SAExecuteCallbacks : SABaseClientBoundCommand

+ (id)executeCallbacks;
+ (id)executeCallbacksWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
