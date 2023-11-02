
@interface SATTSStartSpeechSynthesisStreamingRequest : SAStartRequest

@property (nonatomic, copy) NSString *audioType;
@property (nonatomic, copy) NSString *gender;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *quality;
@property (nonatomic) bool requiresWordTimingInfo;
@property (nonatomic, copy) NSDictionary *speakableContextInfo;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *voiceName;

+ (id)startSpeechSynthesisStreamingRequest;
+ (id)startSpeechSynthesisStreamingRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioType;
- (id)encodedClassName;
- (id)gender;
- (id)groupIdentifier;
- (id)languageCode;
- (id)quality;
- (bool)requiresResponse;
- (bool)requiresWordTimingInfo;
- (void)setAudioType:(id)arg1;
- (void)setGender:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setQuality:(id)arg1;
- (void)setRequiresWordTimingInfo:(bool)arg1;
- (void)setSpeakableContextInfo:(id)arg1;
- (void)setText:(id)arg1;
- (void)setVoiceName:(id)arg1;
- (id)speakableContextInfo;
- (id)text;
- (id)voiceName;

@end
