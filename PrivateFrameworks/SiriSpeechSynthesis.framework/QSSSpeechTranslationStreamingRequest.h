
@interface QSSSpeechTranslationStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SpeechTranslationStreamingRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) QSSAudioPacket *contentAsQSSAudioPacket;
@property (nonatomic, readonly) QSSFinishAudio *contentAsQSSFinishAudio;
@property (nonatomic, readonly) QSSLanguageDetected *contentAsQSSLanguageDetected;
@property (nonatomic, readonly) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (nonatomic, readonly) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (nonatomic, readonly) QSSSpeechTranslationAudioPacket *contentAsQSSSpeechTranslationAudioPacket;
@property (nonatomic, readonly) QSSStartSpeechTranslationLoggingRequest *contentAsQSSStartSpeechTranslationLoggingRequest;
@property (nonatomic, readonly) QSSStartSpeechTranslationRequest *contentAsQSSStartSpeechTranslationRequest;
@property (nonatomic, readonly) long long content_type;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::SpeechTranslationStreamingRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)contentAsQSSAudioPacket;
- (id)contentAsQSSFinishAudio;
- (id)contentAsQSSLanguageDetected;
- (id)contentAsQSSResetServerEndpointer;
- (id)contentAsQSSSetEndpointerState;
- (id)contentAsQSSSpeechTranslationAudioPacket;
- (id)contentAsQSSStartSpeechTranslationLoggingRequest;
- (id)contentAsQSSStartSpeechTranslationRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationStreamingRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationStreamingRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
