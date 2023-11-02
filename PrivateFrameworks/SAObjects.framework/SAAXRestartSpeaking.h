
@interface SAAXRestartSpeaking : SADomainCommand

+ (id)restartSpeaking;
+ (id)restartSpeakingWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
