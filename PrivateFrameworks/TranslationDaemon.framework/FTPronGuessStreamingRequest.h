
@interface FTPronGuessStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct PronGuessStreamingRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, readonly) FTAudioPacket *contentAsFTAudioPacket;
@property (nonatomic, readonly) FTCancelRequest *contentAsFTCancelRequest;
@property (nonatomic, readonly) FTFinishAudio *contentAsFTFinishAudio;
@property (nonatomic, readonly) FTStartPronGuessRequest *contentAsFTStartPronGuessRequest;
@property (nonatomic, readonly) long long content_type;

+ (Class)content_immutableClassForType:(long long)arg1;
+ (long long)content_typeForImmutableObject:(id)arg1;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::PronGuessStreamingRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)content;
- (id)contentAsFTAudioPacket;
- (id)contentAsFTCancelRequest;
- (id)contentAsFTFinishAudio;
- (id)contentAsFTStartPronGuessRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronGuessStreamingRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronGuessStreamingRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
