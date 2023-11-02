
@interface QSSRecognitionStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct RecognitionStreamingRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) QSSAudioPacket *contentAsQSSAudioPacket;
@property (nonatomic, readonly) QSSCheckForSpeechRequest *contentAsQSSCheckForSpeechRequest;
@property (nonatomic, readonly) QSSFinishAudio *contentAsQSSFinishAudio;
@property (nonatomic, readonly) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (nonatomic, readonly) QSSSetAlternateRecognitionSausage *contentAsQSSSetAlternateRecognitionSausage;
@property (nonatomic, readonly) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (nonatomic, readonly) QSSSetRequestOrigin *contentAsQSSSetRequestOrigin;
@property (nonatomic, readonly) QSSSetSpeechContext *contentAsQSSSetSpeechContext;
@property (nonatomic, readonly) QSSSetSpeechProfile *contentAsQSSSetSpeechProfile;
@property (nonatomic, readonly) QSSStartSpeechRequest *contentAsQSSStartSpeechRequest;
@property (nonatomic, readonly) QSSUpdateAudioInfo *contentAsQSSUpdateAudioInfo;
@property (nonatomic, readonly) long long content_type;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::RecognitionStreamingRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)contentAsQSSAudioPacket;
- (id)contentAsQSSCheckForSpeechRequest;
- (id)contentAsQSSFinishAudio;
- (id)contentAsQSSResetServerEndpointer;
- (id)contentAsQSSSetAlternateRecognitionSausage;
- (id)contentAsQSSSetEndpointerState;
- (id)contentAsQSSSetRequestOrigin;
- (id)contentAsQSSSetSpeechContext;
- (id)contentAsQSSSetSpeechProfile;
- (id)contentAsQSSStartSpeechRequest;
- (id)contentAsQSSUpdateAudioInfo;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionStreamingRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionStreamingRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
