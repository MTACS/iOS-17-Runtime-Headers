
@interface FTRepeatedItnAlignment : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct RepeatedItnAlignment { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *itn_alignment;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::RepeatedItnAlignment> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RepeatedItnAlignment { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RepeatedItnAlignment { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)itn_alignment;
- (unsigned long long)itn_alignment_count;
- (void)itn_alignment_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)itn_alignment_objectAtIndex:(unsigned long long)arg1;

@end
