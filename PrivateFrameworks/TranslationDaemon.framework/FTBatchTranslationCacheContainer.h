
@interface FTBatchTranslationCacheContainer : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct BatchTranslationCacheContainer { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) int sentence_count;
@property (nonatomic, readonly) NSArray *spans;
@property (nonatomic, readonly) NSString *translated_text;
@property (nonatomic, readonly) NSString *translated_text_romanized;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::BatchTranslationCacheContainer> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationCacheContainer { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationCacheContainer { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)request_id;
- (int)sentence_count;
- (id)spans;
- (unsigned long long)spans_count;
- (void)spans_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)spans_objectAtIndex:(unsigned long long)arg1;
- (id)translated_text;
- (id)translated_text_romanized;

@end
