
@interface SAAXPauseSpeaking : SADomainCommand

+ (id)pauseSpeaking;
+ (id)pauseSpeakingWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
