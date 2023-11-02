
@interface FTRequestStatsResponse_BoolStat : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct BoolStat { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool value;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::RequestStatsResponse_::BoolStat> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BoolStat { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BoolStat { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)name;
- (bool)value;

@end
