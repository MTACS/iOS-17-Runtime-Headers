
@interface SASStartSpeechRequest : SASStartSpeech

@property (nonatomic) bool autoPunctuationEnabled;
@property (nonatomic, copy) NSArray *bargeInModes;
@property (nonatomic, copy) NSString *clientModelVersion;
@property (nonatomic, copy) NSNumber *durationSincePreviousTTSFinish;
@property (nonatomic, copy) NSNumber *durationSincePreviousTTSStart;
@property (nonatomic) bool eyesFree;
@property (nonatomic) bool handsFree;
@property (nonatomic, copy) NSString *responseMode;
@property (nonatomic) bool talkOnly;
@property (nonatomic) bool textToSpeechIsMuted;
@property (nonatomic, copy) NSArray *voiceTriggerPhrases;
@property (nonatomic) bool wasLaunchedForRequest;

+ (id)startSpeechRequest;
+ (id)startSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;

- (bool)autoPunctuationEnabled;
- (id)bargeInModes;
- (id)clientModelVersion;
- (id)durationSincePreviousTTSFinish;
- (id)durationSincePreviousTTSStart;
- (id)encodedClassName;
- (bool)eyesFree;
- (id)groupIdentifier;
- (bool)handsFree;
- (bool)requiresResponse;
- (id)responseMode;
- (void)setAutoPunctuationEnabled:(bool)arg1;
- (void)setBargeInModes:(id)arg1;
- (void)setClientModelVersion:(id)arg1;
- (void)setDurationSincePreviousTTSFinish:(id)arg1;
- (void)setDurationSincePreviousTTSStart:(id)arg1;
- (void)setEyesFree:(bool)arg1;
- (void)setHandsFree:(bool)arg1;
- (void)setResponseMode:(id)arg1;
- (void)setTalkOnly:(bool)arg1;
- (void)setTextToSpeechIsMuted:(bool)arg1;
- (void)setVoiceTriggerPhrases:(id)arg1;
- (void)setWasLaunchedForRequest:(bool)arg1;
- (bool)talkOnly;
- (bool)textToSpeechIsMuted;
- (id)voiceTriggerPhrases;
- (bool)wasLaunchedForRequest;

@end
