
@interface FTBlazarMultiUserMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct BlazarMultiUserMessage { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, readonly) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (nonatomic, readonly) FTAudioPacket *session_messageAsFTAudioPacket;
@property (nonatomic, readonly) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (nonatomic, readonly) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (nonatomic, readonly) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property (nonatomic, readonly) FTFinishAudio *session_messageAsFTFinishAudio;
@property (nonatomic, readonly) FTMultiUserStartSpeechRequest *session_messageAsFTMultiUserStartSpeechRequest;
@property (nonatomic, readonly) FTPartialSpeechRecognitionResponse *session_messageAsFTPartialSpeechRecognitionResponse;
@property (nonatomic, readonly) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (nonatomic, readonly) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property (nonatomic, readonly) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (nonatomic, readonly) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property (nonatomic, readonly) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property (nonatomic, readonly) FTSetAlternateRecognitionSausage *session_messageAsFTSetAlternateRecognitionSausage;
@property (nonatomic, readonly) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property (nonatomic, readonly) FTSetRequestOrigin *session_messageAsFTSetRequestOrigin;
@property (nonatomic, readonly) FTSetSpeechContext *session_messageAsFTSetSpeechContext;
@property (nonatomic, readonly) FTSetSpeechProfile *session_messageAsFTSetSpeechProfile;
@property (nonatomic, readonly) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
@property (nonatomic, readonly) long long session_message_type;

+ (Class)session_message_immutableClassForType:(long long)arg1;
+ (long long)session_message_typeForImmutableObject:(id)arg1;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::BlazarMultiUserMessage> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BlazarMultiUserMessage { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BlazarMultiUserMessage { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)session_message;
- (id)session_messageAsFTAudioLimitExceeded;
- (id)session_messageAsFTAudioPacket;
- (id)session_messageAsFTClientSetupInfo;
- (id)session_messageAsFTFinalBlazarResponse;
- (id)session_messageAsFTFinalSpeechRecognitionResponse;
- (id)session_messageAsFTFinishAudio;
- (id)session_messageAsFTMultiUserStartSpeechRequest;
- (id)session_messageAsFTPartialSpeechRecognitionResponse;
- (id)session_messageAsFTRecognitionCandidate;
- (id)session_messageAsFTRecognitionProgress;
- (id)session_messageAsFTRequestStatsResponse;
- (id)session_messageAsFTResetServerEndpointer;
- (id)session_messageAsFTServerEndpointFeatures;
- (id)session_messageAsFTSetAlternateRecognitionSausage;
- (id)session_messageAsFTSetEndpointerState;
- (id)session_messageAsFTSetRequestOrigin;
- (id)session_messageAsFTSetSpeechContext;
- (id)session_messageAsFTSetSpeechProfile;
- (id)session_messageAsFTUpdateAudioInfo;
- (long long)session_message_type;

@end
