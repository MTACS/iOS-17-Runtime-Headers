
@interface QSSMutableUserAcousticProfile : QSSUserAcousticProfile

@property (nonatomic, copy) NSData *acoustic_profile_blob;
@property (nonatomic, copy) NSString *acoustic_profile_version;
@property (nonatomic, copy) NSString *profile_checksum;

- (id)acoustic_profile_blob;
- (void)acoustic_profile_blob:(id /* block */)arg1;
- (id)acoustic_profile_version;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)profile_checksum;
- (void)setAcoustic_profile_blob:(id)arg1;
- (void)setAcoustic_profile_version:(id)arg1;
- (void)setProfile_checksum:(id)arg1;

@end
