
@interface FTMutableUserLanguageProfile : FTUserLanguageProfile

@property (nonatomic, copy) NSData *profile_blob;
@property (nonatomic, copy) NSString *profile_blob_version;
@property (nonatomic, copy) NSString *profile_checksum;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)profile_blob;
- (void)profile_blob:(id /* block */)arg1;
- (id)profile_blob_version;
- (id)profile_checksum;
- (void)setProfile_blob:(id)arg1;
- (void)setProfile_blob_version:(id)arg1;
- (void)setProfile_checksum:(id)arg1;

@end
