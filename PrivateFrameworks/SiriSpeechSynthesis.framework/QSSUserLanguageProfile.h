
@interface QSSUserLanguageProfile : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct UserLanguageProfile { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSData *profile_blob;
@property (nonatomic, readonly) NSString *profile_blob_version;
@property (nonatomic, readonly) NSString *profile_checksum;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::UserLanguageProfile> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserLanguageProfile { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserLanguageProfile { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)profile_blob;
- (void)profile_blob:(id /* block */)arg1;
- (id)profile_blob_version;
- (id)profile_checksum;

@end
