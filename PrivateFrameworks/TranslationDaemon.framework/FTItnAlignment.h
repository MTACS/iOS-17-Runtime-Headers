
@interface FTItnAlignment : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct ItnAlignment { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) int first_post_itn_char_pos;
@property (nonatomic, readonly) int first_pre_itn_token_index;
@property (nonatomic, readonly) int last_post_itn_char_pos;
@property (nonatomic, readonly) int last_pre_itn_token_index;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::ItnAlignment> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)first_post_itn_char_pos;
- (int)first_pre_itn_token_index;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ItnAlignment { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ItnAlignment { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (int)last_post_itn_char_pos;
- (int)last_pre_itn_token_index;

@end
