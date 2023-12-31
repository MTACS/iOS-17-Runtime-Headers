
@interface SASetDeviceTTSMuteState : SABaseClientBoundCommand

@property (nonatomic) bool textToSpeechIsMuted;

+ (id)setDeviceTTSMuteState;
+ (id)setDeviceTTSMuteStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setTextToSpeechIsMuted:(bool)arg1;
- (bool)textToSpeechIsMuted;

@end
