
@interface FTBatchTranslationRequest_Paragraph : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct Paragraph { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *paragraph_id;
@property (nonatomic, readonly) NSArray *span;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::BatchTranslationRequest_::Paragraph> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Paragraph { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Paragraph { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)paragraph_id;
- (id)span;
- (unsigned long long)span_count;
- (void)span_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)span_objectAtIndex:(unsigned long long)arg1;
- (id)text;

@end
