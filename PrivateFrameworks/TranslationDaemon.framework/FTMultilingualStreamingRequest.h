
@interface FTMultilingualStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct MultilingualStreamingRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, readonly) FTAudioPacket *contentAsFTAudioPacket;
@property (nonatomic, readonly) FTFinishAudio *contentAsFTFinishAudio;
@property (nonatomic, readonly) FTLanguageDetected *contentAsFTLanguageDetected;
@property (nonatomic, readonly) FTSetRequestOrigin *contentAsFTSetRequestOrigin;
@property (nonatomic, readonly) FTSetSpeechContext *contentAsFTSetSpeechContext;
@property (nonatomic, readonly) FTSetSpeechProfile *contentAsFTSetSpeechProfile;
@property (nonatomic, readonly) FTStartMultilingualSpeechRequest *contentAsFTStartMultilingualSpeechRequest;
@property (nonatomic, readonly) FTUpdateAudioInfo *contentAsFTUpdateAudioInfo;
@property (nonatomic, readonly) long long content_type;

+ (Class)content_immutableClassForType:(long long)arg1;
+ (long long)content_typeForImmutableObject:(id)arg1;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::MultilingualStreamingRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)content;
- (id)contentAsFTAudioPacket;
- (id)contentAsFTFinishAudio;
- (id)contentAsFTLanguageDetected;
- (id)contentAsFTSetRequestOrigin;
- (id)contentAsFTSetSpeechContext;
- (id)contentAsFTSetSpeechProfile;
- (id)contentAsFTStartMultilingualSpeechRequest;
- (id)contentAsFTUpdateAudioInfo;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultilingualStreamingRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultilingualStreamingRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
