
@interface FTTextToSpeechCacheObject : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechCacheObject { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSData *audio;
@property (nonatomic, readonly) NSArray *word_timing_info;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechCacheObject> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)audio;
- (void)audio:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheObject { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheObject { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)word_timing_info;
- (unsigned long long)word_timing_info_count;
- (void)word_timing_info_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)word_timing_info_objectAtIndex:(unsigned long long)arg1;

@end
