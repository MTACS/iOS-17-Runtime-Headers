
@interface QSSShortcutFuzzyMatchRequest_StringTokenPair : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct StringTokenPair { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *raw_string;
@property (nonatomic, readonly) NSArray *tokens;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchRequest_::StringTokenPair> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StringTokenPair { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StringTokenPair { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)raw_string;
- (id)tokens;

@end
