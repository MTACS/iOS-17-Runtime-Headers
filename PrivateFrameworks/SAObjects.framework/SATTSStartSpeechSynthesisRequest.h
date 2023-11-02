
@interface SATTSStartSpeechSynthesisRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *audioType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableAudioInfo;
@property (nonatomic, copy) NSString *gender;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *quality;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSDictionary *speakableContextInfo;
@property (nonatomic) bool streaming;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *voiceName;

+ (id)startSpeechSynthesisRequest;
+ (id)startSpeechSynthesisRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioType;
- (bool)enableAudioInfo;
- (id)encodedClassName;
- (id)gender;
- (id)groupIdentifier;
- (id)languageCode;
- (id)quality;
- (bool)requiresResponse;
- (void)setAudioType:(id)arg1;
- (void)setEnableAudioInfo:(bool)arg1;
- (void)setGender:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setQuality:(id)arg1;
- (void)setSpeakableContextInfo:(id)arg1;
- (void)setStreaming:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setVoiceName:(id)arg1;
- (id)speakableContextInfo;
- (bool)streaming;
- (id)text;
- (id)voiceName;

@end
