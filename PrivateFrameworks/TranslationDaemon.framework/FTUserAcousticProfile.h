
@interface FTUserAcousticProfile : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct UserAcousticProfile { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSData *acoustic_profile_blob;
@property (nonatomic, readonly) NSString *acoustic_profile_version;
@property (nonatomic, readonly) NSString *profile_checksum;

- (void).cxx_destruct;
- (id)acoustic_profile_blob;
- (void)acoustic_profile_blob:(id /* block */)arg1;
- (id)acoustic_profile_version;
- (struct Offset<siri::speech::schema_fb::UserAcousticProfile> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserAcousticProfile { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserAcousticProfile { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)profile_checksum;

@end
