
@interface QSSSpan : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct Span { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) bool do_not_translate;
@property (nonatomic, readonly) int end_index;
@property (nonatomic, readonly) NSString *meta_info;
@property (nonatomic, readonly) int start_index;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::Span> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)do_not_translate;
- (int)end_index;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Span { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Span { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)meta_info;
- (int)start_index;

@end
