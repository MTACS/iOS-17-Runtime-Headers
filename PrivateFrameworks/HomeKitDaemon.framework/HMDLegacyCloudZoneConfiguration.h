
@interface HMDLegacyCloudZoneConfiguration : HMBCloudZoneConfiguration <NSMutableCopying> {
    NSString * _rootRecordName;
}

@property (copy) NSString *rootRecordName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)rootRecordName;
- (void)setRootRecordName:(id)arg1;

@end
