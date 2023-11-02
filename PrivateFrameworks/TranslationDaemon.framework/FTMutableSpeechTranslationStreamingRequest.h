
@interface FTMutableSpeechTranslationStreamingRequest : FTSpeechTranslationStreamingRequest

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, copy) FTAudioPacket *contentAsFTAudioPacket;
@property (nonatomic, copy) FTFinishAudio *contentAsFTFinishAudio;
@property (nonatomic, copy) FTLanguageDetected *contentAsFTLanguageDetected;
@property (nonatomic, copy) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property (nonatomic, copy) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property (nonatomic, copy) FTSpeechTranslationAudioPacket *contentAsFTSpeechTranslationAudioPacket;
@property (nonatomic, copy) FTStartSpeechTranslationLoggingRequest *contentAsFTStartSpeechTranslationLoggingRequest;
@property (nonatomic, copy) FTStartSpeechTranslationRequest *contentAsFTStartSpeechTranslationRequest;
@property (nonatomic) long long content_type;

+ (Class)content_mutableClassForType:(long long)arg1;
+ (long long)content_typeForMutableObject:(id)arg1;
+ (long long)content_typeForObject:(id)arg1;

- (id)contentAsFTAudioPacket;
- (id)contentAsFTFinishAudio;
- (id)contentAsFTLanguageDetected;
- (id)contentAsFTResetServerEndpointer;
- (id)contentAsFTSetEndpointerState;
- (id)contentAsFTSpeechTranslationAudioPacket;
- (id)contentAsFTStartSpeechTranslationLoggingRequest;
- (id)contentAsFTStartSpeechTranslationRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContent:(id)arg1;
- (void)setContentAsFTAudioPacket:(id)arg1;
- (void)setContentAsFTFinishAudio:(id)arg1;
- (void)setContentAsFTLanguageDetected:(id)arg1;
- (void)setContentAsFTResetServerEndpointer:(id)arg1;
- (void)setContentAsFTSetEndpointerState:(id)arg1;
- (void)setContentAsFTSpeechTranslationAudioPacket:(id)arg1;
- (void)setContentAsFTStartSpeechTranslationLoggingRequest:(id)arg1;
- (void)setContentAsFTStartSpeechTranslationRequest:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
