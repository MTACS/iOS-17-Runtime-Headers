
@interface SAPhoneHangUp : SABaseClientBoundCommand

+ (id)hangUp;
+ (id)hangUpWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
