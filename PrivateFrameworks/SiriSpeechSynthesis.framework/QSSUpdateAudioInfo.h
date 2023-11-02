
@interface QSSUpdateAudioInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct UpdateAudioInfo { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *product_id;
@property (nonatomic, readonly) NSString *vendor_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::UpdateAudioInfo> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UpdateAudioInfo { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UpdateAudioInfo { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)product_id;
- (id)vendor_id;

@end
