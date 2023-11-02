
@interface FTTextToSpeechCacheContainer : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechCacheContainer { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) FTTextToSpeechCacheMetaInfo *cache_meta_info;
@property (nonatomic, readonly) NSArray *cache_object;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechCacheContainer> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)cache_meta_info;
- (id)cache_object;
- (unsigned long long)cache_object_count;
- (void)cache_object_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)cache_object_objectAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheContainer { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheContainer { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
