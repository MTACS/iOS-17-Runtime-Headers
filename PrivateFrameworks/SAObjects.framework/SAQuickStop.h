
@interface SAQuickStop : SABaseClientBoundCommand

+ (id)quickStop;
+ (id)quickStopWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
