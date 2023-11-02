
@interface QSSFinalBlazarResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct FinalBlazarResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_str;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::FinalBlazarResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalBlazarResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalBlazarResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (int)return_code;
- (id)return_str;

@end
