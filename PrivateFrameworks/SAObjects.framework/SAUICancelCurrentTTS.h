
@interface SAUICancelCurrentTTS : SABaseClientBoundCommand

+ (id)cancelCurrentTTS;
+ (id)cancelCurrentTTSWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
