
@interface SATTSGetSpeechSynthesisVolume : SABaseClientBoundCommand

+ (id)getSpeechSynthesisVolume;
+ (id)getSpeechSynthesisVolumeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;

@end
