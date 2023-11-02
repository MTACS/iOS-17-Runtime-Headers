
@interface QSSPronGuessStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct PronGuessStreamingRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) QSSAudioPacket *contentAsQSSAudioPacket;
@property (nonatomic, readonly) QSSCancelRequest *contentAsQSSCancelRequest;
@property (nonatomic, readonly) QSSFinishAudio *contentAsQSSFinishAudio;
@property (nonatomic, readonly) QSSStartPronGuessRequest *contentAsQSSStartPronGuessRequest;
@property (nonatomic, readonly) long long content_type;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::PronGuessStreamingRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)contentAsQSSAudioPacket;
- (id)contentAsQSSCancelRequest;
- (id)contentAsQSSFinishAudio;
- (id)contentAsQSSStartPronGuessRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronGuessStreamingRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronGuessStreamingRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
