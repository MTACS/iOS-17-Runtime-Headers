
@interface FTWebTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct WebTranslationInfo { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *spans;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::WebTranslationInfo> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct WebTranslationInfo { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct WebTranslationInfo { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)spans;
- (unsigned long long)spans_count;
- (void)spans_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)spans_objectAtIndex:(unsigned long long)arg1;
- (id)text;

@end
