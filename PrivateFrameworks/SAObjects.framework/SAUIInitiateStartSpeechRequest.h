
@interface SAUIInitiateStartSpeechRequest : SABaseClientBoundCommand

+ (id)initiateStartSpeechRequest;
+ (id)initiateStartSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
