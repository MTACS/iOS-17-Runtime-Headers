
@interface SATTSSpeechSynthesisPartialResponse : SABaseClientBoundCommand

@property (nonatomic, retain) SAUIAudioData *aceAudioData;
@property (nonatomic, retain) SATTSSpeechSynthesisAudioInfo *aceAudioInfo;
@property (nonatomic) long long currentPacketNumber;

+ (id)speechSynthesisPartialResponse;
+ (id)speechSynthesisPartialResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceAudioData;
- (id)aceAudioInfo;
- (long long)currentPacketNumber;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAceAudioData:(id)arg1;
- (void)setAceAudioInfo:(id)arg1;
- (void)setCurrentPacketNumber:(long long)arg1;

@end
