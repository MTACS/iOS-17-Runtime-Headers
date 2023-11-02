
@interface FTLmScorerRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct LmScorerRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *task_name;
@property (nonatomic, readonly) NSString *transcript;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::LmScorerRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language;
- (id)task_name;
- (id)transcript;

@end
