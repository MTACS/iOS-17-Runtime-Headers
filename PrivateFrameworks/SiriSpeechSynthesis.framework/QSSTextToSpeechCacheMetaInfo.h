
@interface QSSTextToSpeechCacheMetaInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechCacheMetaInfo { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) int audio_length;
@property (nonatomic, readonly) long long audio_type;
@property (nonatomic, readonly) QSSAudioDescription *decoder_description;
@property (nonatomic, readonly) bool enable_word_timing_info;
@property (nonatomic, readonly) QSSTextToSpeechMeta *meta_info;
@property (nonatomic, readonly) NSString *original_session_id;
@property (nonatomic, readonly) QSSAudioDescription *playback_description;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechCacheMetaInfo> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (int)audio_length;
- (long long)audio_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decoder_description;
- (bool)enable_word_timing_info;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheMetaInfo { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheMetaInfo { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)meta_info;
- (id)original_session_id;
- (id)playback_description;
- (id)text;

@end
