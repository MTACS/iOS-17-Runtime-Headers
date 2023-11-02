
@interface FTAsrRecognitionMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct AsrRecognitionMessage { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, readonly) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (nonatomic, readonly) FTAudioPacket *session_messageAsFTAudioPacket;
@property (nonatomic, readonly) FTCheckForSpeechRequest *session_messageAsFTCheckForSpeechRequest;
@property (nonatomic, readonly) FTCheckForSpeechResponse *session_messageAsFTCheckForSpeechResponse;
@property (nonatomic, readonly) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (nonatomic, readonly) FTEndPointCandidate *session_messageAsFTEndPointCandidate;
@property (nonatomic, readonly) FTEndPointLikelihood *session_messageAsFTEndPointLikelihood;
@property (nonatomic, readonly) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property (nonatomic, readonly) FTFinishAudio *session_messageAsFTFinishAudio;
@property (nonatomic, readonly) FTMultiUserFinalSpeechRecognitionResponse *session_messageAsFTMultiUserFinalSpeechRecognitionResponse;
@property (nonatomic, readonly) FTMultiUserRecognitionCandidate *session_messageAsFTMultiUserRecognitionCandidate;
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
@property (nonatomic, readonly) FTStartSpeechRequest *session_messageAsFTStartSpeechRequest;
@property (nonatomic, readonly) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
@property (nonatomic, readonly) FTUpdatedAcousticProfile *session_messageAsFTUpdatedAcousticProfile;
@property (nonatomic, readonly) long long session_message_type;

+ (Class)session_message_immutableClassForType:(long long)arg1;
+ (long long)session_message_typeForImmutableObject:(id)arg1;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::AsrRecognitionMessage> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AsrRecognitionMessage { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AsrRecognitionMessage { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)session_message;
- (id)session_messageAsFTAudioLimitExceeded;
- (id)session_messageAsFTAudioPacket;
- (id)session_messageAsFTCheckForSpeechRequest;
- (id)session_messageAsFTCheckForSpeechResponse;
- (id)session_messageAsFTClientSetupInfo;
- (id)session_messageAsFTEndPointCandidate;
- (id)session_messageAsFTEndPointLikelihood;
- (id)session_messageAsFTFinalSpeechRecognitionResponse;
- (id)session_messageAsFTFinishAudio;
- (id)session_messageAsFTMultiUserFinalSpeechRecognitionResponse;
- (id)session_messageAsFTMultiUserRecognitionCandidate;
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
- (id)session_messageAsFTStartSpeechRequest;
- (id)session_messageAsFTUpdateAudioInfo;
- (id)session_messageAsFTUpdatedAcousticProfile;
- (long long)session_message_type;

@end
