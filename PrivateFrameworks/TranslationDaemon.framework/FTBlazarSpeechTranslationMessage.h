
@interface FTBlazarSpeechTranslationMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct BlazarSpeechTranslationMessage { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, readonly) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (nonatomic, readonly) FTAudioPacket *session_messageAsFTAudioPacket;
@property (nonatomic, readonly) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (nonatomic, readonly) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (nonatomic, readonly) FTFinishAudio *session_messageAsFTFinishAudio;
@property (nonatomic, readonly) FTLanguageDetected *session_messageAsFTLanguageDetected;
@property (nonatomic, readonly) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (nonatomic, readonly) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property (nonatomic, readonly) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (nonatomic, readonly) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property (nonatomic, readonly) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property (nonatomic, readonly) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property (nonatomic, readonly) FTSpeechTranslationAudioPacket *session_messageAsFTSpeechTranslationAudioPacket;
@property (nonatomic, readonly) FTSpeechTranslationFinalRecognitionResponse *session_messageAsFTSpeechTranslationFinalRecognitionResponse;
@property (nonatomic, readonly) FTSpeechTranslationMtResponse *session_messageAsFTSpeechTranslationMtResponse;
@property (nonatomic, readonly) FTSpeechTranslationPartialRecognitionResponse *session_messageAsFTSpeechTranslationPartialRecognitionResponse;
@property (nonatomic, readonly) FTSpeechTranslationServerEndpointFeatures *session_messageAsFTSpeechTranslationServerEndpointFeatures;
@property (nonatomic, readonly) FTSpeechTranslationTextToSpeechResponse *session_messageAsFTSpeechTranslationTextToSpeechResponse;
@property (nonatomic, readonly) FTStartSpeechTranslationLoggingRequest *session_messageAsFTStartSpeechTranslationLoggingRequest;
@property (nonatomic, readonly) FTStartSpeechTranslationRequest *session_messageAsFTStartSpeechTranslationRequest;
@property (nonatomic, readonly) long long session_message_type;

+ (Class)session_message_immutableClassForType:(long long)arg1;
+ (long long)session_message_typeForImmutableObject:(id)arg1;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::BlazarSpeechTranslationMessage> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BlazarSpeechTranslationMessage { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BlazarSpeechTranslationMessage { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)session_message;
- (id)session_messageAsFTAudioLimitExceeded;
- (id)session_messageAsFTAudioPacket;
- (id)session_messageAsFTClientSetupInfo;
- (id)session_messageAsFTFinalBlazarResponse;
- (id)session_messageAsFTFinishAudio;
- (id)session_messageAsFTLanguageDetected;
- (id)session_messageAsFTRecognitionCandidate;
- (id)session_messageAsFTRecognitionProgress;
- (id)session_messageAsFTRequestStatsResponse;
- (id)session_messageAsFTResetServerEndpointer;
- (id)session_messageAsFTServerEndpointFeatures;
- (id)session_messageAsFTSetEndpointerState;
- (id)session_messageAsFTSpeechTranslationAudioPacket;
- (id)session_messageAsFTSpeechTranslationFinalRecognitionResponse;
- (id)session_messageAsFTSpeechTranslationMtResponse;
- (id)session_messageAsFTSpeechTranslationPartialRecognitionResponse;
- (id)session_messageAsFTSpeechTranslationServerEndpointFeatures;
- (id)session_messageAsFTSpeechTranslationTextToSpeechResponse;
- (id)session_messageAsFTStartSpeechTranslationLoggingRequest;
- (id)session_messageAsFTStartSpeechTranslationRequest;
- (long long)session_message_type;

@end
