
@interface SATTSFetchSpeechSynthesisVoiceResponse : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *voiceKeyList;

+ (id)fetchSpeechSynthesisVoiceResponse;
+ (id)fetchSpeechSynthesisVoiceResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setVoiceKeyList:(id)arg1;
- (id)voiceKeyList;

@end
