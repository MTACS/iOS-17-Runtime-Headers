
@interface FTContextWithPronHints : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct ContextWithPronHints { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *contextual_text;
@property (nonatomic, readonly) NSArray *pron_hints;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::ContextWithPronHints> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)contextual_text;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextWithPronHints { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextWithPronHints { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)pron_hints;
- (unsigned long long)pron_hints_count;
- (void)pron_hints_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)pron_hints_objectAtIndex:(unsigned long long)arg1;

@end
