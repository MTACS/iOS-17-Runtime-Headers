
@interface QSSAlignment : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct Alignment { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *index;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::Alignment> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)index;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Alignment { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Alignment { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
