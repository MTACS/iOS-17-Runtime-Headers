
@interface QSSPronChoice : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct PronChoice { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) float log_weight;
@property (nonatomic, readonly) NSString *pron_sequence;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::PronChoice> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronChoice { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronChoice { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (float)log_weight;
- (id)pron_sequence;

@end
