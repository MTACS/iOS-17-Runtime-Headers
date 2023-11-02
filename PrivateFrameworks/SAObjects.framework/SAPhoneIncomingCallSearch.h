
@interface SAPhoneIncomingCallSearch : SABaseClientBoundCommand

+ (id)incomingCallSearch;
+ (id)incomingCallSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
